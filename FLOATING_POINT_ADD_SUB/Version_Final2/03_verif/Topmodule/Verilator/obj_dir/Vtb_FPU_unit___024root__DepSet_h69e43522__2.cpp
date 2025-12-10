// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit___024root.h"

VlCoroutine Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__1__2(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__1__2\n"); );
    // Init
    IData/*31:0*/ tb_FPU_unit__DOT____Vrepeat0;
    tb_FPU_unit__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_o_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_o_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_sr_rounding_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_sr_rounding_error = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__f_t_check;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__f_t_check = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1134__Vfuncout;
    __Vfunc_REAL_TO_HEX__1134__Vfuncout = 0;
    double __Vfunc_Error_actual__1135__Vfuncout;
    __Vfunc_Error_actual__1135__Vfuncout = 0;
    double __Vfunc_Error_actual__1135__f_i_32_s;
    __Vfunc_Error_actual__1135__f_i_32_s = 0;
    double __Vfunc_Error_actual__1135__f_i_32_e;
    __Vfunc_Error_actual__1135__f_i_32_e = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1135__f_t_32_s;
    __Vfunc_Error_actual__1135__f_t_32_s = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1135__f_t_32_e;
    __Vfunc_Error_actual__1135__f_t_32_e = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1135__is_E_one_S;
    __Vfunc_Error_actual__1135__is_E_one_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1135__is_E_one_E;
    __Vfunc_Error_actual__1135__is_E_one_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1135__is_M_zero_S;
    __Vfunc_Error_actual__1135__is_M_zero_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1135__is_M_zero_E;
    __Vfunc_Error_actual__1135__is_M_zero_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1135__is_INF_S;
    __Vfunc_Error_actual__1135__is_INF_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1135__is_INF_E;
    __Vfunc_Error_actual__1135__is_INF_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1135__is_NAN_S;
    __Vfunc_Error_actual__1135__is_NAN_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1135__is_NAN_E;
    __Vfunc_Error_actual__1135__is_NAN_E = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1136__Vfuncout;
    __Vfunc_REAL_TO_HEX__1136__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1136__f_i_data;
    __Vfunc_REAL_TO_HEX__1136__f_i_data = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1137__Vfuncout;
    __Vfunc_REAL_TO_HEX__1137__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1137__f_i_data;
    __Vfunc_REAL_TO_HEX__1137__f_i_data = 0;
    double __Vfunc_ABS_value__1138__Vfuncout;
    __Vfunc_ABS_value__1138__Vfuncout = 0;
    double __Vfunc_ABS_value__1138__f_i_value;
    __Vfunc_ABS_value__1138__f_i_value = 0;
    double __Vfunc_ABS_value__1139__Vfuncout;
    __Vfunc_ABS_value__1139__Vfuncout = 0;
    double __Vfunc_ABS_value__1139__f_i_value;
    __Vfunc_ABS_value__1139__f_i_value = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_un_flow = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_a = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_b = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_s = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_rounding_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_rounding_error = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_error = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__f_t_check;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__f_t_check = 0;
    double __Vfunc_Error_standard__1141__Vfuncout;
    __Vfunc_Error_standard__1141__Vfuncout = 0;
    double __Vfunc_HEX_TO_REAL__1142__Vfuncout;
    __Vfunc_HEX_TO_REAL__1142__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1142__f_i_data;
    __Vfunc_HEX_TO_REAL__1142__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1142__temp;
    __Vfunc_HEX_TO_REAL__1142__temp = 0;
    double __Vfunc_HEX_TO_REAL__1143__Vfuncout;
    __Vfunc_HEX_TO_REAL__1143__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1143__f_i_data;
    __Vfunc_HEX_TO_REAL__1143__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1143__temp;
    __Vfunc_HEX_TO_REAL__1143__temp = 0;
    double __Vfunc_HEX_TO_REAL__1144__Vfuncout;
    __Vfunc_HEX_TO_REAL__1144__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1144__f_i_data;
    __Vfunc_HEX_TO_REAL__1144__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1144__temp;
    __Vfunc_HEX_TO_REAL__1144__temp = 0;
    double __Vfunc_Cal_FPU_expected__1145__Vfuncout;
    __Vfunc_Cal_FPU_expected__1145__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_Cal_FPU_expected__1145__f_i_add_sub;
    __Vfunc_Cal_FPU_expected__1145__f_i_add_sub = 0;
    double __Vfunc_Cal_FPU_expected__1145__f_i_32_a;
    __Vfunc_Cal_FPU_expected__1145__f_i_32_a = 0;
    double __Vfunc_Cal_FPU_expected__1145__f_i_32_b;
    __Vfunc_Cal_FPU_expected__1145__f_i_32_b = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1146__Vfuncout;
    __Vfunc_REAL_TO_HEX__1146__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1146__f_i_data;
    __Vfunc_REAL_TO_HEX__1146__f_i_data = 0;
    double __Vfunc_Error_actual__1147__Vfuncout;
    __Vfunc_Error_actual__1147__Vfuncout = 0;
    double __Vfunc_Error_actual__1147__f_i_32_s;
    __Vfunc_Error_actual__1147__f_i_32_s = 0;
    double __Vfunc_Error_actual__1147__f_i_32_e;
    __Vfunc_Error_actual__1147__f_i_32_e = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1147__f_t_32_s;
    __Vfunc_Error_actual__1147__f_t_32_s = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1147__f_t_32_e;
    __Vfunc_Error_actual__1147__f_t_32_e = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1147__is_E_one_S;
    __Vfunc_Error_actual__1147__is_E_one_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1147__is_E_one_E;
    __Vfunc_Error_actual__1147__is_E_one_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1147__is_M_zero_S;
    __Vfunc_Error_actual__1147__is_M_zero_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1147__is_M_zero_E;
    __Vfunc_Error_actual__1147__is_M_zero_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1147__is_INF_S;
    __Vfunc_Error_actual__1147__is_INF_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1147__is_INF_E;
    __Vfunc_Error_actual__1147__is_INF_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1147__is_NAN_S;
    __Vfunc_Error_actual__1147__is_NAN_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1147__is_NAN_E;
    __Vfunc_Error_actual__1147__is_NAN_E = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1148__Vfuncout;
    __Vfunc_REAL_TO_HEX__1148__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1148__f_i_data;
    __Vfunc_REAL_TO_HEX__1148__f_i_data = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1149__Vfuncout;
    __Vfunc_REAL_TO_HEX__1149__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1149__f_i_data;
    __Vfunc_REAL_TO_HEX__1149__f_i_data = 0;
    double __Vfunc_ABS_value__1150__Vfuncout;
    __Vfunc_ABS_value__1150__Vfuncout = 0;
    double __Vfunc_ABS_value__1150__f_i_value;
    __Vfunc_ABS_value__1150__f_i_value = 0;
    double __Vfunc_ABS_value__1151__Vfuncout;
    __Vfunc_ABS_value__1151__Vfuncout = 0;
    double __Vfunc_ABS_value__1151__f_i_value;
    __Vfunc_ABS_value__1151__f_i_value = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_un_flow = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_a = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_b = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_s = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_rounding_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_rounding_error = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_error = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__f_t_check;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__f_t_check = 0;
    double __Vfunc_Error_standard__1153__Vfuncout;
    __Vfunc_Error_standard__1153__Vfuncout = 0;
    double __Vfunc_HEX_TO_REAL__1154__Vfuncout;
    __Vfunc_HEX_TO_REAL__1154__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1154__f_i_data;
    __Vfunc_HEX_TO_REAL__1154__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1154__temp;
    __Vfunc_HEX_TO_REAL__1154__temp = 0;
    double __Vfunc_HEX_TO_REAL__1155__Vfuncout;
    __Vfunc_HEX_TO_REAL__1155__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1155__f_i_data;
    __Vfunc_HEX_TO_REAL__1155__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1155__temp;
    __Vfunc_HEX_TO_REAL__1155__temp = 0;
    double __Vfunc_HEX_TO_REAL__1156__Vfuncout;
    __Vfunc_HEX_TO_REAL__1156__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1156__f_i_data;
    __Vfunc_HEX_TO_REAL__1156__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1156__temp;
    __Vfunc_HEX_TO_REAL__1156__temp = 0;
    double __Vfunc_Cal_FPU_expected__1157__Vfuncout;
    __Vfunc_Cal_FPU_expected__1157__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_Cal_FPU_expected__1157__f_i_add_sub;
    __Vfunc_Cal_FPU_expected__1157__f_i_add_sub = 0;
    double __Vfunc_Cal_FPU_expected__1157__f_i_32_a;
    __Vfunc_Cal_FPU_expected__1157__f_i_32_a = 0;
    double __Vfunc_Cal_FPU_expected__1157__f_i_32_b;
    __Vfunc_Cal_FPU_expected__1157__f_i_32_b = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1158__Vfuncout;
    __Vfunc_REAL_TO_HEX__1158__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1158__f_i_data;
    __Vfunc_REAL_TO_HEX__1158__f_i_data = 0;
    double __Vfunc_Error_actual__1159__Vfuncout;
    __Vfunc_Error_actual__1159__Vfuncout = 0;
    double __Vfunc_Error_actual__1159__f_i_32_s;
    __Vfunc_Error_actual__1159__f_i_32_s = 0;
    double __Vfunc_Error_actual__1159__f_i_32_e;
    __Vfunc_Error_actual__1159__f_i_32_e = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1159__f_t_32_s;
    __Vfunc_Error_actual__1159__f_t_32_s = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1159__f_t_32_e;
    __Vfunc_Error_actual__1159__f_t_32_e = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1159__is_E_one_S;
    __Vfunc_Error_actual__1159__is_E_one_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1159__is_E_one_E;
    __Vfunc_Error_actual__1159__is_E_one_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1159__is_M_zero_S;
    __Vfunc_Error_actual__1159__is_M_zero_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1159__is_M_zero_E;
    __Vfunc_Error_actual__1159__is_M_zero_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1159__is_INF_S;
    __Vfunc_Error_actual__1159__is_INF_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1159__is_INF_E;
    __Vfunc_Error_actual__1159__is_INF_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1159__is_NAN_S;
    __Vfunc_Error_actual__1159__is_NAN_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1159__is_NAN_E;
    __Vfunc_Error_actual__1159__is_NAN_E = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1160__Vfuncout;
    __Vfunc_REAL_TO_HEX__1160__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1160__f_i_data;
    __Vfunc_REAL_TO_HEX__1160__f_i_data = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1161__Vfuncout;
    __Vfunc_REAL_TO_HEX__1161__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1161__f_i_data;
    __Vfunc_REAL_TO_HEX__1161__f_i_data = 0;
    double __Vfunc_ABS_value__1162__Vfuncout;
    __Vfunc_ABS_value__1162__Vfuncout = 0;
    double __Vfunc_ABS_value__1162__f_i_value;
    __Vfunc_ABS_value__1162__f_i_value = 0;
    double __Vfunc_ABS_value__1163__Vfuncout;
    __Vfunc_ABS_value__1163__Vfuncout = 0;
    double __Vfunc_ABS_value__1163__f_i_value;
    __Vfunc_ABS_value__1163__f_i_value = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_un_flow = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_a = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_b = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_s = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_rounding_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_rounding_error = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_error = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__f_t_check;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__f_t_check = 0;
    double __Vfunc_Error_standard__1165__Vfuncout;
    __Vfunc_Error_standard__1165__Vfuncout = 0;
    double __Vfunc_HEX_TO_REAL__1166__Vfuncout;
    __Vfunc_HEX_TO_REAL__1166__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1166__f_i_data;
    __Vfunc_HEX_TO_REAL__1166__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1166__temp;
    __Vfunc_HEX_TO_REAL__1166__temp = 0;
    double __Vfunc_HEX_TO_REAL__1167__Vfuncout;
    __Vfunc_HEX_TO_REAL__1167__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1167__f_i_data;
    __Vfunc_HEX_TO_REAL__1167__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1167__temp;
    __Vfunc_HEX_TO_REAL__1167__temp = 0;
    double __Vfunc_HEX_TO_REAL__1168__Vfuncout;
    __Vfunc_HEX_TO_REAL__1168__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1168__f_i_data;
    __Vfunc_HEX_TO_REAL__1168__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1168__temp;
    __Vfunc_HEX_TO_REAL__1168__temp = 0;
    double __Vfunc_Cal_FPU_expected__1169__Vfuncout;
    __Vfunc_Cal_FPU_expected__1169__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_Cal_FPU_expected__1169__f_i_add_sub;
    __Vfunc_Cal_FPU_expected__1169__f_i_add_sub = 0;
    double __Vfunc_Cal_FPU_expected__1169__f_i_32_a;
    __Vfunc_Cal_FPU_expected__1169__f_i_32_a = 0;
    double __Vfunc_Cal_FPU_expected__1169__f_i_32_b;
    __Vfunc_Cal_FPU_expected__1169__f_i_32_b = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1170__Vfuncout;
    __Vfunc_REAL_TO_HEX__1170__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1170__f_i_data;
    __Vfunc_REAL_TO_HEX__1170__f_i_data = 0;
    double __Vfunc_Error_actual__1171__Vfuncout;
    __Vfunc_Error_actual__1171__Vfuncout = 0;
    double __Vfunc_Error_actual__1171__f_i_32_s;
    __Vfunc_Error_actual__1171__f_i_32_s = 0;
    double __Vfunc_Error_actual__1171__f_i_32_e;
    __Vfunc_Error_actual__1171__f_i_32_e = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1171__f_t_32_s;
    __Vfunc_Error_actual__1171__f_t_32_s = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1171__f_t_32_e;
    __Vfunc_Error_actual__1171__f_t_32_e = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1171__is_E_one_S;
    __Vfunc_Error_actual__1171__is_E_one_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1171__is_E_one_E;
    __Vfunc_Error_actual__1171__is_E_one_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1171__is_M_zero_S;
    __Vfunc_Error_actual__1171__is_M_zero_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1171__is_M_zero_E;
    __Vfunc_Error_actual__1171__is_M_zero_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1171__is_INF_S;
    __Vfunc_Error_actual__1171__is_INF_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1171__is_INF_E;
    __Vfunc_Error_actual__1171__is_INF_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1171__is_NAN_S;
    __Vfunc_Error_actual__1171__is_NAN_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1171__is_NAN_E;
    __Vfunc_Error_actual__1171__is_NAN_E = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1172__Vfuncout;
    __Vfunc_REAL_TO_HEX__1172__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1172__f_i_data;
    __Vfunc_REAL_TO_HEX__1172__f_i_data = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1173__Vfuncout;
    __Vfunc_REAL_TO_HEX__1173__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1173__f_i_data;
    __Vfunc_REAL_TO_HEX__1173__f_i_data = 0;
    double __Vfunc_ABS_value__1174__Vfuncout;
    __Vfunc_ABS_value__1174__Vfuncout = 0;
    double __Vfunc_ABS_value__1174__f_i_value;
    __Vfunc_ABS_value__1174__f_i_value = 0;
    double __Vfunc_ABS_value__1175__Vfuncout;
    __Vfunc_ABS_value__1175__Vfuncout = 0;
    double __Vfunc_ABS_value__1175__f_i_value;
    __Vfunc_ABS_value__1175__f_i_value = 0;
    std::string __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_type;
    std::string __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_testcase;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_i_fpu_a;
    __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_i_fpu_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_i_fpu_b;
    __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_i_fpu_b = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_un_flow = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_a = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_b = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_s = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_rounding_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_rounding_error = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_error = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__f_t_check;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__f_t_check = 0;
    double __Vfunc_Error_standard__1178__Vfuncout;
    __Vfunc_Error_standard__1178__Vfuncout = 0;
    double __Vfunc_HEX_TO_REAL__1179__Vfuncout;
    __Vfunc_HEX_TO_REAL__1179__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1179__f_i_data;
    __Vfunc_HEX_TO_REAL__1179__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1179__temp;
    __Vfunc_HEX_TO_REAL__1179__temp = 0;
    double __Vfunc_HEX_TO_REAL__1180__Vfuncout;
    __Vfunc_HEX_TO_REAL__1180__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1180__f_i_data;
    __Vfunc_HEX_TO_REAL__1180__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1180__temp;
    __Vfunc_HEX_TO_REAL__1180__temp = 0;
    double __Vfunc_HEX_TO_REAL__1181__Vfuncout;
    __Vfunc_HEX_TO_REAL__1181__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1181__f_i_data;
    __Vfunc_HEX_TO_REAL__1181__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1181__temp;
    __Vfunc_HEX_TO_REAL__1181__temp = 0;
    double __Vfunc_Cal_FPU_expected__1182__Vfuncout;
    __Vfunc_Cal_FPU_expected__1182__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_Cal_FPU_expected__1182__f_i_add_sub;
    __Vfunc_Cal_FPU_expected__1182__f_i_add_sub = 0;
    double __Vfunc_Cal_FPU_expected__1182__f_i_32_a;
    __Vfunc_Cal_FPU_expected__1182__f_i_32_a = 0;
    double __Vfunc_Cal_FPU_expected__1182__f_i_32_b;
    __Vfunc_Cal_FPU_expected__1182__f_i_32_b = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1183__Vfuncout;
    __Vfunc_REAL_TO_HEX__1183__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1183__f_i_data;
    __Vfunc_REAL_TO_HEX__1183__f_i_data = 0;
    double __Vfunc_Error_actual__1184__Vfuncout;
    __Vfunc_Error_actual__1184__Vfuncout = 0;
    double __Vfunc_Error_actual__1184__f_i_32_s;
    __Vfunc_Error_actual__1184__f_i_32_s = 0;
    double __Vfunc_Error_actual__1184__f_i_32_e;
    __Vfunc_Error_actual__1184__f_i_32_e = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1184__f_t_32_s;
    __Vfunc_Error_actual__1184__f_t_32_s = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1184__f_t_32_e;
    __Vfunc_Error_actual__1184__f_t_32_e = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1184__is_E_one_S;
    __Vfunc_Error_actual__1184__is_E_one_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1184__is_E_one_E;
    __Vfunc_Error_actual__1184__is_E_one_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1184__is_M_zero_S;
    __Vfunc_Error_actual__1184__is_M_zero_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1184__is_M_zero_E;
    __Vfunc_Error_actual__1184__is_M_zero_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1184__is_INF_S;
    __Vfunc_Error_actual__1184__is_INF_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1184__is_INF_E;
    __Vfunc_Error_actual__1184__is_INF_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1184__is_NAN_S;
    __Vfunc_Error_actual__1184__is_NAN_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1184__is_NAN_E;
    __Vfunc_Error_actual__1184__is_NAN_E = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1185__Vfuncout;
    __Vfunc_REAL_TO_HEX__1185__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1185__f_i_data;
    __Vfunc_REAL_TO_HEX__1185__f_i_data = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1186__Vfuncout;
    __Vfunc_REAL_TO_HEX__1186__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1186__f_i_data;
    __Vfunc_REAL_TO_HEX__1186__f_i_data = 0;
    double __Vfunc_ABS_value__1187__Vfuncout;
    __Vfunc_ABS_value__1187__Vfuncout = 0;
    double __Vfunc_ABS_value__1187__f_i_value;
    __Vfunc_ABS_value__1187__f_i_value = 0;
    double __Vfunc_ABS_value__1188__Vfuncout;
    __Vfunc_ABS_value__1188__Vfuncout = 0;
    double __Vfunc_ABS_value__1188__f_i_value;
    __Vfunc_ABS_value__1188__f_i_value = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_un_flow = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_a = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_b = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_s = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_rounding_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_rounding_error = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_error = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__f_t_check;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__f_t_check = 0;
    double __Vfunc_Error_standard__1190__Vfuncout;
    __Vfunc_Error_standard__1190__Vfuncout = 0;
    double __Vfunc_HEX_TO_REAL__1191__Vfuncout;
    __Vfunc_HEX_TO_REAL__1191__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1191__f_i_data;
    __Vfunc_HEX_TO_REAL__1191__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1191__temp;
    __Vfunc_HEX_TO_REAL__1191__temp = 0;
    double __Vfunc_HEX_TO_REAL__1192__Vfuncout;
    __Vfunc_HEX_TO_REAL__1192__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1192__f_i_data;
    __Vfunc_HEX_TO_REAL__1192__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1192__temp;
    __Vfunc_HEX_TO_REAL__1192__temp = 0;
    double __Vfunc_HEX_TO_REAL__1193__Vfuncout;
    __Vfunc_HEX_TO_REAL__1193__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1193__f_i_data;
    __Vfunc_HEX_TO_REAL__1193__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1193__temp;
    __Vfunc_HEX_TO_REAL__1193__temp = 0;
    double __Vfunc_Cal_FPU_expected__1194__Vfuncout;
    __Vfunc_Cal_FPU_expected__1194__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_Cal_FPU_expected__1194__f_i_add_sub;
    __Vfunc_Cal_FPU_expected__1194__f_i_add_sub = 0;
    double __Vfunc_Cal_FPU_expected__1194__f_i_32_a;
    __Vfunc_Cal_FPU_expected__1194__f_i_32_a = 0;
    double __Vfunc_Cal_FPU_expected__1194__f_i_32_b;
    __Vfunc_Cal_FPU_expected__1194__f_i_32_b = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1195__Vfuncout;
    __Vfunc_REAL_TO_HEX__1195__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1195__f_i_data;
    __Vfunc_REAL_TO_HEX__1195__f_i_data = 0;
    double __Vfunc_Error_actual__1196__Vfuncout;
    __Vfunc_Error_actual__1196__Vfuncout = 0;
    double __Vfunc_Error_actual__1196__f_i_32_s;
    __Vfunc_Error_actual__1196__f_i_32_s = 0;
    double __Vfunc_Error_actual__1196__f_i_32_e;
    __Vfunc_Error_actual__1196__f_i_32_e = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1196__f_t_32_s;
    __Vfunc_Error_actual__1196__f_t_32_s = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1196__f_t_32_e;
    __Vfunc_Error_actual__1196__f_t_32_e = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1196__is_E_one_S;
    __Vfunc_Error_actual__1196__is_E_one_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1196__is_E_one_E;
    __Vfunc_Error_actual__1196__is_E_one_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1196__is_M_zero_S;
    __Vfunc_Error_actual__1196__is_M_zero_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1196__is_M_zero_E;
    __Vfunc_Error_actual__1196__is_M_zero_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1196__is_INF_S;
    __Vfunc_Error_actual__1196__is_INF_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1196__is_INF_E;
    __Vfunc_Error_actual__1196__is_INF_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1196__is_NAN_S;
    __Vfunc_Error_actual__1196__is_NAN_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1196__is_NAN_E;
    __Vfunc_Error_actual__1196__is_NAN_E = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1197__Vfuncout;
    __Vfunc_REAL_TO_HEX__1197__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1197__f_i_data;
    __Vfunc_REAL_TO_HEX__1197__f_i_data = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1198__Vfuncout;
    __Vfunc_REAL_TO_HEX__1198__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1198__f_i_data;
    __Vfunc_REAL_TO_HEX__1198__f_i_data = 0;
    double __Vfunc_ABS_value__1199__Vfuncout;
    __Vfunc_ABS_value__1199__Vfuncout = 0;
    double __Vfunc_ABS_value__1199__f_i_value;
    __Vfunc_ABS_value__1199__f_i_value = 0;
    double __Vfunc_ABS_value__1200__Vfuncout;
    __Vfunc_ABS_value__1200__Vfuncout = 0;
    double __Vfunc_ABS_value__1200__f_i_value;
    __Vfunc_ABS_value__1200__f_i_value = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_un_flow = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_a = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_b = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_s = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_rounding_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_rounding_error = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_error = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__f_t_check;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__f_t_check = 0;
    double __Vfunc_Error_standard__1202__Vfuncout;
    __Vfunc_Error_standard__1202__Vfuncout = 0;
    double __Vfunc_HEX_TO_REAL__1203__Vfuncout;
    __Vfunc_HEX_TO_REAL__1203__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1203__f_i_data;
    __Vfunc_HEX_TO_REAL__1203__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1203__temp;
    __Vfunc_HEX_TO_REAL__1203__temp = 0;
    double __Vfunc_HEX_TO_REAL__1204__Vfuncout;
    __Vfunc_HEX_TO_REAL__1204__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1204__f_i_data;
    __Vfunc_HEX_TO_REAL__1204__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1204__temp;
    __Vfunc_HEX_TO_REAL__1204__temp = 0;
    double __Vfunc_HEX_TO_REAL__1205__Vfuncout;
    __Vfunc_HEX_TO_REAL__1205__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1205__f_i_data;
    __Vfunc_HEX_TO_REAL__1205__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1205__temp;
    __Vfunc_HEX_TO_REAL__1205__temp = 0;
    double __Vfunc_Cal_FPU_expected__1206__Vfuncout;
    __Vfunc_Cal_FPU_expected__1206__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_Cal_FPU_expected__1206__f_i_add_sub;
    __Vfunc_Cal_FPU_expected__1206__f_i_add_sub = 0;
    double __Vfunc_Cal_FPU_expected__1206__f_i_32_a;
    __Vfunc_Cal_FPU_expected__1206__f_i_32_a = 0;
    double __Vfunc_Cal_FPU_expected__1206__f_i_32_b;
    __Vfunc_Cal_FPU_expected__1206__f_i_32_b = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1207__Vfuncout;
    __Vfunc_REAL_TO_HEX__1207__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1207__f_i_data;
    __Vfunc_REAL_TO_HEX__1207__f_i_data = 0;
    double __Vfunc_Error_actual__1208__Vfuncout;
    __Vfunc_Error_actual__1208__Vfuncout = 0;
    double __Vfunc_Error_actual__1208__f_i_32_s;
    __Vfunc_Error_actual__1208__f_i_32_s = 0;
    double __Vfunc_Error_actual__1208__f_i_32_e;
    __Vfunc_Error_actual__1208__f_i_32_e = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1208__f_t_32_s;
    __Vfunc_Error_actual__1208__f_t_32_s = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1208__f_t_32_e;
    __Vfunc_Error_actual__1208__f_t_32_e = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1208__is_E_one_S;
    __Vfunc_Error_actual__1208__is_E_one_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1208__is_E_one_E;
    __Vfunc_Error_actual__1208__is_E_one_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1208__is_M_zero_S;
    __Vfunc_Error_actual__1208__is_M_zero_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1208__is_M_zero_E;
    __Vfunc_Error_actual__1208__is_M_zero_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1208__is_INF_S;
    __Vfunc_Error_actual__1208__is_INF_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1208__is_INF_E;
    __Vfunc_Error_actual__1208__is_INF_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1208__is_NAN_S;
    __Vfunc_Error_actual__1208__is_NAN_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1208__is_NAN_E;
    __Vfunc_Error_actual__1208__is_NAN_E = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1209__Vfuncout;
    __Vfunc_REAL_TO_HEX__1209__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1209__f_i_data;
    __Vfunc_REAL_TO_HEX__1209__f_i_data = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1210__Vfuncout;
    __Vfunc_REAL_TO_HEX__1210__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1210__f_i_data;
    __Vfunc_REAL_TO_HEX__1210__f_i_data = 0;
    double __Vfunc_ABS_value__1211__Vfuncout;
    __Vfunc_ABS_value__1211__Vfuncout = 0;
    double __Vfunc_ABS_value__1211__f_i_value;
    __Vfunc_ABS_value__1211__f_i_value = 0;
    double __Vfunc_ABS_value__1212__Vfuncout;
    __Vfunc_ABS_value__1212__Vfuncout = 0;
    double __Vfunc_ABS_value__1212__f_i_value;
    __Vfunc_ABS_value__1212__f_i_value = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_un_flow = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_a = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_b = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_s = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_rounding_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_rounding_error = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_error = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__f_t_check;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__f_t_check = 0;
    double __Vfunc_Error_standard__1214__Vfuncout;
    __Vfunc_Error_standard__1214__Vfuncout = 0;
    double __Vfunc_HEX_TO_REAL__1215__Vfuncout;
    __Vfunc_HEX_TO_REAL__1215__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1215__f_i_data;
    __Vfunc_HEX_TO_REAL__1215__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1215__temp;
    __Vfunc_HEX_TO_REAL__1215__temp = 0;
    double __Vfunc_HEX_TO_REAL__1216__Vfuncout;
    __Vfunc_HEX_TO_REAL__1216__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1216__f_i_data;
    __Vfunc_HEX_TO_REAL__1216__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1216__temp;
    __Vfunc_HEX_TO_REAL__1216__temp = 0;
    double __Vfunc_HEX_TO_REAL__1217__Vfuncout;
    __Vfunc_HEX_TO_REAL__1217__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1217__f_i_data;
    __Vfunc_HEX_TO_REAL__1217__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1217__temp;
    __Vfunc_HEX_TO_REAL__1217__temp = 0;
    double __Vfunc_Cal_FPU_expected__1218__Vfuncout;
    __Vfunc_Cal_FPU_expected__1218__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_Cal_FPU_expected__1218__f_i_add_sub;
    __Vfunc_Cal_FPU_expected__1218__f_i_add_sub = 0;
    double __Vfunc_Cal_FPU_expected__1218__f_i_32_a;
    __Vfunc_Cal_FPU_expected__1218__f_i_32_a = 0;
    double __Vfunc_Cal_FPU_expected__1218__f_i_32_b;
    __Vfunc_Cal_FPU_expected__1218__f_i_32_b = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1219__Vfuncout;
    __Vfunc_REAL_TO_HEX__1219__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1219__f_i_data;
    __Vfunc_REAL_TO_HEX__1219__f_i_data = 0;
    double __Vfunc_Error_actual__1220__Vfuncout;
    __Vfunc_Error_actual__1220__Vfuncout = 0;
    double __Vfunc_Error_actual__1220__f_i_32_s;
    __Vfunc_Error_actual__1220__f_i_32_s = 0;
    double __Vfunc_Error_actual__1220__f_i_32_e;
    __Vfunc_Error_actual__1220__f_i_32_e = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1220__f_t_32_s;
    __Vfunc_Error_actual__1220__f_t_32_s = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1220__f_t_32_e;
    __Vfunc_Error_actual__1220__f_t_32_e = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1220__is_E_one_S;
    __Vfunc_Error_actual__1220__is_E_one_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1220__is_E_one_E;
    __Vfunc_Error_actual__1220__is_E_one_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1220__is_M_zero_S;
    __Vfunc_Error_actual__1220__is_M_zero_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1220__is_M_zero_E;
    __Vfunc_Error_actual__1220__is_M_zero_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1220__is_INF_S;
    __Vfunc_Error_actual__1220__is_INF_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1220__is_INF_E;
    __Vfunc_Error_actual__1220__is_INF_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1220__is_NAN_S;
    __Vfunc_Error_actual__1220__is_NAN_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1220__is_NAN_E;
    __Vfunc_Error_actual__1220__is_NAN_E = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1221__Vfuncout;
    __Vfunc_REAL_TO_HEX__1221__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1221__f_i_data;
    __Vfunc_REAL_TO_HEX__1221__f_i_data = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1222__Vfuncout;
    __Vfunc_REAL_TO_HEX__1222__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1222__f_i_data;
    __Vfunc_REAL_TO_HEX__1222__f_i_data = 0;
    double __Vfunc_ABS_value__1223__Vfuncout;
    __Vfunc_ABS_value__1223__Vfuncout = 0;
    double __Vfunc_ABS_value__1223__f_i_value;
    __Vfunc_ABS_value__1223__f_i_value = 0;
    double __Vfunc_ABS_value__1224__Vfuncout;
    __Vfunc_ABS_value__1224__Vfuncout = 0;
    double __Vfunc_ABS_value__1224__f_i_value;
    __Vfunc_ABS_value__1224__f_i_value = 0;
    std::string __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_type;
    std::string __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_testcase;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_i_fpu_a;
    __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_i_fpu_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_i_fpu_b;
    __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_i_fpu_b = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_un_flow = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_a = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_b = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_s = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_rounding_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_rounding_error = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_error = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__f_t_check;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__f_t_check = 0;
    double __Vfunc_Error_standard__1227__Vfuncout;
    __Vfunc_Error_standard__1227__Vfuncout = 0;
    double __Vfunc_HEX_TO_REAL__1228__Vfuncout;
    __Vfunc_HEX_TO_REAL__1228__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1228__f_i_data;
    __Vfunc_HEX_TO_REAL__1228__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1228__temp;
    __Vfunc_HEX_TO_REAL__1228__temp = 0;
    double __Vfunc_HEX_TO_REAL__1229__Vfuncout;
    __Vfunc_HEX_TO_REAL__1229__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1229__f_i_data;
    __Vfunc_HEX_TO_REAL__1229__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1229__temp;
    __Vfunc_HEX_TO_REAL__1229__temp = 0;
    double __Vfunc_HEX_TO_REAL__1230__Vfuncout;
    __Vfunc_HEX_TO_REAL__1230__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1230__f_i_data;
    __Vfunc_HEX_TO_REAL__1230__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1230__temp;
    __Vfunc_HEX_TO_REAL__1230__temp = 0;
    double __Vfunc_Cal_FPU_expected__1231__Vfuncout;
    __Vfunc_Cal_FPU_expected__1231__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_Cal_FPU_expected__1231__f_i_add_sub;
    __Vfunc_Cal_FPU_expected__1231__f_i_add_sub = 0;
    double __Vfunc_Cal_FPU_expected__1231__f_i_32_a;
    __Vfunc_Cal_FPU_expected__1231__f_i_32_a = 0;
    double __Vfunc_Cal_FPU_expected__1231__f_i_32_b;
    __Vfunc_Cal_FPU_expected__1231__f_i_32_b = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1232__Vfuncout;
    __Vfunc_REAL_TO_HEX__1232__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1232__f_i_data;
    __Vfunc_REAL_TO_HEX__1232__f_i_data = 0;
    double __Vfunc_Error_actual__1233__Vfuncout;
    __Vfunc_Error_actual__1233__Vfuncout = 0;
    double __Vfunc_Error_actual__1233__f_i_32_s;
    __Vfunc_Error_actual__1233__f_i_32_s = 0;
    double __Vfunc_Error_actual__1233__f_i_32_e;
    __Vfunc_Error_actual__1233__f_i_32_e = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1233__f_t_32_s;
    __Vfunc_Error_actual__1233__f_t_32_s = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1233__f_t_32_e;
    __Vfunc_Error_actual__1233__f_t_32_e = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1233__is_E_one_S;
    __Vfunc_Error_actual__1233__is_E_one_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1233__is_E_one_E;
    __Vfunc_Error_actual__1233__is_E_one_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1233__is_M_zero_S;
    __Vfunc_Error_actual__1233__is_M_zero_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1233__is_M_zero_E;
    __Vfunc_Error_actual__1233__is_M_zero_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1233__is_INF_S;
    __Vfunc_Error_actual__1233__is_INF_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1233__is_INF_E;
    __Vfunc_Error_actual__1233__is_INF_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1233__is_NAN_S;
    __Vfunc_Error_actual__1233__is_NAN_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1233__is_NAN_E;
    __Vfunc_Error_actual__1233__is_NAN_E = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1234__Vfuncout;
    __Vfunc_REAL_TO_HEX__1234__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1234__f_i_data;
    __Vfunc_REAL_TO_HEX__1234__f_i_data = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1235__Vfuncout;
    __Vfunc_REAL_TO_HEX__1235__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1235__f_i_data;
    __Vfunc_REAL_TO_HEX__1235__f_i_data = 0;
    double __Vfunc_ABS_value__1236__Vfuncout;
    __Vfunc_ABS_value__1236__Vfuncout = 0;
    double __Vfunc_ABS_value__1236__f_i_value;
    __Vfunc_ABS_value__1236__f_i_value = 0;
    double __Vfunc_ABS_value__1237__Vfuncout;
    __Vfunc_ABS_value__1237__Vfuncout = 0;
    double __Vfunc_ABS_value__1237__f_i_value;
    __Vfunc_ABS_value__1237__f_i_value = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_un_flow = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_a = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_b = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_s = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_rounding_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_rounding_error = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_error = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__f_t_check;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__f_t_check = 0;
    double __Vfunc_Error_standard__1239__Vfuncout;
    __Vfunc_Error_standard__1239__Vfuncout = 0;
    double __Vfunc_HEX_TO_REAL__1240__Vfuncout;
    __Vfunc_HEX_TO_REAL__1240__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1240__f_i_data;
    __Vfunc_HEX_TO_REAL__1240__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1240__temp;
    __Vfunc_HEX_TO_REAL__1240__temp = 0;
    double __Vfunc_HEX_TO_REAL__1241__Vfuncout;
    __Vfunc_HEX_TO_REAL__1241__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1241__f_i_data;
    __Vfunc_HEX_TO_REAL__1241__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1241__temp;
    __Vfunc_HEX_TO_REAL__1241__temp = 0;
    double __Vfunc_HEX_TO_REAL__1242__Vfuncout;
    __Vfunc_HEX_TO_REAL__1242__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1242__f_i_data;
    __Vfunc_HEX_TO_REAL__1242__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1242__temp;
    __Vfunc_HEX_TO_REAL__1242__temp = 0;
    double __Vfunc_Cal_FPU_expected__1243__Vfuncout;
    __Vfunc_Cal_FPU_expected__1243__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_Cal_FPU_expected__1243__f_i_add_sub;
    __Vfunc_Cal_FPU_expected__1243__f_i_add_sub = 0;
    double __Vfunc_Cal_FPU_expected__1243__f_i_32_a;
    __Vfunc_Cal_FPU_expected__1243__f_i_32_a = 0;
    double __Vfunc_Cal_FPU_expected__1243__f_i_32_b;
    __Vfunc_Cal_FPU_expected__1243__f_i_32_b = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1244__Vfuncout;
    __Vfunc_REAL_TO_HEX__1244__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1244__f_i_data;
    __Vfunc_REAL_TO_HEX__1244__f_i_data = 0;
    double __Vfunc_Error_actual__1245__Vfuncout;
    __Vfunc_Error_actual__1245__Vfuncout = 0;
    double __Vfunc_Error_actual__1245__f_i_32_s;
    __Vfunc_Error_actual__1245__f_i_32_s = 0;
    double __Vfunc_Error_actual__1245__f_i_32_e;
    __Vfunc_Error_actual__1245__f_i_32_e = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1245__f_t_32_s;
    __Vfunc_Error_actual__1245__f_t_32_s = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1245__f_t_32_e;
    __Vfunc_Error_actual__1245__f_t_32_e = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1245__is_E_one_S;
    __Vfunc_Error_actual__1245__is_E_one_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1245__is_E_one_E;
    __Vfunc_Error_actual__1245__is_E_one_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1245__is_M_zero_S;
    __Vfunc_Error_actual__1245__is_M_zero_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1245__is_M_zero_E;
    __Vfunc_Error_actual__1245__is_M_zero_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1245__is_INF_S;
    __Vfunc_Error_actual__1245__is_INF_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1245__is_INF_E;
    __Vfunc_Error_actual__1245__is_INF_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1245__is_NAN_S;
    __Vfunc_Error_actual__1245__is_NAN_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1245__is_NAN_E;
    __Vfunc_Error_actual__1245__is_NAN_E = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1246__Vfuncout;
    __Vfunc_REAL_TO_HEX__1246__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1246__f_i_data;
    __Vfunc_REAL_TO_HEX__1246__f_i_data = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1247__Vfuncout;
    __Vfunc_REAL_TO_HEX__1247__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1247__f_i_data;
    __Vfunc_REAL_TO_HEX__1247__f_i_data = 0;
    double __Vfunc_ABS_value__1248__Vfuncout;
    __Vfunc_ABS_value__1248__Vfuncout = 0;
    double __Vfunc_ABS_value__1248__f_i_value;
    __Vfunc_ABS_value__1248__f_i_value = 0;
    double __Vfunc_ABS_value__1249__Vfuncout;
    __Vfunc_ABS_value__1249__Vfuncout = 0;
    double __Vfunc_ABS_value__1249__f_i_value;
    __Vfunc_ABS_value__1249__f_i_value = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_un_flow = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_a = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_b = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_s = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_rounding_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_rounding_error = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_error = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__f_t_check;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__f_t_check = 0;
    double __Vfunc_Error_standard__1251__Vfuncout;
    __Vfunc_Error_standard__1251__Vfuncout = 0;
    double __Vfunc_HEX_TO_REAL__1252__Vfuncout;
    __Vfunc_HEX_TO_REAL__1252__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1252__f_i_data;
    __Vfunc_HEX_TO_REAL__1252__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1252__temp;
    __Vfunc_HEX_TO_REAL__1252__temp = 0;
    double __Vfunc_HEX_TO_REAL__1253__Vfuncout;
    __Vfunc_HEX_TO_REAL__1253__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1253__f_i_data;
    __Vfunc_HEX_TO_REAL__1253__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1253__temp;
    __Vfunc_HEX_TO_REAL__1253__temp = 0;
    double __Vfunc_HEX_TO_REAL__1254__Vfuncout;
    __Vfunc_HEX_TO_REAL__1254__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1254__f_i_data;
    __Vfunc_HEX_TO_REAL__1254__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1254__temp;
    __Vfunc_HEX_TO_REAL__1254__temp = 0;
    double __Vfunc_Cal_FPU_expected__1255__Vfuncout;
    __Vfunc_Cal_FPU_expected__1255__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_Cal_FPU_expected__1255__f_i_add_sub;
    __Vfunc_Cal_FPU_expected__1255__f_i_add_sub = 0;
    double __Vfunc_Cal_FPU_expected__1255__f_i_32_a;
    __Vfunc_Cal_FPU_expected__1255__f_i_32_a = 0;
    double __Vfunc_Cal_FPU_expected__1255__f_i_32_b;
    __Vfunc_Cal_FPU_expected__1255__f_i_32_b = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1256__Vfuncout;
    __Vfunc_REAL_TO_HEX__1256__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1256__f_i_data;
    __Vfunc_REAL_TO_HEX__1256__f_i_data = 0;
    double __Vfunc_Error_actual__1257__Vfuncout;
    __Vfunc_Error_actual__1257__Vfuncout = 0;
    double __Vfunc_Error_actual__1257__f_i_32_s;
    __Vfunc_Error_actual__1257__f_i_32_s = 0;
    double __Vfunc_Error_actual__1257__f_i_32_e;
    __Vfunc_Error_actual__1257__f_i_32_e = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1257__f_t_32_s;
    __Vfunc_Error_actual__1257__f_t_32_s = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1257__f_t_32_e;
    __Vfunc_Error_actual__1257__f_t_32_e = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1257__is_E_one_S;
    __Vfunc_Error_actual__1257__is_E_one_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1257__is_E_one_E;
    __Vfunc_Error_actual__1257__is_E_one_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1257__is_M_zero_S;
    __Vfunc_Error_actual__1257__is_M_zero_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1257__is_M_zero_E;
    __Vfunc_Error_actual__1257__is_M_zero_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1257__is_INF_S;
    __Vfunc_Error_actual__1257__is_INF_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1257__is_INF_E;
    __Vfunc_Error_actual__1257__is_INF_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1257__is_NAN_S;
    __Vfunc_Error_actual__1257__is_NAN_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1257__is_NAN_E;
    __Vfunc_Error_actual__1257__is_NAN_E = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1258__Vfuncout;
    __Vfunc_REAL_TO_HEX__1258__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1258__f_i_data;
    __Vfunc_REAL_TO_HEX__1258__f_i_data = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1259__Vfuncout;
    __Vfunc_REAL_TO_HEX__1259__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1259__f_i_data;
    __Vfunc_REAL_TO_HEX__1259__f_i_data = 0;
    double __Vfunc_ABS_value__1260__Vfuncout;
    __Vfunc_ABS_value__1260__Vfuncout = 0;
    double __Vfunc_ABS_value__1260__f_i_value;
    __Vfunc_ABS_value__1260__f_i_value = 0;
    double __Vfunc_ABS_value__1261__Vfuncout;
    __Vfunc_ABS_value__1261__Vfuncout = 0;
    double __Vfunc_ABS_value__1261__f_i_value;
    __Vfunc_ABS_value__1261__f_i_value = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_un_flow = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_a = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_b = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_s = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_rounding_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_rounding_error = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_error = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__f_t_check;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__f_t_check = 0;
    double __Vfunc_Error_standard__1263__Vfuncout;
    __Vfunc_Error_standard__1263__Vfuncout = 0;
    double __Vfunc_HEX_TO_REAL__1264__Vfuncout;
    __Vfunc_HEX_TO_REAL__1264__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1264__f_i_data;
    __Vfunc_HEX_TO_REAL__1264__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1264__temp;
    __Vfunc_HEX_TO_REAL__1264__temp = 0;
    double __Vfunc_HEX_TO_REAL__1265__Vfuncout;
    __Vfunc_HEX_TO_REAL__1265__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1265__f_i_data;
    __Vfunc_HEX_TO_REAL__1265__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1265__temp;
    __Vfunc_HEX_TO_REAL__1265__temp = 0;
    double __Vfunc_HEX_TO_REAL__1266__Vfuncout;
    __Vfunc_HEX_TO_REAL__1266__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1266__f_i_data;
    __Vfunc_HEX_TO_REAL__1266__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1266__temp;
    __Vfunc_HEX_TO_REAL__1266__temp = 0;
    double __Vfunc_Cal_FPU_expected__1267__Vfuncout;
    __Vfunc_Cal_FPU_expected__1267__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_Cal_FPU_expected__1267__f_i_add_sub;
    __Vfunc_Cal_FPU_expected__1267__f_i_add_sub = 0;
    double __Vfunc_Cal_FPU_expected__1267__f_i_32_a;
    __Vfunc_Cal_FPU_expected__1267__f_i_32_a = 0;
    double __Vfunc_Cal_FPU_expected__1267__f_i_32_b;
    __Vfunc_Cal_FPU_expected__1267__f_i_32_b = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1268__Vfuncout;
    __Vfunc_REAL_TO_HEX__1268__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1268__f_i_data;
    __Vfunc_REAL_TO_HEX__1268__f_i_data = 0;
    double __Vfunc_Error_actual__1269__Vfuncout;
    __Vfunc_Error_actual__1269__Vfuncout = 0;
    double __Vfunc_Error_actual__1269__f_i_32_s;
    __Vfunc_Error_actual__1269__f_i_32_s = 0;
    double __Vfunc_Error_actual__1269__f_i_32_e;
    __Vfunc_Error_actual__1269__f_i_32_e = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1269__f_t_32_s;
    __Vfunc_Error_actual__1269__f_t_32_s = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1269__f_t_32_e;
    __Vfunc_Error_actual__1269__f_t_32_e = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1269__is_E_one_S;
    __Vfunc_Error_actual__1269__is_E_one_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1269__is_E_one_E;
    __Vfunc_Error_actual__1269__is_E_one_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1269__is_M_zero_S;
    __Vfunc_Error_actual__1269__is_M_zero_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1269__is_M_zero_E;
    __Vfunc_Error_actual__1269__is_M_zero_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1269__is_INF_S;
    __Vfunc_Error_actual__1269__is_INF_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1269__is_INF_E;
    __Vfunc_Error_actual__1269__is_INF_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1269__is_NAN_S;
    __Vfunc_Error_actual__1269__is_NAN_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1269__is_NAN_E;
    __Vfunc_Error_actual__1269__is_NAN_E = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1270__Vfuncout;
    __Vfunc_REAL_TO_HEX__1270__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1270__f_i_data;
    __Vfunc_REAL_TO_HEX__1270__f_i_data = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1271__Vfuncout;
    __Vfunc_REAL_TO_HEX__1271__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1271__f_i_data;
    __Vfunc_REAL_TO_HEX__1271__f_i_data = 0;
    double __Vfunc_ABS_value__1272__Vfuncout;
    __Vfunc_ABS_value__1272__Vfuncout = 0;
    double __Vfunc_ABS_value__1272__f_i_value;
    __Vfunc_ABS_value__1272__f_i_value = 0;
    double __Vfunc_ABS_value__1273__Vfuncout;
    __Vfunc_ABS_value__1273__Vfuncout = 0;
    double __Vfunc_ABS_value__1273__f_i_value;
    __Vfunc_ABS_value__1273__f_i_value = 0;
    std::string __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_type;
    std::string __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_testcase;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_i_fpu_a;
    __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_i_fpu_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_i_fpu_b;
    __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_i_fpu_b = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_un_flow = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_a = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_b = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_s = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_rounding_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_rounding_error = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_error = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__f_t_check;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__f_t_check = 0;
    double __Vfunc_Error_standard__1276__Vfuncout;
    __Vfunc_Error_standard__1276__Vfuncout = 0;
    double __Vfunc_HEX_TO_REAL__1277__Vfuncout;
    __Vfunc_HEX_TO_REAL__1277__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1277__f_i_data;
    __Vfunc_HEX_TO_REAL__1277__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1277__temp;
    __Vfunc_HEX_TO_REAL__1277__temp = 0;
    double __Vfunc_HEX_TO_REAL__1278__Vfuncout;
    __Vfunc_HEX_TO_REAL__1278__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1278__f_i_data;
    __Vfunc_HEX_TO_REAL__1278__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1278__temp;
    __Vfunc_HEX_TO_REAL__1278__temp = 0;
    double __Vfunc_HEX_TO_REAL__1279__Vfuncout;
    __Vfunc_HEX_TO_REAL__1279__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1279__f_i_data;
    __Vfunc_HEX_TO_REAL__1279__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1279__temp;
    __Vfunc_HEX_TO_REAL__1279__temp = 0;
    double __Vfunc_Cal_FPU_expected__1280__Vfuncout;
    __Vfunc_Cal_FPU_expected__1280__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_Cal_FPU_expected__1280__f_i_add_sub;
    __Vfunc_Cal_FPU_expected__1280__f_i_add_sub = 0;
    double __Vfunc_Cal_FPU_expected__1280__f_i_32_a;
    __Vfunc_Cal_FPU_expected__1280__f_i_32_a = 0;
    double __Vfunc_Cal_FPU_expected__1280__f_i_32_b;
    __Vfunc_Cal_FPU_expected__1280__f_i_32_b = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1281__Vfuncout;
    __Vfunc_REAL_TO_HEX__1281__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1281__f_i_data;
    __Vfunc_REAL_TO_HEX__1281__f_i_data = 0;
    double __Vfunc_Error_actual__1282__Vfuncout;
    __Vfunc_Error_actual__1282__Vfuncout = 0;
    double __Vfunc_Error_actual__1282__f_i_32_s;
    __Vfunc_Error_actual__1282__f_i_32_s = 0;
    double __Vfunc_Error_actual__1282__f_i_32_e;
    __Vfunc_Error_actual__1282__f_i_32_e = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1282__f_t_32_s;
    __Vfunc_Error_actual__1282__f_t_32_s = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1282__f_t_32_e;
    __Vfunc_Error_actual__1282__f_t_32_e = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1282__is_E_one_S;
    __Vfunc_Error_actual__1282__is_E_one_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1282__is_E_one_E;
    __Vfunc_Error_actual__1282__is_E_one_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1282__is_M_zero_S;
    __Vfunc_Error_actual__1282__is_M_zero_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1282__is_M_zero_E;
    __Vfunc_Error_actual__1282__is_M_zero_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1282__is_INF_S;
    __Vfunc_Error_actual__1282__is_INF_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1282__is_INF_E;
    __Vfunc_Error_actual__1282__is_INF_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1282__is_NAN_S;
    __Vfunc_Error_actual__1282__is_NAN_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1282__is_NAN_E;
    __Vfunc_Error_actual__1282__is_NAN_E = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1283__Vfuncout;
    __Vfunc_REAL_TO_HEX__1283__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1283__f_i_data;
    __Vfunc_REAL_TO_HEX__1283__f_i_data = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1284__Vfuncout;
    __Vfunc_REAL_TO_HEX__1284__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1284__f_i_data;
    __Vfunc_REAL_TO_HEX__1284__f_i_data = 0;
    double __Vfunc_ABS_value__1285__Vfuncout;
    __Vfunc_ABS_value__1285__Vfuncout = 0;
    double __Vfunc_ABS_value__1285__f_i_value;
    __Vfunc_ABS_value__1285__f_i_value = 0;
    double __Vfunc_ABS_value__1286__Vfuncout;
    __Vfunc_ABS_value__1286__Vfuncout = 0;
    double __Vfunc_ABS_value__1286__f_i_value;
    __Vfunc_ABS_value__1286__f_i_value = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_un_flow = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_a = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_b = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_s = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_rounding_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_rounding_error = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_error = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__f_t_check;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__f_t_check = 0;
    double __Vfunc_Error_standard__1288__Vfuncout;
    __Vfunc_Error_standard__1288__Vfuncout = 0;
    double __Vfunc_HEX_TO_REAL__1289__Vfuncout;
    __Vfunc_HEX_TO_REAL__1289__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1289__f_i_data;
    __Vfunc_HEX_TO_REAL__1289__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1289__temp;
    __Vfunc_HEX_TO_REAL__1289__temp = 0;
    double __Vfunc_HEX_TO_REAL__1290__Vfuncout;
    __Vfunc_HEX_TO_REAL__1290__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1290__f_i_data;
    __Vfunc_HEX_TO_REAL__1290__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1290__temp;
    __Vfunc_HEX_TO_REAL__1290__temp = 0;
    double __Vfunc_HEX_TO_REAL__1291__Vfuncout;
    __Vfunc_HEX_TO_REAL__1291__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1291__f_i_data;
    __Vfunc_HEX_TO_REAL__1291__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1291__temp;
    __Vfunc_HEX_TO_REAL__1291__temp = 0;
    double __Vfunc_Cal_FPU_expected__1292__Vfuncout;
    __Vfunc_Cal_FPU_expected__1292__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_Cal_FPU_expected__1292__f_i_add_sub;
    __Vfunc_Cal_FPU_expected__1292__f_i_add_sub = 0;
    double __Vfunc_Cal_FPU_expected__1292__f_i_32_a;
    __Vfunc_Cal_FPU_expected__1292__f_i_32_a = 0;
    double __Vfunc_Cal_FPU_expected__1292__f_i_32_b;
    __Vfunc_Cal_FPU_expected__1292__f_i_32_b = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1293__Vfuncout;
    __Vfunc_REAL_TO_HEX__1293__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1293__f_i_data;
    __Vfunc_REAL_TO_HEX__1293__f_i_data = 0;
    double __Vfunc_Error_actual__1294__Vfuncout;
    __Vfunc_Error_actual__1294__Vfuncout = 0;
    double __Vfunc_Error_actual__1294__f_i_32_s;
    __Vfunc_Error_actual__1294__f_i_32_s = 0;
    double __Vfunc_Error_actual__1294__f_i_32_e;
    __Vfunc_Error_actual__1294__f_i_32_e = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1294__f_t_32_s;
    __Vfunc_Error_actual__1294__f_t_32_s = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1294__f_t_32_e;
    __Vfunc_Error_actual__1294__f_t_32_e = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1294__is_E_one_S;
    __Vfunc_Error_actual__1294__is_E_one_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1294__is_E_one_E;
    __Vfunc_Error_actual__1294__is_E_one_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1294__is_M_zero_S;
    __Vfunc_Error_actual__1294__is_M_zero_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1294__is_M_zero_E;
    __Vfunc_Error_actual__1294__is_M_zero_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1294__is_INF_S;
    __Vfunc_Error_actual__1294__is_INF_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1294__is_INF_E;
    __Vfunc_Error_actual__1294__is_INF_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1294__is_NAN_S;
    __Vfunc_Error_actual__1294__is_NAN_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1294__is_NAN_E;
    __Vfunc_Error_actual__1294__is_NAN_E = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1295__Vfuncout;
    __Vfunc_REAL_TO_HEX__1295__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1295__f_i_data;
    __Vfunc_REAL_TO_HEX__1295__f_i_data = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1296__Vfuncout;
    __Vfunc_REAL_TO_HEX__1296__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1296__f_i_data;
    __Vfunc_REAL_TO_HEX__1296__f_i_data = 0;
    double __Vfunc_ABS_value__1297__Vfuncout;
    __Vfunc_ABS_value__1297__Vfuncout = 0;
    double __Vfunc_ABS_value__1297__f_i_value;
    __Vfunc_ABS_value__1297__f_i_value = 0;
    double __Vfunc_ABS_value__1298__Vfuncout;
    __Vfunc_ABS_value__1298__Vfuncout = 0;
    double __Vfunc_ABS_value__1298__f_i_value;
    __Vfunc_ABS_value__1298__f_i_value = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_un_flow = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_a = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_b = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_s = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_rounding_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_rounding_error = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_error = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__f_t_check;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__f_t_check = 0;
    double __Vfunc_Error_standard__1300__Vfuncout;
    __Vfunc_Error_standard__1300__Vfuncout = 0;
    double __Vfunc_HEX_TO_REAL__1301__Vfuncout;
    __Vfunc_HEX_TO_REAL__1301__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1301__f_i_data;
    __Vfunc_HEX_TO_REAL__1301__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1301__temp;
    __Vfunc_HEX_TO_REAL__1301__temp = 0;
    double __Vfunc_HEX_TO_REAL__1302__Vfuncout;
    __Vfunc_HEX_TO_REAL__1302__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1302__f_i_data;
    __Vfunc_HEX_TO_REAL__1302__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1302__temp;
    __Vfunc_HEX_TO_REAL__1302__temp = 0;
    double __Vfunc_HEX_TO_REAL__1303__Vfuncout;
    __Vfunc_HEX_TO_REAL__1303__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1303__f_i_data;
    __Vfunc_HEX_TO_REAL__1303__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1303__temp;
    __Vfunc_HEX_TO_REAL__1303__temp = 0;
    double __Vfunc_Cal_FPU_expected__1304__Vfuncout;
    __Vfunc_Cal_FPU_expected__1304__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_Cal_FPU_expected__1304__f_i_add_sub;
    __Vfunc_Cal_FPU_expected__1304__f_i_add_sub = 0;
    double __Vfunc_Cal_FPU_expected__1304__f_i_32_a;
    __Vfunc_Cal_FPU_expected__1304__f_i_32_a = 0;
    double __Vfunc_Cal_FPU_expected__1304__f_i_32_b;
    __Vfunc_Cal_FPU_expected__1304__f_i_32_b = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1305__Vfuncout;
    __Vfunc_REAL_TO_HEX__1305__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1305__f_i_data;
    __Vfunc_REAL_TO_HEX__1305__f_i_data = 0;
    double __Vfunc_Error_actual__1306__Vfuncout;
    __Vfunc_Error_actual__1306__Vfuncout = 0;
    double __Vfunc_Error_actual__1306__f_i_32_s;
    __Vfunc_Error_actual__1306__f_i_32_s = 0;
    double __Vfunc_Error_actual__1306__f_i_32_e;
    __Vfunc_Error_actual__1306__f_i_32_e = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1306__f_t_32_s;
    __Vfunc_Error_actual__1306__f_t_32_s = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1306__f_t_32_e;
    __Vfunc_Error_actual__1306__f_t_32_e = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1306__is_E_one_S;
    __Vfunc_Error_actual__1306__is_E_one_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1306__is_E_one_E;
    __Vfunc_Error_actual__1306__is_E_one_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1306__is_M_zero_S;
    __Vfunc_Error_actual__1306__is_M_zero_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1306__is_M_zero_E;
    __Vfunc_Error_actual__1306__is_M_zero_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1306__is_INF_S;
    __Vfunc_Error_actual__1306__is_INF_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1306__is_INF_E;
    __Vfunc_Error_actual__1306__is_INF_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1306__is_NAN_S;
    __Vfunc_Error_actual__1306__is_NAN_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1306__is_NAN_E;
    __Vfunc_Error_actual__1306__is_NAN_E = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1307__Vfuncout;
    __Vfunc_REAL_TO_HEX__1307__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1307__f_i_data;
    __Vfunc_REAL_TO_HEX__1307__f_i_data = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1308__Vfuncout;
    __Vfunc_REAL_TO_HEX__1308__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1308__f_i_data;
    __Vfunc_REAL_TO_HEX__1308__f_i_data = 0;
    double __Vfunc_ABS_value__1309__Vfuncout;
    __Vfunc_ABS_value__1309__Vfuncout = 0;
    double __Vfunc_ABS_value__1309__f_i_value;
    __Vfunc_ABS_value__1309__f_i_value = 0;
    double __Vfunc_ABS_value__1310__Vfuncout;
    __Vfunc_ABS_value__1310__Vfuncout = 0;
    double __Vfunc_ABS_value__1310__f_i_value;
    __Vfunc_ABS_value__1310__f_i_value = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_un_flow = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_a = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_b = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_s = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_e;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_e = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_rounding_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_rounding_error = 0;
    double __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_error;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_error = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__f_t_check;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__f_t_check = 0;
    double __Vfunc_Error_standard__1312__Vfuncout;
    __Vfunc_Error_standard__1312__Vfuncout = 0;
    double __Vfunc_HEX_TO_REAL__1313__Vfuncout;
    __Vfunc_HEX_TO_REAL__1313__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1313__f_i_data;
    __Vfunc_HEX_TO_REAL__1313__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1313__temp;
    __Vfunc_HEX_TO_REAL__1313__temp = 0;
    double __Vfunc_HEX_TO_REAL__1314__Vfuncout;
    __Vfunc_HEX_TO_REAL__1314__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1314__f_i_data;
    __Vfunc_HEX_TO_REAL__1314__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1314__temp;
    __Vfunc_HEX_TO_REAL__1314__temp = 0;
    double __Vfunc_HEX_TO_REAL__1315__Vfuncout;
    __Vfunc_HEX_TO_REAL__1315__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1315__f_i_data;
    __Vfunc_HEX_TO_REAL__1315__f_i_data = 0;
    IData/*31:0*/ __Vfunc_HEX_TO_REAL__1315__temp;
    __Vfunc_HEX_TO_REAL__1315__temp = 0;
    double __Vfunc_Cal_FPU_expected__1316__Vfuncout;
    __Vfunc_Cal_FPU_expected__1316__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_Cal_FPU_expected__1316__f_i_add_sub;
    __Vfunc_Cal_FPU_expected__1316__f_i_add_sub = 0;
    double __Vfunc_Cal_FPU_expected__1316__f_i_32_a;
    __Vfunc_Cal_FPU_expected__1316__f_i_32_a = 0;
    double __Vfunc_Cal_FPU_expected__1316__f_i_32_b;
    __Vfunc_Cal_FPU_expected__1316__f_i_32_b = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1317__Vfuncout;
    __Vfunc_REAL_TO_HEX__1317__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1317__f_i_data;
    __Vfunc_REAL_TO_HEX__1317__f_i_data = 0;
    double __Vfunc_Error_actual__1318__Vfuncout;
    __Vfunc_Error_actual__1318__Vfuncout = 0;
    double __Vfunc_Error_actual__1318__f_i_32_s;
    __Vfunc_Error_actual__1318__f_i_32_s = 0;
    double __Vfunc_Error_actual__1318__f_i_32_e;
    __Vfunc_Error_actual__1318__f_i_32_e = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1318__f_t_32_s;
    __Vfunc_Error_actual__1318__f_t_32_s = 0;
    IData/*31:0*/ __Vfunc_Error_actual__1318__f_t_32_e;
    __Vfunc_Error_actual__1318__f_t_32_e = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1318__is_E_one_S;
    __Vfunc_Error_actual__1318__is_E_one_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1318__is_E_one_E;
    __Vfunc_Error_actual__1318__is_E_one_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1318__is_M_zero_S;
    __Vfunc_Error_actual__1318__is_M_zero_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1318__is_M_zero_E;
    __Vfunc_Error_actual__1318__is_M_zero_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1318__is_INF_S;
    __Vfunc_Error_actual__1318__is_INF_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1318__is_INF_E;
    __Vfunc_Error_actual__1318__is_INF_E = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1318__is_NAN_S;
    __Vfunc_Error_actual__1318__is_NAN_S = 0;
    CData/*0:0*/ __Vfunc_Error_actual__1318__is_NAN_E;
    __Vfunc_Error_actual__1318__is_NAN_E = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1319__Vfuncout;
    __Vfunc_REAL_TO_HEX__1319__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1319__f_i_data;
    __Vfunc_REAL_TO_HEX__1319__f_i_data = 0;
    IData/*31:0*/ __Vfunc_REAL_TO_HEX__1320__Vfuncout;
    __Vfunc_REAL_TO_HEX__1320__Vfuncout = 0;
    double __Vfunc_REAL_TO_HEX__1320__f_i_data;
    __Vfunc_REAL_TO_HEX__1320__f_i_data = 0;
    double __Vfunc_ABS_value__1321__Vfuncout;
    __Vfunc_ABS_value__1321__Vfuncout = 0;
    double __Vfunc_ABS_value__1321__f_i_value;
    __Vfunc_ABS_value__1321__f_i_value = 0;
    double __Vfunc_ABS_value__1322__Vfuncout;
    __Vfunc_ABS_value__1322__Vfuncout = 0;
    double __Vfunc_ABS_value__1322__f_i_value;
    __Vfunc_ABS_value__1322__f_i_value = 0;
    IData/*31:0*/ __Vtask_Display_SummaryResult__1323__t_test_count;
    __Vtask_Display_SummaryResult__1323__t_test_count = 0;
    IData/*31:0*/ __Vtask_Display_SummaryResult__1323__t_test_pass;
    __Vtask_Display_SummaryResult__1323__t_test_pass = 0;
    // Body
    __Vfunc_REAL_TO_HEX__1134__Vfuncout = (IData)(VL_CVT_Q_D(vlSelf->__Vfunc_REAL_TO_HEX__1134__f_i_data));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_o_32_e 
        = __Vfunc_REAL_TO_HEX__1134__Vfuncout;
    __Vfunc_Error_actual__1135__f_i_32_e = vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_sr_32_e;
    __Vfunc_Error_actual__1135__f_i_32_s = vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_sr_32_s;
    __Vfunc_REAL_TO_HEX__1136__f_i_data = __Vfunc_Error_actual__1135__f_i_32_s;
    __Vfunc_REAL_TO_HEX__1136__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1136__f_i_data));
    __Vfunc_Error_actual__1135__f_t_32_s = __Vfunc_REAL_TO_HEX__1136__Vfuncout;
    __Vfunc_REAL_TO_HEX__1137__f_i_data = __Vfunc_Error_actual__1135__f_i_32_e;
    __Vfunc_REAL_TO_HEX__1137__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1137__f_i_data));
    __Vfunc_Error_actual__1135__f_t_32_e = __Vfunc_REAL_TO_HEX__1137__Vfuncout;
    __Vfunc_Error_actual__1135__is_E_one_S = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1135__f_t_32_s 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1135__is_M_zero_S = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1135__f_t_32_s)))));
    __Vfunc_Error_actual__1135__is_INF_S = ((IData)(__Vfunc_Error_actual__1135__is_E_one_S) 
                                            & (IData)(__Vfunc_Error_actual__1135__is_M_zero_S));
    __Vfunc_Error_actual__1135__is_NAN_S = ((IData)(__Vfunc_Error_actual__1135__is_E_one_S) 
                                            & (~ (IData)(__Vfunc_Error_actual__1135__is_M_zero_S)));
    __Vfunc_Error_actual__1135__is_E_one_E = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1135__f_t_32_e 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1135__is_M_zero_E = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1135__f_t_32_e)))));
    __Vfunc_Error_actual__1135__is_INF_E = ((IData)(__Vfunc_Error_actual__1135__is_E_one_E) 
                                            & (IData)(__Vfunc_Error_actual__1135__is_M_zero_E));
    __Vfunc_Error_actual__1135__is_NAN_E = ((IData)(__Vfunc_Error_actual__1135__is_E_one_E) 
                                            & (~ (IData)(__Vfunc_Error_actual__1135__is_M_zero_E)));
    __Vfunc_Error_actual__1135__Vfuncout = ((IData)(__Vfunc_Error_actual__1135__is_NAN_S)
                                             ? ((IData)(__Vfunc_Error_actual__1135__is_NAN_E)
                                                 ? 0.0
                                                 : 100.0)
                                             : ((IData)(__Vfunc_Error_actual__1135__is_NAN_E)
                                                 ? 
                                                ((IData)(__Vfunc_Error_actual__1135__is_NAN_S)
                                                  ? 0.0
                                                  : 100.0)
                                                 : 
                                                (((IData)(__Vfunc_Error_actual__1135__is_INF_S) 
                                                  | (IData)(__Vfunc_Error_actual__1135__is_INF_E))
                                                  ? 
                                                 ((__Vfunc_Error_actual__1135__f_t_32_s 
                                                   == __Vfunc_Error_actual__1135__f_t_32_e)
                                                   ? 0.0
                                                   : 100.0)
                                                  : 
                                                 (((0.0 
                                                    == __Vfunc_Error_actual__1135__f_i_32_e) 
                                                   | (-0.0 
                                                      == __Vfunc_Error_actual__1135__f_i_32_e))
                                                   ? 
                                                  (((0.0 
                                                     == __Vfunc_Error_actual__1135__f_i_32_s) 
                                                    | (-0.0 
                                                       == __Vfunc_Error_actual__1135__f_i_32_s))
                                                    ? 0.0
                                                    : 100.0)
                                                   : 
                                                  (100.0 
                                                   * 
                                                   (([&]() {
                                    __Vfunc_ABS_value__1138__f_i_value 
                                        = (__Vfunc_Error_actual__1135__f_i_32_e 
                                           - __Vfunc_Error_actual__1135__f_i_32_s);
                                    {
                                        if ((__Vfunc_ABS_value__1138__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1138__Vfuncout 
                                                = (- __Vfunc_ABS_value__1138__f_i_value);
                                            goto __Vlabel185;
                                        } else {
                                            __Vfunc_ABS_value__1138__Vfuncout 
                                                = __Vfunc_ABS_value__1138__f_i_value;
                                            goto __Vlabel185;
                                        }
                                        __Vlabel185: ;
                                    }
                                }(), __Vfunc_ABS_value__1138__Vfuncout) 
                                                    / 
                                                    ([&]() {
                                    __Vfunc_ABS_value__1139__f_i_value 
                                        = __Vfunc_Error_actual__1135__f_i_32_e;
                                    {
                                        if ((__Vfunc_ABS_value__1139__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1139__Vfuncout 
                                                = (- __Vfunc_ABS_value__1139__f_i_value);
                                            goto __Vlabel186;
                                        } else {
                                            __Vfunc_ABS_value__1139__Vfuncout 
                                                = __Vfunc_ABS_value__1139__f_i_value;
                                            goto __Vlabel186;
                                        }
                                        __Vlabel186: ;
                                    }
                                }(), __Vfunc_ABS_value__1139__Vfuncout)))))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_sr_rounding_error 
        = __Vfunc_Error_actual__1135__Vfuncout;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__f_t_check 
        = (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_sr_rounding_error 
           <= vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_error);
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.24f) %s i_32_b=%x (%.24f) \t| o_32_s=%x (%.24f) \t| o_ov_flow=%b, o_un_flow=%b\n=> %s: expect=%.24f (%x), dut=%.24f (%x), rounding_error=%.8f %% (exp_error = %.8f %%)\n",0,
                 -1,&(vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_type),
                 24,((IData)(vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_i_32_a,
                 64,vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_sr_32_a,
                 8,((IData)(vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_i_32_b,
                 64,vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_sr_32_b,
                 32,vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_o_32_s,
                 64,vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_sr_32_s,
                 1,(IData)(vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_o_ov_flow),
                 1,vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_o_un_flow,
                 32,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__f_t_check)
                      ? 0x50415353U : 0x4641494cU),
                 64,vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_sr_32_e,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_o_32_e,
                 64,vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_sr_32_s,
                 32,vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_sr_rounding_error,
                 64,vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__t_error);
    if (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1128__f_t_check) {
        vlSelf->tb_FPU_unit__DOT__test_pass = ((IData)(1U) 
                                               + vlSelf->tb_FPU_unit__DOT__test_pass);
    }
    vlSelf->tb_FPU_unit__DOT__test_count = ((IData)(1U) 
                                            + vlSelf->tb_FPU_unit__DOT__test_count);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       158);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       159);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 0U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = vlSelf->__Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1127__t_i_fpu_b;
    vlSelf->tb_FPU_unit__DOT__i_32_b = vlSelf->__Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1127__t_i_fpu_a;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       163);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       164);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_un_flow 
        = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                    >> 3U)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_ov_flow 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
           | ((0xffffffU == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_32_s 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result) 
            << 0x1fU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result) 
                          << 0x17U) | (0x7fffffU & 
                                       ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                         ? ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                             ? 0xc00000U
                                             : 0U) : 
                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                         ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry)))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_type 
        = vlSelf->__Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1127__t_type;
    __Vfunc_Error_standard__1141__Vfuncout = 1.19209289550781250e-05;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_error 
        = __Vfunc_Error_standard__1141__Vfuncout;
    __Vfunc_HEX_TO_REAL__1142__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_i_32_a;
    __Vfunc_HEX_TO_REAL__1142__temp = __Vfunc_HEX_TO_REAL__1142__f_i_data;
    __Vfunc_HEX_TO_REAL__1142__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1142__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_a 
        = __Vfunc_HEX_TO_REAL__1142__Vfuncout;
    __Vfunc_HEX_TO_REAL__1143__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_i_32_b;
    __Vfunc_HEX_TO_REAL__1143__temp = __Vfunc_HEX_TO_REAL__1143__f_i_data;
    __Vfunc_HEX_TO_REAL__1143__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1143__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_b 
        = __Vfunc_HEX_TO_REAL__1143__Vfuncout;
    __Vfunc_HEX_TO_REAL__1144__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_32_s;
    __Vfunc_HEX_TO_REAL__1144__temp = __Vfunc_HEX_TO_REAL__1144__f_i_data;
    __Vfunc_HEX_TO_REAL__1144__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1144__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_s 
        = __Vfunc_HEX_TO_REAL__1144__Vfuncout;
    __Vfunc_Cal_FPU_expected__1145__f_i_32_b = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_b;
    __Vfunc_Cal_FPU_expected__1145__f_i_32_a = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_a;
    __Vfunc_Cal_FPU_expected__1145__f_i_add_sub = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_i_add_sub;
    __Vfunc_Cal_FPU_expected__1145__Vfuncout = ((IData)(__Vfunc_Cal_FPU_expected__1145__f_i_add_sub)
                                                 ? 
                                                (__Vfunc_Cal_FPU_expected__1145__f_i_32_a 
                                                 - __Vfunc_Cal_FPU_expected__1145__f_i_32_b)
                                                 : 
                                                (__Vfunc_Cal_FPU_expected__1145__f_i_32_a 
                                                 + __Vfunc_Cal_FPU_expected__1145__f_i_32_b));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_e 
        = __Vfunc_Cal_FPU_expected__1145__Vfuncout;
    __Vfunc_REAL_TO_HEX__1146__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_e;
    __Vfunc_REAL_TO_HEX__1146__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1146__f_i_data));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_32_e 
        = __Vfunc_REAL_TO_HEX__1146__Vfuncout;
    __Vfunc_Error_actual__1147__f_i_32_e = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_e;
    __Vfunc_Error_actual__1147__f_i_32_s = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_s;
    __Vfunc_REAL_TO_HEX__1148__f_i_data = __Vfunc_Error_actual__1147__f_i_32_s;
    __Vfunc_REAL_TO_HEX__1148__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1148__f_i_data));
    __Vfunc_Error_actual__1147__f_t_32_s = __Vfunc_REAL_TO_HEX__1148__Vfuncout;
    __Vfunc_REAL_TO_HEX__1149__f_i_data = __Vfunc_Error_actual__1147__f_i_32_e;
    __Vfunc_REAL_TO_HEX__1149__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1149__f_i_data));
    __Vfunc_Error_actual__1147__f_t_32_e = __Vfunc_REAL_TO_HEX__1149__Vfuncout;
    __Vfunc_Error_actual__1147__is_E_one_S = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1147__f_t_32_s 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1147__is_M_zero_S = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1147__f_t_32_s)))));
    __Vfunc_Error_actual__1147__is_INF_S = ((IData)(__Vfunc_Error_actual__1147__is_E_one_S) 
                                            & (IData)(__Vfunc_Error_actual__1147__is_M_zero_S));
    __Vfunc_Error_actual__1147__is_NAN_S = ((IData)(__Vfunc_Error_actual__1147__is_E_one_S) 
                                            & (~ (IData)(__Vfunc_Error_actual__1147__is_M_zero_S)));
    __Vfunc_Error_actual__1147__is_E_one_E = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1147__f_t_32_e 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1147__is_M_zero_E = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1147__f_t_32_e)))));
    __Vfunc_Error_actual__1147__is_INF_E = ((IData)(__Vfunc_Error_actual__1147__is_E_one_E) 
                                            & (IData)(__Vfunc_Error_actual__1147__is_M_zero_E));
    __Vfunc_Error_actual__1147__is_NAN_E = ((IData)(__Vfunc_Error_actual__1147__is_E_one_E) 
                                            & (~ (IData)(__Vfunc_Error_actual__1147__is_M_zero_E)));
    __Vfunc_Error_actual__1147__Vfuncout = ((IData)(__Vfunc_Error_actual__1147__is_NAN_S)
                                             ? ((IData)(__Vfunc_Error_actual__1147__is_NAN_E)
                                                 ? 0.0
                                                 : 100.0)
                                             : ((IData)(__Vfunc_Error_actual__1147__is_NAN_E)
                                                 ? 
                                                ((IData)(__Vfunc_Error_actual__1147__is_NAN_S)
                                                  ? 0.0
                                                  : 100.0)
                                                 : 
                                                (((IData)(__Vfunc_Error_actual__1147__is_INF_S) 
                                                  | (IData)(__Vfunc_Error_actual__1147__is_INF_E))
                                                  ? 
                                                 ((__Vfunc_Error_actual__1147__f_t_32_s 
                                                   == __Vfunc_Error_actual__1147__f_t_32_e)
                                                   ? 0.0
                                                   : 100.0)
                                                  : 
                                                 (((0.0 
                                                    == __Vfunc_Error_actual__1147__f_i_32_e) 
                                                   | (-0.0 
                                                      == __Vfunc_Error_actual__1147__f_i_32_e))
                                                   ? 
                                                  (((0.0 
                                                     == __Vfunc_Error_actual__1147__f_i_32_s) 
                                                    | (-0.0 
                                                       == __Vfunc_Error_actual__1147__f_i_32_s))
                                                    ? 0.0
                                                    : 100.0)
                                                   : 
                                                  (100.0 
                                                   * 
                                                   (([&]() {
                                    __Vfunc_ABS_value__1150__f_i_value 
                                        = (__Vfunc_Error_actual__1147__f_i_32_e 
                                           - __Vfunc_Error_actual__1147__f_i_32_s);
                                    {
                                        if ((__Vfunc_ABS_value__1150__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1150__Vfuncout 
                                                = (- __Vfunc_ABS_value__1150__f_i_value);
                                            goto __Vlabel187;
                                        } else {
                                            __Vfunc_ABS_value__1150__Vfuncout 
                                                = __Vfunc_ABS_value__1150__f_i_value;
                                            goto __Vlabel187;
                                        }
                                        __Vlabel187: ;
                                    }
                                }(), __Vfunc_ABS_value__1150__Vfuncout) 
                                                    / 
                                                    ([&]() {
                                    __Vfunc_ABS_value__1151__f_i_value 
                                        = __Vfunc_Error_actual__1147__f_i_32_e;
                                    {
                                        if ((__Vfunc_ABS_value__1151__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1151__Vfuncout 
                                                = (- __Vfunc_ABS_value__1151__f_i_value);
                                            goto __Vlabel188;
                                        } else {
                                            __Vfunc_ABS_value__1151__Vfuncout 
                                                = __Vfunc_ABS_value__1151__f_i_value;
                                            goto __Vlabel188;
                                        }
                                        __Vlabel188: ;
                                    }
                                }(), __Vfunc_ABS_value__1151__Vfuncout)))))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_rounding_error 
        = __Vfunc_Error_actual__1147__Vfuncout;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__f_t_check 
        = (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_rounding_error 
           <= __Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_error);
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.24f) %s i_32_b=%x (%.24f) \t| o_32_s=%x (%.24f) \t| o_ov_flow=%b, o_un_flow=%b\n=> %s: expect=%.24f (%x), dut=%.24f (%x), rounding_error=%.8f %% (exp_error = %.8f %%)\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_i_32_a,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_a,
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_i_32_b,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_b,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_s,
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_un_flow,
                 32,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__f_t_check)
                      ? 0x50415353U : 0x4641494cU),
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_e,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_32_e,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_32_s,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_sr_rounding_error,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__t_error);
    if (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1140__f_t_check) {
        vlSelf->tb_FPU_unit__DOT__test_pass = ((IData)(1U) 
                                               + vlSelf->tb_FPU_unit__DOT__test_pass);
    }
    vlSelf->tb_FPU_unit__DOT__test_count = ((IData)(1U) 
                                            + vlSelf->tb_FPU_unit__DOT__test_count);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       167);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       168);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 1U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = vlSelf->__Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1127__t_i_fpu_a;
    vlSelf->tb_FPU_unit__DOT__i_32_b = vlSelf->__Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1127__t_i_fpu_b;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       172);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       173);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_un_flow 
        = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                    >> 3U)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_ov_flow 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
           | ((0xffffffU == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_32_s 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result) 
            << 0x1fU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result) 
                          << 0x17U) | (0x7fffffU & 
                                       ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                         ? ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                             ? 0xc00000U
                                             : 0U) : 
                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                         ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry)))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_type 
        = vlSelf->__Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1127__t_type;
    __Vfunc_Error_standard__1153__Vfuncout = 1.19209289550781250e-05;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_error 
        = __Vfunc_Error_standard__1153__Vfuncout;
    __Vfunc_HEX_TO_REAL__1154__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_i_32_a;
    __Vfunc_HEX_TO_REAL__1154__temp = __Vfunc_HEX_TO_REAL__1154__f_i_data;
    __Vfunc_HEX_TO_REAL__1154__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1154__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_a 
        = __Vfunc_HEX_TO_REAL__1154__Vfuncout;
    __Vfunc_HEX_TO_REAL__1155__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_i_32_b;
    __Vfunc_HEX_TO_REAL__1155__temp = __Vfunc_HEX_TO_REAL__1155__f_i_data;
    __Vfunc_HEX_TO_REAL__1155__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1155__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_b 
        = __Vfunc_HEX_TO_REAL__1155__Vfuncout;
    __Vfunc_HEX_TO_REAL__1156__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_32_s;
    __Vfunc_HEX_TO_REAL__1156__temp = __Vfunc_HEX_TO_REAL__1156__f_i_data;
    __Vfunc_HEX_TO_REAL__1156__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1156__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_s 
        = __Vfunc_HEX_TO_REAL__1156__Vfuncout;
    __Vfunc_Cal_FPU_expected__1157__f_i_32_b = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_b;
    __Vfunc_Cal_FPU_expected__1157__f_i_32_a = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_a;
    __Vfunc_Cal_FPU_expected__1157__f_i_add_sub = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_i_add_sub;
    __Vfunc_Cal_FPU_expected__1157__Vfuncout = ((IData)(__Vfunc_Cal_FPU_expected__1157__f_i_add_sub)
                                                 ? 
                                                (__Vfunc_Cal_FPU_expected__1157__f_i_32_a 
                                                 - __Vfunc_Cal_FPU_expected__1157__f_i_32_b)
                                                 : 
                                                (__Vfunc_Cal_FPU_expected__1157__f_i_32_a 
                                                 + __Vfunc_Cal_FPU_expected__1157__f_i_32_b));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_e 
        = __Vfunc_Cal_FPU_expected__1157__Vfuncout;
    __Vfunc_REAL_TO_HEX__1158__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_e;
    __Vfunc_REAL_TO_HEX__1158__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1158__f_i_data));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_32_e 
        = __Vfunc_REAL_TO_HEX__1158__Vfuncout;
    __Vfunc_Error_actual__1159__f_i_32_e = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_e;
    __Vfunc_Error_actual__1159__f_i_32_s = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_s;
    __Vfunc_REAL_TO_HEX__1160__f_i_data = __Vfunc_Error_actual__1159__f_i_32_s;
    __Vfunc_REAL_TO_HEX__1160__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1160__f_i_data));
    __Vfunc_Error_actual__1159__f_t_32_s = __Vfunc_REAL_TO_HEX__1160__Vfuncout;
    __Vfunc_REAL_TO_HEX__1161__f_i_data = __Vfunc_Error_actual__1159__f_i_32_e;
    __Vfunc_REAL_TO_HEX__1161__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1161__f_i_data));
    __Vfunc_Error_actual__1159__f_t_32_e = __Vfunc_REAL_TO_HEX__1161__Vfuncout;
    __Vfunc_Error_actual__1159__is_E_one_S = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1159__f_t_32_s 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1159__is_M_zero_S = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1159__f_t_32_s)))));
    __Vfunc_Error_actual__1159__is_INF_S = ((IData)(__Vfunc_Error_actual__1159__is_E_one_S) 
                                            & (IData)(__Vfunc_Error_actual__1159__is_M_zero_S));
    __Vfunc_Error_actual__1159__is_NAN_S = ((IData)(__Vfunc_Error_actual__1159__is_E_one_S) 
                                            & (~ (IData)(__Vfunc_Error_actual__1159__is_M_zero_S)));
    __Vfunc_Error_actual__1159__is_E_one_E = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1159__f_t_32_e 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1159__is_M_zero_E = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1159__f_t_32_e)))));
    __Vfunc_Error_actual__1159__is_INF_E = ((IData)(__Vfunc_Error_actual__1159__is_E_one_E) 
                                            & (IData)(__Vfunc_Error_actual__1159__is_M_zero_E));
    __Vfunc_Error_actual__1159__is_NAN_E = ((IData)(__Vfunc_Error_actual__1159__is_E_one_E) 
                                            & (~ (IData)(__Vfunc_Error_actual__1159__is_M_zero_E)));
    __Vfunc_Error_actual__1159__Vfuncout = ((IData)(__Vfunc_Error_actual__1159__is_NAN_S)
                                             ? ((IData)(__Vfunc_Error_actual__1159__is_NAN_E)
                                                 ? 0.0
                                                 : 100.0)
                                             : ((IData)(__Vfunc_Error_actual__1159__is_NAN_E)
                                                 ? 
                                                ((IData)(__Vfunc_Error_actual__1159__is_NAN_S)
                                                  ? 0.0
                                                  : 100.0)
                                                 : 
                                                (((IData)(__Vfunc_Error_actual__1159__is_INF_S) 
                                                  | (IData)(__Vfunc_Error_actual__1159__is_INF_E))
                                                  ? 
                                                 ((__Vfunc_Error_actual__1159__f_t_32_s 
                                                   == __Vfunc_Error_actual__1159__f_t_32_e)
                                                   ? 0.0
                                                   : 100.0)
                                                  : 
                                                 (((0.0 
                                                    == __Vfunc_Error_actual__1159__f_i_32_e) 
                                                   | (-0.0 
                                                      == __Vfunc_Error_actual__1159__f_i_32_e))
                                                   ? 
                                                  (((0.0 
                                                     == __Vfunc_Error_actual__1159__f_i_32_s) 
                                                    | (-0.0 
                                                       == __Vfunc_Error_actual__1159__f_i_32_s))
                                                    ? 0.0
                                                    : 100.0)
                                                   : 
                                                  (100.0 
                                                   * 
                                                   (([&]() {
                                    __Vfunc_ABS_value__1162__f_i_value 
                                        = (__Vfunc_Error_actual__1159__f_i_32_e 
                                           - __Vfunc_Error_actual__1159__f_i_32_s);
                                    {
                                        if ((__Vfunc_ABS_value__1162__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1162__Vfuncout 
                                                = (- __Vfunc_ABS_value__1162__f_i_value);
                                            goto __Vlabel189;
                                        } else {
                                            __Vfunc_ABS_value__1162__Vfuncout 
                                                = __Vfunc_ABS_value__1162__f_i_value;
                                            goto __Vlabel189;
                                        }
                                        __Vlabel189: ;
                                    }
                                }(), __Vfunc_ABS_value__1162__Vfuncout) 
                                                    / 
                                                    ([&]() {
                                    __Vfunc_ABS_value__1163__f_i_value 
                                        = __Vfunc_Error_actual__1159__f_i_32_e;
                                    {
                                        if ((__Vfunc_ABS_value__1163__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1163__Vfuncout 
                                                = (- __Vfunc_ABS_value__1163__f_i_value);
                                            goto __Vlabel190;
                                        } else {
                                            __Vfunc_ABS_value__1163__Vfuncout 
                                                = __Vfunc_ABS_value__1163__f_i_value;
                                            goto __Vlabel190;
                                        }
                                        __Vlabel190: ;
                                    }
                                }(), __Vfunc_ABS_value__1163__Vfuncout)))))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_rounding_error 
        = __Vfunc_Error_actual__1159__Vfuncout;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__f_t_check 
        = (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_rounding_error 
           <= __Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_error);
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.24f) %s i_32_b=%x (%.24f) \t| o_32_s=%x (%.24f) \t| o_ov_flow=%b, o_un_flow=%b\n=> %s: expect=%.24f (%x), dut=%.24f (%x), rounding_error=%.8f %% (exp_error = %.8f %%)\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_i_32_a,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_a,
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_i_32_b,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_b,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_s,
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_un_flow,
                 32,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__f_t_check)
                      ? 0x50415353U : 0x4641494cU),
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_e,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_32_e,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_32_s,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_sr_rounding_error,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__t_error);
    if (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1152__f_t_check) {
        vlSelf->tb_FPU_unit__DOT__test_pass = ((IData)(1U) 
                                               + vlSelf->tb_FPU_unit__DOT__test_pass);
    }
    vlSelf->tb_FPU_unit__DOT__test_count = ((IData)(1U) 
                                            + vlSelf->tb_FPU_unit__DOT__test_count);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       176);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       177);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 1U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = vlSelf->__Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1127__t_i_fpu_b;
    vlSelf->tb_FPU_unit__DOT__i_32_b = vlSelf->__Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1127__t_i_fpu_a;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       181);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       182);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_un_flow 
        = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                    >> 3U)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_ov_flow 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
           | ((0xffffffU == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_32_s 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result) 
            << 0x1fU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result) 
                          << 0x17U) | (0x7fffffU & 
                                       ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                         ? ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                             ? 0xc00000U
                                             : 0U) : 
                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                         ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry)))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_type 
        = vlSelf->__Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1127__t_type;
    __Vfunc_Error_standard__1165__Vfuncout = 1.19209289550781250e-05;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_error 
        = __Vfunc_Error_standard__1165__Vfuncout;
    __Vfunc_HEX_TO_REAL__1166__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_i_32_a;
    __Vfunc_HEX_TO_REAL__1166__temp = __Vfunc_HEX_TO_REAL__1166__f_i_data;
    __Vfunc_HEX_TO_REAL__1166__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1166__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_a 
        = __Vfunc_HEX_TO_REAL__1166__Vfuncout;
    __Vfunc_HEX_TO_REAL__1167__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_i_32_b;
    __Vfunc_HEX_TO_REAL__1167__temp = __Vfunc_HEX_TO_REAL__1167__f_i_data;
    __Vfunc_HEX_TO_REAL__1167__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1167__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_b 
        = __Vfunc_HEX_TO_REAL__1167__Vfuncout;
    __Vfunc_HEX_TO_REAL__1168__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_32_s;
    __Vfunc_HEX_TO_REAL__1168__temp = __Vfunc_HEX_TO_REAL__1168__f_i_data;
    __Vfunc_HEX_TO_REAL__1168__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1168__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_s 
        = __Vfunc_HEX_TO_REAL__1168__Vfuncout;
    __Vfunc_Cal_FPU_expected__1169__f_i_32_b = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_b;
    __Vfunc_Cal_FPU_expected__1169__f_i_32_a = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_a;
    __Vfunc_Cal_FPU_expected__1169__f_i_add_sub = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_i_add_sub;
    __Vfunc_Cal_FPU_expected__1169__Vfuncout = ((IData)(__Vfunc_Cal_FPU_expected__1169__f_i_add_sub)
                                                 ? 
                                                (__Vfunc_Cal_FPU_expected__1169__f_i_32_a 
                                                 - __Vfunc_Cal_FPU_expected__1169__f_i_32_b)
                                                 : 
                                                (__Vfunc_Cal_FPU_expected__1169__f_i_32_a 
                                                 + __Vfunc_Cal_FPU_expected__1169__f_i_32_b));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_e 
        = __Vfunc_Cal_FPU_expected__1169__Vfuncout;
    __Vfunc_REAL_TO_HEX__1170__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_e;
    __Vfunc_REAL_TO_HEX__1170__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1170__f_i_data));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_32_e 
        = __Vfunc_REAL_TO_HEX__1170__Vfuncout;
    __Vfunc_Error_actual__1171__f_i_32_e = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_e;
    __Vfunc_Error_actual__1171__f_i_32_s = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_s;
    __Vfunc_REAL_TO_HEX__1172__f_i_data = __Vfunc_Error_actual__1171__f_i_32_s;
    __Vfunc_REAL_TO_HEX__1172__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1172__f_i_data));
    __Vfunc_Error_actual__1171__f_t_32_s = __Vfunc_REAL_TO_HEX__1172__Vfuncout;
    __Vfunc_REAL_TO_HEX__1173__f_i_data = __Vfunc_Error_actual__1171__f_i_32_e;
    __Vfunc_REAL_TO_HEX__1173__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1173__f_i_data));
    __Vfunc_Error_actual__1171__f_t_32_e = __Vfunc_REAL_TO_HEX__1173__Vfuncout;
    __Vfunc_Error_actual__1171__is_E_one_S = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1171__f_t_32_s 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1171__is_M_zero_S = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1171__f_t_32_s)))));
    __Vfunc_Error_actual__1171__is_INF_S = ((IData)(__Vfunc_Error_actual__1171__is_E_one_S) 
                                            & (IData)(__Vfunc_Error_actual__1171__is_M_zero_S));
    __Vfunc_Error_actual__1171__is_NAN_S = ((IData)(__Vfunc_Error_actual__1171__is_E_one_S) 
                                            & (~ (IData)(__Vfunc_Error_actual__1171__is_M_zero_S)));
    __Vfunc_Error_actual__1171__is_E_one_E = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1171__f_t_32_e 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1171__is_M_zero_E = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1171__f_t_32_e)))));
    __Vfunc_Error_actual__1171__is_INF_E = ((IData)(__Vfunc_Error_actual__1171__is_E_one_E) 
                                            & (IData)(__Vfunc_Error_actual__1171__is_M_zero_E));
    __Vfunc_Error_actual__1171__is_NAN_E = ((IData)(__Vfunc_Error_actual__1171__is_E_one_E) 
                                            & (~ (IData)(__Vfunc_Error_actual__1171__is_M_zero_E)));
    __Vfunc_Error_actual__1171__Vfuncout = ((IData)(__Vfunc_Error_actual__1171__is_NAN_S)
                                             ? ((IData)(__Vfunc_Error_actual__1171__is_NAN_E)
                                                 ? 0.0
                                                 : 100.0)
                                             : ((IData)(__Vfunc_Error_actual__1171__is_NAN_E)
                                                 ? 
                                                ((IData)(__Vfunc_Error_actual__1171__is_NAN_S)
                                                  ? 0.0
                                                  : 100.0)
                                                 : 
                                                (((IData)(__Vfunc_Error_actual__1171__is_INF_S) 
                                                  | (IData)(__Vfunc_Error_actual__1171__is_INF_E))
                                                  ? 
                                                 ((__Vfunc_Error_actual__1171__f_t_32_s 
                                                   == __Vfunc_Error_actual__1171__f_t_32_e)
                                                   ? 0.0
                                                   : 100.0)
                                                  : 
                                                 (((0.0 
                                                    == __Vfunc_Error_actual__1171__f_i_32_e) 
                                                   | (-0.0 
                                                      == __Vfunc_Error_actual__1171__f_i_32_e))
                                                   ? 
                                                  (((0.0 
                                                     == __Vfunc_Error_actual__1171__f_i_32_s) 
                                                    | (-0.0 
                                                       == __Vfunc_Error_actual__1171__f_i_32_s))
                                                    ? 0.0
                                                    : 100.0)
                                                   : 
                                                  (100.0 
                                                   * 
                                                   (([&]() {
                                    __Vfunc_ABS_value__1174__f_i_value 
                                        = (__Vfunc_Error_actual__1171__f_i_32_e 
                                           - __Vfunc_Error_actual__1171__f_i_32_s);
                                    {
                                        if ((__Vfunc_ABS_value__1174__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1174__Vfuncout 
                                                = (- __Vfunc_ABS_value__1174__f_i_value);
                                            goto __Vlabel191;
                                        } else {
                                            __Vfunc_ABS_value__1174__Vfuncout 
                                                = __Vfunc_ABS_value__1174__f_i_value;
                                            goto __Vlabel191;
                                        }
                                        __Vlabel191: ;
                                    }
                                }(), __Vfunc_ABS_value__1174__Vfuncout) 
                                                    / 
                                                    ([&]() {
                                    __Vfunc_ABS_value__1175__f_i_value 
                                        = __Vfunc_Error_actual__1171__f_i_32_e;
                                    {
                                        if ((__Vfunc_ABS_value__1175__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1175__Vfuncout 
                                                = (- __Vfunc_ABS_value__1175__f_i_value);
                                            goto __Vlabel192;
                                        } else {
                                            __Vfunc_ABS_value__1175__Vfuncout 
                                                = __Vfunc_ABS_value__1175__f_i_value;
                                            goto __Vlabel192;
                                        }
                                        __Vlabel192: ;
                                    }
                                }(), __Vfunc_ABS_value__1175__Vfuncout)))))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_rounding_error 
        = __Vfunc_Error_actual__1171__Vfuncout;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__f_t_check 
        = (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_rounding_error 
           <= __Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_error);
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.24f) %s i_32_b=%x (%.24f) \t| o_32_s=%x (%.24f) \t| o_ov_flow=%b, o_un_flow=%b\n=> %s: expect=%.24f (%x), dut=%.24f (%x), rounding_error=%.8f %% (exp_error = %.8f %%)\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_i_32_a,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_a,
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_i_32_b,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_b,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_s,
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_un_flow,
                 32,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__f_t_check)
                      ? 0x50415353U : 0x4641494cU),
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_e,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_32_e,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_32_s,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_sr_rounding_error,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__t_error);
    if (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1164__f_t_check) {
        vlSelf->tb_FPU_unit__DOT__test_pass = ((IData)(1U) 
                                               + vlSelf->tb_FPU_unit__DOT__test_pass);
    }
    vlSelf->tb_FPU_unit__DOT__test_count = ((IData)(1U) 
                                            + vlSelf->tb_FPU_unit__DOT__test_count);
    __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_i_fpu_b = 0xc1b1999aU;
    __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_i_fpu_a = 0xc00ccccdU;
    __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_testcase = 
        std::string{"TEST SIGN"};
    __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_type = 
        std::string{"SIGN"};
    VL_WRITEF_NX("==========[ %@ ]==========\n",0,-1,
                 &(__Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_testcase));
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       149);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       150);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 0U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_i_fpu_a;
    vlSelf->tb_FPU_unit__DOT__i_32_b = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_i_fpu_b;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       154);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       155);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_un_flow 
        = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                    >> 3U)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_ov_flow 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
           | ((0xffffffU == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_32_s 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result) 
            << 0x1fU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result) 
                          << 0x17U) | (0x7fffffU & 
                                       ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                         ? ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                             ? 0xc00000U
                                             : 0U) : 
                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                         ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry)))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_type 
        = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_type;
    __Vfunc_Error_standard__1178__Vfuncout = 1.19209289550781250e-05;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_error 
        = __Vfunc_Error_standard__1178__Vfuncout;
    __Vfunc_HEX_TO_REAL__1179__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_i_32_a;
    __Vfunc_HEX_TO_REAL__1179__temp = __Vfunc_HEX_TO_REAL__1179__f_i_data;
    __Vfunc_HEX_TO_REAL__1179__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1179__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_a 
        = __Vfunc_HEX_TO_REAL__1179__Vfuncout;
    __Vfunc_HEX_TO_REAL__1180__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_i_32_b;
    __Vfunc_HEX_TO_REAL__1180__temp = __Vfunc_HEX_TO_REAL__1180__f_i_data;
    __Vfunc_HEX_TO_REAL__1180__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1180__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_b 
        = __Vfunc_HEX_TO_REAL__1180__Vfuncout;
    __Vfunc_HEX_TO_REAL__1181__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_32_s;
    __Vfunc_HEX_TO_REAL__1181__temp = __Vfunc_HEX_TO_REAL__1181__f_i_data;
    __Vfunc_HEX_TO_REAL__1181__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1181__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_s 
        = __Vfunc_HEX_TO_REAL__1181__Vfuncout;
    __Vfunc_Cal_FPU_expected__1182__f_i_32_b = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_b;
    __Vfunc_Cal_FPU_expected__1182__f_i_32_a = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_a;
    __Vfunc_Cal_FPU_expected__1182__f_i_add_sub = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_i_add_sub;
    __Vfunc_Cal_FPU_expected__1182__Vfuncout = ((IData)(__Vfunc_Cal_FPU_expected__1182__f_i_add_sub)
                                                 ? 
                                                (__Vfunc_Cal_FPU_expected__1182__f_i_32_a 
                                                 - __Vfunc_Cal_FPU_expected__1182__f_i_32_b)
                                                 : 
                                                (__Vfunc_Cal_FPU_expected__1182__f_i_32_a 
                                                 + __Vfunc_Cal_FPU_expected__1182__f_i_32_b));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_e 
        = __Vfunc_Cal_FPU_expected__1182__Vfuncout;
    __Vfunc_REAL_TO_HEX__1183__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_e;
    __Vfunc_REAL_TO_HEX__1183__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1183__f_i_data));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_32_e 
        = __Vfunc_REAL_TO_HEX__1183__Vfuncout;
    __Vfunc_Error_actual__1184__f_i_32_e = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_e;
    __Vfunc_Error_actual__1184__f_i_32_s = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_s;
    __Vfunc_REAL_TO_HEX__1185__f_i_data = __Vfunc_Error_actual__1184__f_i_32_s;
    __Vfunc_REAL_TO_HEX__1185__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1185__f_i_data));
    __Vfunc_Error_actual__1184__f_t_32_s = __Vfunc_REAL_TO_HEX__1185__Vfuncout;
    __Vfunc_REAL_TO_HEX__1186__f_i_data = __Vfunc_Error_actual__1184__f_i_32_e;
    __Vfunc_REAL_TO_HEX__1186__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1186__f_i_data));
    __Vfunc_Error_actual__1184__f_t_32_e = __Vfunc_REAL_TO_HEX__1186__Vfuncout;
    __Vfunc_Error_actual__1184__is_E_one_S = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1184__f_t_32_s 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1184__is_M_zero_S = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1184__f_t_32_s)))));
    __Vfunc_Error_actual__1184__is_INF_S = ((IData)(__Vfunc_Error_actual__1184__is_E_one_S) 
                                            & (IData)(__Vfunc_Error_actual__1184__is_M_zero_S));
    __Vfunc_Error_actual__1184__is_NAN_S = ((IData)(__Vfunc_Error_actual__1184__is_E_one_S) 
                                            & (~ (IData)(__Vfunc_Error_actual__1184__is_M_zero_S)));
    __Vfunc_Error_actual__1184__is_E_one_E = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1184__f_t_32_e 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1184__is_M_zero_E = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1184__f_t_32_e)))));
    __Vfunc_Error_actual__1184__is_INF_E = ((IData)(__Vfunc_Error_actual__1184__is_E_one_E) 
                                            & (IData)(__Vfunc_Error_actual__1184__is_M_zero_E));
    __Vfunc_Error_actual__1184__is_NAN_E = ((IData)(__Vfunc_Error_actual__1184__is_E_one_E) 
                                            & (~ (IData)(__Vfunc_Error_actual__1184__is_M_zero_E)));
    __Vfunc_Error_actual__1184__Vfuncout = ((IData)(__Vfunc_Error_actual__1184__is_NAN_S)
                                             ? ((IData)(__Vfunc_Error_actual__1184__is_NAN_E)
                                                 ? 0.0
                                                 : 100.0)
                                             : ((IData)(__Vfunc_Error_actual__1184__is_NAN_E)
                                                 ? 
                                                ((IData)(__Vfunc_Error_actual__1184__is_NAN_S)
                                                  ? 0.0
                                                  : 100.0)
                                                 : 
                                                (((IData)(__Vfunc_Error_actual__1184__is_INF_S) 
                                                  | (IData)(__Vfunc_Error_actual__1184__is_INF_E))
                                                  ? 
                                                 ((__Vfunc_Error_actual__1184__f_t_32_s 
                                                   == __Vfunc_Error_actual__1184__f_t_32_e)
                                                   ? 0.0
                                                   : 100.0)
                                                  : 
                                                 (((0.0 
                                                    == __Vfunc_Error_actual__1184__f_i_32_e) 
                                                   | (-0.0 
                                                      == __Vfunc_Error_actual__1184__f_i_32_e))
                                                   ? 
                                                  (((0.0 
                                                     == __Vfunc_Error_actual__1184__f_i_32_s) 
                                                    | (-0.0 
                                                       == __Vfunc_Error_actual__1184__f_i_32_s))
                                                    ? 0.0
                                                    : 100.0)
                                                   : 
                                                  (100.0 
                                                   * 
                                                   (([&]() {
                                    __Vfunc_ABS_value__1187__f_i_value 
                                        = (__Vfunc_Error_actual__1184__f_i_32_e 
                                           - __Vfunc_Error_actual__1184__f_i_32_s);
                                    {
                                        if ((__Vfunc_ABS_value__1187__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1187__Vfuncout 
                                                = (- __Vfunc_ABS_value__1187__f_i_value);
                                            goto __Vlabel193;
                                        } else {
                                            __Vfunc_ABS_value__1187__Vfuncout 
                                                = __Vfunc_ABS_value__1187__f_i_value;
                                            goto __Vlabel193;
                                        }
                                        __Vlabel193: ;
                                    }
                                }(), __Vfunc_ABS_value__1187__Vfuncout) 
                                                    / 
                                                    ([&]() {
                                    __Vfunc_ABS_value__1188__f_i_value 
                                        = __Vfunc_Error_actual__1184__f_i_32_e;
                                    {
                                        if ((__Vfunc_ABS_value__1188__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1188__Vfuncout 
                                                = (- __Vfunc_ABS_value__1188__f_i_value);
                                            goto __Vlabel194;
                                        } else {
                                            __Vfunc_ABS_value__1188__Vfuncout 
                                                = __Vfunc_ABS_value__1188__f_i_value;
                                            goto __Vlabel194;
                                        }
                                        __Vlabel194: ;
                                    }
                                }(), __Vfunc_ABS_value__1188__Vfuncout)))))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_rounding_error 
        = __Vfunc_Error_actual__1184__Vfuncout;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__f_t_check 
        = (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_rounding_error 
           <= __Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_error);
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.24f) %s i_32_b=%x (%.24f) \t| o_32_s=%x (%.24f) \t| o_ov_flow=%b, o_un_flow=%b\n=> %s: expect=%.24f (%x), dut=%.24f (%x), rounding_error=%.8f %% (exp_error = %.8f %%)\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_i_32_a,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_a,
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_i_32_b,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_b,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_s,
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_un_flow,
                 32,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__f_t_check)
                      ? 0x50415353U : 0x4641494cU),
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_e,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_32_e,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_32_s,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_sr_rounding_error,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__t_error);
    if (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1177__f_t_check) {
        vlSelf->tb_FPU_unit__DOT__test_pass = ((IData)(1U) 
                                               + vlSelf->tb_FPU_unit__DOT__test_pass);
    }
    vlSelf->tb_FPU_unit__DOT__test_count = ((IData)(1U) 
                                            + vlSelf->tb_FPU_unit__DOT__test_count);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       158);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       159);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 0U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_i_fpu_b;
    vlSelf->tb_FPU_unit__DOT__i_32_b = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_i_fpu_a;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       163);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       164);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_un_flow 
        = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                    >> 3U)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_ov_flow 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
           | ((0xffffffU == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_32_s 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result) 
            << 0x1fU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result) 
                          << 0x17U) | (0x7fffffU & 
                                       ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                         ? ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                             ? 0xc00000U
                                             : 0U) : 
                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                         ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry)))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_type 
        = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_type;
    __Vfunc_Error_standard__1190__Vfuncout = 1.19209289550781250e-05;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_error 
        = __Vfunc_Error_standard__1190__Vfuncout;
    __Vfunc_HEX_TO_REAL__1191__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_i_32_a;
    __Vfunc_HEX_TO_REAL__1191__temp = __Vfunc_HEX_TO_REAL__1191__f_i_data;
    __Vfunc_HEX_TO_REAL__1191__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1191__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_a 
        = __Vfunc_HEX_TO_REAL__1191__Vfuncout;
    __Vfunc_HEX_TO_REAL__1192__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_i_32_b;
    __Vfunc_HEX_TO_REAL__1192__temp = __Vfunc_HEX_TO_REAL__1192__f_i_data;
    __Vfunc_HEX_TO_REAL__1192__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1192__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_b 
        = __Vfunc_HEX_TO_REAL__1192__Vfuncout;
    __Vfunc_HEX_TO_REAL__1193__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_32_s;
    __Vfunc_HEX_TO_REAL__1193__temp = __Vfunc_HEX_TO_REAL__1193__f_i_data;
    __Vfunc_HEX_TO_REAL__1193__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1193__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_s 
        = __Vfunc_HEX_TO_REAL__1193__Vfuncout;
    __Vfunc_Cal_FPU_expected__1194__f_i_32_b = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_b;
    __Vfunc_Cal_FPU_expected__1194__f_i_32_a = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_a;
    __Vfunc_Cal_FPU_expected__1194__f_i_add_sub = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_i_add_sub;
    __Vfunc_Cal_FPU_expected__1194__Vfuncout = ((IData)(__Vfunc_Cal_FPU_expected__1194__f_i_add_sub)
                                                 ? 
                                                (__Vfunc_Cal_FPU_expected__1194__f_i_32_a 
                                                 - __Vfunc_Cal_FPU_expected__1194__f_i_32_b)
                                                 : 
                                                (__Vfunc_Cal_FPU_expected__1194__f_i_32_a 
                                                 + __Vfunc_Cal_FPU_expected__1194__f_i_32_b));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_e 
        = __Vfunc_Cal_FPU_expected__1194__Vfuncout;
    __Vfunc_REAL_TO_HEX__1195__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_e;
    __Vfunc_REAL_TO_HEX__1195__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1195__f_i_data));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_32_e 
        = __Vfunc_REAL_TO_HEX__1195__Vfuncout;
    __Vfunc_Error_actual__1196__f_i_32_e = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_e;
    __Vfunc_Error_actual__1196__f_i_32_s = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_s;
    __Vfunc_REAL_TO_HEX__1197__f_i_data = __Vfunc_Error_actual__1196__f_i_32_s;
    __Vfunc_REAL_TO_HEX__1197__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1197__f_i_data));
    __Vfunc_Error_actual__1196__f_t_32_s = __Vfunc_REAL_TO_HEX__1197__Vfuncout;
    __Vfunc_REAL_TO_HEX__1198__f_i_data = __Vfunc_Error_actual__1196__f_i_32_e;
    __Vfunc_REAL_TO_HEX__1198__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1198__f_i_data));
    __Vfunc_Error_actual__1196__f_t_32_e = __Vfunc_REAL_TO_HEX__1198__Vfuncout;
    __Vfunc_Error_actual__1196__is_E_one_S = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1196__f_t_32_s 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1196__is_M_zero_S = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1196__f_t_32_s)))));
    __Vfunc_Error_actual__1196__is_INF_S = ((IData)(__Vfunc_Error_actual__1196__is_E_one_S) 
                                            & (IData)(__Vfunc_Error_actual__1196__is_M_zero_S));
    __Vfunc_Error_actual__1196__is_NAN_S = ((IData)(__Vfunc_Error_actual__1196__is_E_one_S) 
                                            & (~ (IData)(__Vfunc_Error_actual__1196__is_M_zero_S)));
    __Vfunc_Error_actual__1196__is_E_one_E = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1196__f_t_32_e 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1196__is_M_zero_E = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1196__f_t_32_e)))));
    __Vfunc_Error_actual__1196__is_INF_E = ((IData)(__Vfunc_Error_actual__1196__is_E_one_E) 
                                            & (IData)(__Vfunc_Error_actual__1196__is_M_zero_E));
    __Vfunc_Error_actual__1196__is_NAN_E = ((IData)(__Vfunc_Error_actual__1196__is_E_one_E) 
                                            & (~ (IData)(__Vfunc_Error_actual__1196__is_M_zero_E)));
    __Vfunc_Error_actual__1196__Vfuncout = ((IData)(__Vfunc_Error_actual__1196__is_NAN_S)
                                             ? ((IData)(__Vfunc_Error_actual__1196__is_NAN_E)
                                                 ? 0.0
                                                 : 100.0)
                                             : ((IData)(__Vfunc_Error_actual__1196__is_NAN_E)
                                                 ? 
                                                ((IData)(__Vfunc_Error_actual__1196__is_NAN_S)
                                                  ? 0.0
                                                  : 100.0)
                                                 : 
                                                (((IData)(__Vfunc_Error_actual__1196__is_INF_S) 
                                                  | (IData)(__Vfunc_Error_actual__1196__is_INF_E))
                                                  ? 
                                                 ((__Vfunc_Error_actual__1196__f_t_32_s 
                                                   == __Vfunc_Error_actual__1196__f_t_32_e)
                                                   ? 0.0
                                                   : 100.0)
                                                  : 
                                                 (((0.0 
                                                    == __Vfunc_Error_actual__1196__f_i_32_e) 
                                                   | (-0.0 
                                                      == __Vfunc_Error_actual__1196__f_i_32_e))
                                                   ? 
                                                  (((0.0 
                                                     == __Vfunc_Error_actual__1196__f_i_32_s) 
                                                    | (-0.0 
                                                       == __Vfunc_Error_actual__1196__f_i_32_s))
                                                    ? 0.0
                                                    : 100.0)
                                                   : 
                                                  (100.0 
                                                   * 
                                                   (([&]() {
                                    __Vfunc_ABS_value__1199__f_i_value 
                                        = (__Vfunc_Error_actual__1196__f_i_32_e 
                                           - __Vfunc_Error_actual__1196__f_i_32_s);
                                    {
                                        if ((__Vfunc_ABS_value__1199__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1199__Vfuncout 
                                                = (- __Vfunc_ABS_value__1199__f_i_value);
                                            goto __Vlabel195;
                                        } else {
                                            __Vfunc_ABS_value__1199__Vfuncout 
                                                = __Vfunc_ABS_value__1199__f_i_value;
                                            goto __Vlabel195;
                                        }
                                        __Vlabel195: ;
                                    }
                                }(), __Vfunc_ABS_value__1199__Vfuncout) 
                                                    / 
                                                    ([&]() {
                                    __Vfunc_ABS_value__1200__f_i_value 
                                        = __Vfunc_Error_actual__1196__f_i_32_e;
                                    {
                                        if ((__Vfunc_ABS_value__1200__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1200__Vfuncout 
                                                = (- __Vfunc_ABS_value__1200__f_i_value);
                                            goto __Vlabel196;
                                        } else {
                                            __Vfunc_ABS_value__1200__Vfuncout 
                                                = __Vfunc_ABS_value__1200__f_i_value;
                                            goto __Vlabel196;
                                        }
                                        __Vlabel196: ;
                                    }
                                }(), __Vfunc_ABS_value__1200__Vfuncout)))))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_rounding_error 
        = __Vfunc_Error_actual__1196__Vfuncout;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__f_t_check 
        = (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_rounding_error 
           <= __Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_error);
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.24f) %s i_32_b=%x (%.24f) \t| o_32_s=%x (%.24f) \t| o_ov_flow=%b, o_un_flow=%b\n=> %s: expect=%.24f (%x), dut=%.24f (%x), rounding_error=%.8f %% (exp_error = %.8f %%)\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_i_32_a,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_a,
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_i_32_b,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_b,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_s,
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_un_flow,
                 32,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__f_t_check)
                      ? 0x50415353U : 0x4641494cU),
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_e,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_32_e,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_32_s,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_sr_rounding_error,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__t_error);
    if (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1189__f_t_check) {
        vlSelf->tb_FPU_unit__DOT__test_pass = ((IData)(1U) 
                                               + vlSelf->tb_FPU_unit__DOT__test_pass);
    }
    vlSelf->tb_FPU_unit__DOT__test_count = ((IData)(1U) 
                                            + vlSelf->tb_FPU_unit__DOT__test_count);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       167);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       168);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 1U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_i_fpu_a;
    vlSelf->tb_FPU_unit__DOT__i_32_b = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_i_fpu_b;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       172);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       173);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_un_flow 
        = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                    >> 3U)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_ov_flow 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
           | ((0xffffffU == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_32_s 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result) 
            << 0x1fU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result) 
                          << 0x17U) | (0x7fffffU & 
                                       ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                         ? ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                             ? 0xc00000U
                                             : 0U) : 
                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                         ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry)))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_type 
        = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_type;
    __Vfunc_Error_standard__1202__Vfuncout = 1.19209289550781250e-05;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_error 
        = __Vfunc_Error_standard__1202__Vfuncout;
    __Vfunc_HEX_TO_REAL__1203__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_i_32_a;
    __Vfunc_HEX_TO_REAL__1203__temp = __Vfunc_HEX_TO_REAL__1203__f_i_data;
    __Vfunc_HEX_TO_REAL__1203__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1203__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_a 
        = __Vfunc_HEX_TO_REAL__1203__Vfuncout;
    __Vfunc_HEX_TO_REAL__1204__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_i_32_b;
    __Vfunc_HEX_TO_REAL__1204__temp = __Vfunc_HEX_TO_REAL__1204__f_i_data;
    __Vfunc_HEX_TO_REAL__1204__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1204__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_b 
        = __Vfunc_HEX_TO_REAL__1204__Vfuncout;
    __Vfunc_HEX_TO_REAL__1205__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_32_s;
    __Vfunc_HEX_TO_REAL__1205__temp = __Vfunc_HEX_TO_REAL__1205__f_i_data;
    __Vfunc_HEX_TO_REAL__1205__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1205__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_s 
        = __Vfunc_HEX_TO_REAL__1205__Vfuncout;
    __Vfunc_Cal_FPU_expected__1206__f_i_32_b = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_b;
    __Vfunc_Cal_FPU_expected__1206__f_i_32_a = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_a;
    __Vfunc_Cal_FPU_expected__1206__f_i_add_sub = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_i_add_sub;
    __Vfunc_Cal_FPU_expected__1206__Vfuncout = ((IData)(__Vfunc_Cal_FPU_expected__1206__f_i_add_sub)
                                                 ? 
                                                (__Vfunc_Cal_FPU_expected__1206__f_i_32_a 
                                                 - __Vfunc_Cal_FPU_expected__1206__f_i_32_b)
                                                 : 
                                                (__Vfunc_Cal_FPU_expected__1206__f_i_32_a 
                                                 + __Vfunc_Cal_FPU_expected__1206__f_i_32_b));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_e 
        = __Vfunc_Cal_FPU_expected__1206__Vfuncout;
    __Vfunc_REAL_TO_HEX__1207__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_e;
    __Vfunc_REAL_TO_HEX__1207__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1207__f_i_data));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_32_e 
        = __Vfunc_REAL_TO_HEX__1207__Vfuncout;
    __Vfunc_Error_actual__1208__f_i_32_e = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_e;
    __Vfunc_Error_actual__1208__f_i_32_s = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_s;
    __Vfunc_REAL_TO_HEX__1209__f_i_data = __Vfunc_Error_actual__1208__f_i_32_s;
    __Vfunc_REAL_TO_HEX__1209__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1209__f_i_data));
    __Vfunc_Error_actual__1208__f_t_32_s = __Vfunc_REAL_TO_HEX__1209__Vfuncout;
    __Vfunc_REAL_TO_HEX__1210__f_i_data = __Vfunc_Error_actual__1208__f_i_32_e;
    __Vfunc_REAL_TO_HEX__1210__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1210__f_i_data));
    __Vfunc_Error_actual__1208__f_t_32_e = __Vfunc_REAL_TO_HEX__1210__Vfuncout;
    __Vfunc_Error_actual__1208__is_E_one_S = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1208__f_t_32_s 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1208__is_M_zero_S = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1208__f_t_32_s)))));
    __Vfunc_Error_actual__1208__is_INF_S = ((IData)(__Vfunc_Error_actual__1208__is_E_one_S) 
                                            & (IData)(__Vfunc_Error_actual__1208__is_M_zero_S));
    __Vfunc_Error_actual__1208__is_NAN_S = ((IData)(__Vfunc_Error_actual__1208__is_E_one_S) 
                                            & (~ (IData)(__Vfunc_Error_actual__1208__is_M_zero_S)));
    __Vfunc_Error_actual__1208__is_E_one_E = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1208__f_t_32_e 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1208__is_M_zero_E = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1208__f_t_32_e)))));
    __Vfunc_Error_actual__1208__is_INF_E = ((IData)(__Vfunc_Error_actual__1208__is_E_one_E) 
                                            & (IData)(__Vfunc_Error_actual__1208__is_M_zero_E));
    __Vfunc_Error_actual__1208__is_NAN_E = ((IData)(__Vfunc_Error_actual__1208__is_E_one_E) 
                                            & (~ (IData)(__Vfunc_Error_actual__1208__is_M_zero_E)));
    __Vfunc_Error_actual__1208__Vfuncout = ((IData)(__Vfunc_Error_actual__1208__is_NAN_S)
                                             ? ((IData)(__Vfunc_Error_actual__1208__is_NAN_E)
                                                 ? 0.0
                                                 : 100.0)
                                             : ((IData)(__Vfunc_Error_actual__1208__is_NAN_E)
                                                 ? 
                                                ((IData)(__Vfunc_Error_actual__1208__is_NAN_S)
                                                  ? 0.0
                                                  : 100.0)
                                                 : 
                                                (((IData)(__Vfunc_Error_actual__1208__is_INF_S) 
                                                  | (IData)(__Vfunc_Error_actual__1208__is_INF_E))
                                                  ? 
                                                 ((__Vfunc_Error_actual__1208__f_t_32_s 
                                                   == __Vfunc_Error_actual__1208__f_t_32_e)
                                                   ? 0.0
                                                   : 100.0)
                                                  : 
                                                 (((0.0 
                                                    == __Vfunc_Error_actual__1208__f_i_32_e) 
                                                   | (-0.0 
                                                      == __Vfunc_Error_actual__1208__f_i_32_e))
                                                   ? 
                                                  (((0.0 
                                                     == __Vfunc_Error_actual__1208__f_i_32_s) 
                                                    | (-0.0 
                                                       == __Vfunc_Error_actual__1208__f_i_32_s))
                                                    ? 0.0
                                                    : 100.0)
                                                   : 
                                                  (100.0 
                                                   * 
                                                   (([&]() {
                                    __Vfunc_ABS_value__1211__f_i_value 
                                        = (__Vfunc_Error_actual__1208__f_i_32_e 
                                           - __Vfunc_Error_actual__1208__f_i_32_s);
                                    {
                                        if ((__Vfunc_ABS_value__1211__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1211__Vfuncout 
                                                = (- __Vfunc_ABS_value__1211__f_i_value);
                                            goto __Vlabel197;
                                        } else {
                                            __Vfunc_ABS_value__1211__Vfuncout 
                                                = __Vfunc_ABS_value__1211__f_i_value;
                                            goto __Vlabel197;
                                        }
                                        __Vlabel197: ;
                                    }
                                }(), __Vfunc_ABS_value__1211__Vfuncout) 
                                                    / 
                                                    ([&]() {
                                    __Vfunc_ABS_value__1212__f_i_value 
                                        = __Vfunc_Error_actual__1208__f_i_32_e;
                                    {
                                        if ((__Vfunc_ABS_value__1212__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1212__Vfuncout 
                                                = (- __Vfunc_ABS_value__1212__f_i_value);
                                            goto __Vlabel198;
                                        } else {
                                            __Vfunc_ABS_value__1212__Vfuncout 
                                                = __Vfunc_ABS_value__1212__f_i_value;
                                            goto __Vlabel198;
                                        }
                                        __Vlabel198: ;
                                    }
                                }(), __Vfunc_ABS_value__1212__Vfuncout)))))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_rounding_error 
        = __Vfunc_Error_actual__1208__Vfuncout;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__f_t_check 
        = (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_rounding_error 
           <= __Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_error);
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.24f) %s i_32_b=%x (%.24f) \t| o_32_s=%x (%.24f) \t| o_ov_flow=%b, o_un_flow=%b\n=> %s: expect=%.24f (%x), dut=%.24f (%x), rounding_error=%.8f %% (exp_error = %.8f %%)\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_i_32_a,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_a,
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_i_32_b,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_b,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_s,
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_un_flow,
                 32,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__f_t_check)
                      ? 0x50415353U : 0x4641494cU),
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_e,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_32_e,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_32_s,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_sr_rounding_error,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__t_error);
    if (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1201__f_t_check) {
        vlSelf->tb_FPU_unit__DOT__test_pass = ((IData)(1U) 
                                               + vlSelf->tb_FPU_unit__DOT__test_pass);
    }
    vlSelf->tb_FPU_unit__DOT__test_count = ((IData)(1U) 
                                            + vlSelf->tb_FPU_unit__DOT__test_count);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       176);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       177);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 1U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_i_fpu_b;
    vlSelf->tb_FPU_unit__DOT__i_32_b = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_i_fpu_a;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       181);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       182);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_un_flow 
        = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                    >> 3U)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_ov_flow 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
           | ((0xffffffU == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_32_s 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result) 
            << 0x1fU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result) 
                          << 0x17U) | (0x7fffffU & 
                                       ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                         ? ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                             ? 0xc00000U
                                             : 0U) : 
                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                         ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry)))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_type 
        = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1176__t_type;
    __Vfunc_Error_standard__1214__Vfuncout = 1.19209289550781250e-05;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_error 
        = __Vfunc_Error_standard__1214__Vfuncout;
    __Vfunc_HEX_TO_REAL__1215__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_i_32_a;
    __Vfunc_HEX_TO_REAL__1215__temp = __Vfunc_HEX_TO_REAL__1215__f_i_data;
    __Vfunc_HEX_TO_REAL__1215__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1215__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_a 
        = __Vfunc_HEX_TO_REAL__1215__Vfuncout;
    __Vfunc_HEX_TO_REAL__1216__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_i_32_b;
    __Vfunc_HEX_TO_REAL__1216__temp = __Vfunc_HEX_TO_REAL__1216__f_i_data;
    __Vfunc_HEX_TO_REAL__1216__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1216__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_b 
        = __Vfunc_HEX_TO_REAL__1216__Vfuncout;
    __Vfunc_HEX_TO_REAL__1217__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_32_s;
    __Vfunc_HEX_TO_REAL__1217__temp = __Vfunc_HEX_TO_REAL__1217__f_i_data;
    __Vfunc_HEX_TO_REAL__1217__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1217__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_s 
        = __Vfunc_HEX_TO_REAL__1217__Vfuncout;
    __Vfunc_Cal_FPU_expected__1218__f_i_32_b = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_b;
    __Vfunc_Cal_FPU_expected__1218__f_i_32_a = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_a;
    __Vfunc_Cal_FPU_expected__1218__f_i_add_sub = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_i_add_sub;
    __Vfunc_Cal_FPU_expected__1218__Vfuncout = ((IData)(__Vfunc_Cal_FPU_expected__1218__f_i_add_sub)
                                                 ? 
                                                (__Vfunc_Cal_FPU_expected__1218__f_i_32_a 
                                                 - __Vfunc_Cal_FPU_expected__1218__f_i_32_b)
                                                 : 
                                                (__Vfunc_Cal_FPU_expected__1218__f_i_32_a 
                                                 + __Vfunc_Cal_FPU_expected__1218__f_i_32_b));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_e 
        = __Vfunc_Cal_FPU_expected__1218__Vfuncout;
    __Vfunc_REAL_TO_HEX__1219__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_e;
    __Vfunc_REAL_TO_HEX__1219__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1219__f_i_data));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_32_e 
        = __Vfunc_REAL_TO_HEX__1219__Vfuncout;
    __Vfunc_Error_actual__1220__f_i_32_e = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_e;
    __Vfunc_Error_actual__1220__f_i_32_s = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_s;
    __Vfunc_REAL_TO_HEX__1221__f_i_data = __Vfunc_Error_actual__1220__f_i_32_s;
    __Vfunc_REAL_TO_HEX__1221__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1221__f_i_data));
    __Vfunc_Error_actual__1220__f_t_32_s = __Vfunc_REAL_TO_HEX__1221__Vfuncout;
    __Vfunc_REAL_TO_HEX__1222__f_i_data = __Vfunc_Error_actual__1220__f_i_32_e;
    __Vfunc_REAL_TO_HEX__1222__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1222__f_i_data));
    __Vfunc_Error_actual__1220__f_t_32_e = __Vfunc_REAL_TO_HEX__1222__Vfuncout;
    __Vfunc_Error_actual__1220__is_E_one_S = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1220__f_t_32_s 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1220__is_M_zero_S = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1220__f_t_32_s)))));
    __Vfunc_Error_actual__1220__is_INF_S = ((IData)(__Vfunc_Error_actual__1220__is_E_one_S) 
                                            & (IData)(__Vfunc_Error_actual__1220__is_M_zero_S));
    __Vfunc_Error_actual__1220__is_NAN_S = ((IData)(__Vfunc_Error_actual__1220__is_E_one_S) 
                                            & (~ (IData)(__Vfunc_Error_actual__1220__is_M_zero_S)));
    __Vfunc_Error_actual__1220__is_E_one_E = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1220__f_t_32_e 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1220__is_M_zero_E = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1220__f_t_32_e)))));
    __Vfunc_Error_actual__1220__is_INF_E = ((IData)(__Vfunc_Error_actual__1220__is_E_one_E) 
                                            & (IData)(__Vfunc_Error_actual__1220__is_M_zero_E));
    __Vfunc_Error_actual__1220__is_NAN_E = ((IData)(__Vfunc_Error_actual__1220__is_E_one_E) 
                                            & (~ (IData)(__Vfunc_Error_actual__1220__is_M_zero_E)));
    __Vfunc_Error_actual__1220__Vfuncout = ((IData)(__Vfunc_Error_actual__1220__is_NAN_S)
                                             ? ((IData)(__Vfunc_Error_actual__1220__is_NAN_E)
                                                 ? 0.0
                                                 : 100.0)
                                             : ((IData)(__Vfunc_Error_actual__1220__is_NAN_E)
                                                 ? 
                                                ((IData)(__Vfunc_Error_actual__1220__is_NAN_S)
                                                  ? 0.0
                                                  : 100.0)
                                                 : 
                                                (((IData)(__Vfunc_Error_actual__1220__is_INF_S) 
                                                  | (IData)(__Vfunc_Error_actual__1220__is_INF_E))
                                                  ? 
                                                 ((__Vfunc_Error_actual__1220__f_t_32_s 
                                                   == __Vfunc_Error_actual__1220__f_t_32_e)
                                                   ? 0.0
                                                   : 100.0)
                                                  : 
                                                 (((0.0 
                                                    == __Vfunc_Error_actual__1220__f_i_32_e) 
                                                   | (-0.0 
                                                      == __Vfunc_Error_actual__1220__f_i_32_e))
                                                   ? 
                                                  (((0.0 
                                                     == __Vfunc_Error_actual__1220__f_i_32_s) 
                                                    | (-0.0 
                                                       == __Vfunc_Error_actual__1220__f_i_32_s))
                                                    ? 0.0
                                                    : 100.0)
                                                   : 
                                                  (100.0 
                                                   * 
                                                   (([&]() {
                                    __Vfunc_ABS_value__1223__f_i_value 
                                        = (__Vfunc_Error_actual__1220__f_i_32_e 
                                           - __Vfunc_Error_actual__1220__f_i_32_s);
                                    {
                                        if ((__Vfunc_ABS_value__1223__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1223__Vfuncout 
                                                = (- __Vfunc_ABS_value__1223__f_i_value);
                                            goto __Vlabel199;
                                        } else {
                                            __Vfunc_ABS_value__1223__Vfuncout 
                                                = __Vfunc_ABS_value__1223__f_i_value;
                                            goto __Vlabel199;
                                        }
                                        __Vlabel199: ;
                                    }
                                }(), __Vfunc_ABS_value__1223__Vfuncout) 
                                                    / 
                                                    ([&]() {
                                    __Vfunc_ABS_value__1224__f_i_value 
                                        = __Vfunc_Error_actual__1220__f_i_32_e;
                                    {
                                        if ((__Vfunc_ABS_value__1224__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1224__Vfuncout 
                                                = (- __Vfunc_ABS_value__1224__f_i_value);
                                            goto __Vlabel200;
                                        } else {
                                            __Vfunc_ABS_value__1224__Vfuncout 
                                                = __Vfunc_ABS_value__1224__f_i_value;
                                            goto __Vlabel200;
                                        }
                                        __Vlabel200: ;
                                    }
                                }(), __Vfunc_ABS_value__1224__Vfuncout)))))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_rounding_error 
        = __Vfunc_Error_actual__1220__Vfuncout;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__f_t_check 
        = (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_rounding_error 
           <= __Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_error);
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.24f) %s i_32_b=%x (%.24f) \t| o_32_s=%x (%.24f) \t| o_ov_flow=%b, o_un_flow=%b\n=> %s: expect=%.24f (%x), dut=%.24f (%x), rounding_error=%.8f %% (exp_error = %.8f %%)\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_i_32_a,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_a,
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_i_32_b,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_b,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_s,
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_un_flow,
                 32,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__f_t_check)
                      ? 0x50415353U : 0x4641494cU),
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_e,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_32_e,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_32_s,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_sr_rounding_error,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__t_error);
    if (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1213__f_t_check) {
        vlSelf->tb_FPU_unit__DOT__test_pass = ((IData)(1U) 
                                               + vlSelf->tb_FPU_unit__DOT__test_pass);
    }
    vlSelf->tb_FPU_unit__DOT__test_count = ((IData)(1U) 
                                            + vlSelf->tb_FPU_unit__DOT__test_count);
    __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_i_fpu_b = 0xf80000U;
    __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_i_fpu_a = 0xcffffffU;
    __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_testcase = 
        std::string{"Overflow rouding"};
    __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_type = 
        std::string{"PRE_NOR_EXP"};
    VL_WRITEF_NX("==========[ %@ ]==========\n",0,-1,
                 &(__Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_testcase));
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       149);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       150);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 0U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_i_fpu_a;
    vlSelf->tb_FPU_unit__DOT__i_32_b = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_i_fpu_b;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       154);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       155);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_un_flow 
        = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                    >> 3U)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_ov_flow 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
           | ((0xffffffU == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_32_s 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result) 
            << 0x1fU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result) 
                          << 0x17U) | (0x7fffffU & 
                                       ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                         ? ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                             ? 0xc00000U
                                             : 0U) : 
                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                         ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry)))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_type 
        = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_type;
    __Vfunc_Error_standard__1227__Vfuncout = 1.19209289550781250e-05;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_error 
        = __Vfunc_Error_standard__1227__Vfuncout;
    __Vfunc_HEX_TO_REAL__1228__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_i_32_a;
    __Vfunc_HEX_TO_REAL__1228__temp = __Vfunc_HEX_TO_REAL__1228__f_i_data;
    __Vfunc_HEX_TO_REAL__1228__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1228__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_a 
        = __Vfunc_HEX_TO_REAL__1228__Vfuncout;
    __Vfunc_HEX_TO_REAL__1229__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_i_32_b;
    __Vfunc_HEX_TO_REAL__1229__temp = __Vfunc_HEX_TO_REAL__1229__f_i_data;
    __Vfunc_HEX_TO_REAL__1229__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1229__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_b 
        = __Vfunc_HEX_TO_REAL__1229__Vfuncout;
    __Vfunc_HEX_TO_REAL__1230__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_32_s;
    __Vfunc_HEX_TO_REAL__1230__temp = __Vfunc_HEX_TO_REAL__1230__f_i_data;
    __Vfunc_HEX_TO_REAL__1230__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1230__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_s 
        = __Vfunc_HEX_TO_REAL__1230__Vfuncout;
    __Vfunc_Cal_FPU_expected__1231__f_i_32_b = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_b;
    __Vfunc_Cal_FPU_expected__1231__f_i_32_a = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_a;
    __Vfunc_Cal_FPU_expected__1231__f_i_add_sub = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_i_add_sub;
    __Vfunc_Cal_FPU_expected__1231__Vfuncout = ((IData)(__Vfunc_Cal_FPU_expected__1231__f_i_add_sub)
                                                 ? 
                                                (__Vfunc_Cal_FPU_expected__1231__f_i_32_a 
                                                 - __Vfunc_Cal_FPU_expected__1231__f_i_32_b)
                                                 : 
                                                (__Vfunc_Cal_FPU_expected__1231__f_i_32_a 
                                                 + __Vfunc_Cal_FPU_expected__1231__f_i_32_b));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_e 
        = __Vfunc_Cal_FPU_expected__1231__Vfuncout;
    __Vfunc_REAL_TO_HEX__1232__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_e;
    __Vfunc_REAL_TO_HEX__1232__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1232__f_i_data));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_32_e 
        = __Vfunc_REAL_TO_HEX__1232__Vfuncout;
    __Vfunc_Error_actual__1233__f_i_32_e = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_e;
    __Vfunc_Error_actual__1233__f_i_32_s = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_s;
    __Vfunc_REAL_TO_HEX__1234__f_i_data = __Vfunc_Error_actual__1233__f_i_32_s;
    __Vfunc_REAL_TO_HEX__1234__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1234__f_i_data));
    __Vfunc_Error_actual__1233__f_t_32_s = __Vfunc_REAL_TO_HEX__1234__Vfuncout;
    __Vfunc_REAL_TO_HEX__1235__f_i_data = __Vfunc_Error_actual__1233__f_i_32_e;
    __Vfunc_REAL_TO_HEX__1235__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1235__f_i_data));
    __Vfunc_Error_actual__1233__f_t_32_e = __Vfunc_REAL_TO_HEX__1235__Vfuncout;
    __Vfunc_Error_actual__1233__is_E_one_S = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1233__f_t_32_s 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1233__is_M_zero_S = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1233__f_t_32_s)))));
    __Vfunc_Error_actual__1233__is_INF_S = ((IData)(__Vfunc_Error_actual__1233__is_E_one_S) 
                                            & (IData)(__Vfunc_Error_actual__1233__is_M_zero_S));
    __Vfunc_Error_actual__1233__is_NAN_S = ((IData)(__Vfunc_Error_actual__1233__is_E_one_S) 
                                            & (~ (IData)(__Vfunc_Error_actual__1233__is_M_zero_S)));
    __Vfunc_Error_actual__1233__is_E_one_E = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1233__f_t_32_e 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1233__is_M_zero_E = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1233__f_t_32_e)))));
    __Vfunc_Error_actual__1233__is_INF_E = ((IData)(__Vfunc_Error_actual__1233__is_E_one_E) 
                                            & (IData)(__Vfunc_Error_actual__1233__is_M_zero_E));
    __Vfunc_Error_actual__1233__is_NAN_E = ((IData)(__Vfunc_Error_actual__1233__is_E_one_E) 
                                            & (~ (IData)(__Vfunc_Error_actual__1233__is_M_zero_E)));
    __Vfunc_Error_actual__1233__Vfuncout = ((IData)(__Vfunc_Error_actual__1233__is_NAN_S)
                                             ? ((IData)(__Vfunc_Error_actual__1233__is_NAN_E)
                                                 ? 0.0
                                                 : 100.0)
                                             : ((IData)(__Vfunc_Error_actual__1233__is_NAN_E)
                                                 ? 
                                                ((IData)(__Vfunc_Error_actual__1233__is_NAN_S)
                                                  ? 0.0
                                                  : 100.0)
                                                 : 
                                                (((IData)(__Vfunc_Error_actual__1233__is_INF_S) 
                                                  | (IData)(__Vfunc_Error_actual__1233__is_INF_E))
                                                  ? 
                                                 ((__Vfunc_Error_actual__1233__f_t_32_s 
                                                   == __Vfunc_Error_actual__1233__f_t_32_e)
                                                   ? 0.0
                                                   : 100.0)
                                                  : 
                                                 (((0.0 
                                                    == __Vfunc_Error_actual__1233__f_i_32_e) 
                                                   | (-0.0 
                                                      == __Vfunc_Error_actual__1233__f_i_32_e))
                                                   ? 
                                                  (((0.0 
                                                     == __Vfunc_Error_actual__1233__f_i_32_s) 
                                                    | (-0.0 
                                                       == __Vfunc_Error_actual__1233__f_i_32_s))
                                                    ? 0.0
                                                    : 100.0)
                                                   : 
                                                  (100.0 
                                                   * 
                                                   (([&]() {
                                    __Vfunc_ABS_value__1236__f_i_value 
                                        = (__Vfunc_Error_actual__1233__f_i_32_e 
                                           - __Vfunc_Error_actual__1233__f_i_32_s);
                                    {
                                        if ((__Vfunc_ABS_value__1236__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1236__Vfuncout 
                                                = (- __Vfunc_ABS_value__1236__f_i_value);
                                            goto __Vlabel201;
                                        } else {
                                            __Vfunc_ABS_value__1236__Vfuncout 
                                                = __Vfunc_ABS_value__1236__f_i_value;
                                            goto __Vlabel201;
                                        }
                                        __Vlabel201: ;
                                    }
                                }(), __Vfunc_ABS_value__1236__Vfuncout) 
                                                    / 
                                                    ([&]() {
                                    __Vfunc_ABS_value__1237__f_i_value 
                                        = __Vfunc_Error_actual__1233__f_i_32_e;
                                    {
                                        if ((__Vfunc_ABS_value__1237__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1237__Vfuncout 
                                                = (- __Vfunc_ABS_value__1237__f_i_value);
                                            goto __Vlabel202;
                                        } else {
                                            __Vfunc_ABS_value__1237__Vfuncout 
                                                = __Vfunc_ABS_value__1237__f_i_value;
                                            goto __Vlabel202;
                                        }
                                        __Vlabel202: ;
                                    }
                                }(), __Vfunc_ABS_value__1237__Vfuncout)))))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_rounding_error 
        = __Vfunc_Error_actual__1233__Vfuncout;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__f_t_check 
        = (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_rounding_error 
           <= __Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_error);
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.24f) %s i_32_b=%x (%.24f) \t| o_32_s=%x (%.24f) \t| o_ov_flow=%b, o_un_flow=%b\n=> %s: expect=%.24f (%x), dut=%.24f (%x), rounding_error=%.8f %% (exp_error = %.8f %%)\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_i_32_a,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_a,
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_i_32_b,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_b,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_s,
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_un_flow,
                 32,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__f_t_check)
                      ? 0x50415353U : 0x4641494cU),
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_e,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_32_e,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_32_s,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_sr_rounding_error,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__t_error);
    if (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1226__f_t_check) {
        vlSelf->tb_FPU_unit__DOT__test_pass = ((IData)(1U) 
                                               + vlSelf->tb_FPU_unit__DOT__test_pass);
    }
    vlSelf->tb_FPU_unit__DOT__test_count = ((IData)(1U) 
                                            + vlSelf->tb_FPU_unit__DOT__test_count);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       158);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       159);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 0U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_i_fpu_b;
    vlSelf->tb_FPU_unit__DOT__i_32_b = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_i_fpu_a;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       163);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       164);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_un_flow 
        = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                    >> 3U)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_ov_flow 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
           | ((0xffffffU == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_32_s 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result) 
            << 0x1fU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result) 
                          << 0x17U) | (0x7fffffU & 
                                       ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                         ? ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                             ? 0xc00000U
                                             : 0U) : 
                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                         ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry)))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_type 
        = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_type;
    __Vfunc_Error_standard__1239__Vfuncout = 1.19209289550781250e-05;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_error 
        = __Vfunc_Error_standard__1239__Vfuncout;
    __Vfunc_HEX_TO_REAL__1240__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_i_32_a;
    __Vfunc_HEX_TO_REAL__1240__temp = __Vfunc_HEX_TO_REAL__1240__f_i_data;
    __Vfunc_HEX_TO_REAL__1240__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1240__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_a 
        = __Vfunc_HEX_TO_REAL__1240__Vfuncout;
    __Vfunc_HEX_TO_REAL__1241__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_i_32_b;
    __Vfunc_HEX_TO_REAL__1241__temp = __Vfunc_HEX_TO_REAL__1241__f_i_data;
    __Vfunc_HEX_TO_REAL__1241__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1241__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_b 
        = __Vfunc_HEX_TO_REAL__1241__Vfuncout;
    __Vfunc_HEX_TO_REAL__1242__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_32_s;
    __Vfunc_HEX_TO_REAL__1242__temp = __Vfunc_HEX_TO_REAL__1242__f_i_data;
    __Vfunc_HEX_TO_REAL__1242__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1242__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_s 
        = __Vfunc_HEX_TO_REAL__1242__Vfuncout;
    __Vfunc_Cal_FPU_expected__1243__f_i_32_b = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_b;
    __Vfunc_Cal_FPU_expected__1243__f_i_32_a = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_a;
    __Vfunc_Cal_FPU_expected__1243__f_i_add_sub = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_i_add_sub;
    __Vfunc_Cal_FPU_expected__1243__Vfuncout = ((IData)(__Vfunc_Cal_FPU_expected__1243__f_i_add_sub)
                                                 ? 
                                                (__Vfunc_Cal_FPU_expected__1243__f_i_32_a 
                                                 - __Vfunc_Cal_FPU_expected__1243__f_i_32_b)
                                                 : 
                                                (__Vfunc_Cal_FPU_expected__1243__f_i_32_a 
                                                 + __Vfunc_Cal_FPU_expected__1243__f_i_32_b));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_e 
        = __Vfunc_Cal_FPU_expected__1243__Vfuncout;
    __Vfunc_REAL_TO_HEX__1244__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_e;
    __Vfunc_REAL_TO_HEX__1244__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1244__f_i_data));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_32_e 
        = __Vfunc_REAL_TO_HEX__1244__Vfuncout;
    __Vfunc_Error_actual__1245__f_i_32_e = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_e;
    __Vfunc_Error_actual__1245__f_i_32_s = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_s;
    __Vfunc_REAL_TO_HEX__1246__f_i_data = __Vfunc_Error_actual__1245__f_i_32_s;
    __Vfunc_REAL_TO_HEX__1246__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1246__f_i_data));
    __Vfunc_Error_actual__1245__f_t_32_s = __Vfunc_REAL_TO_HEX__1246__Vfuncout;
    __Vfunc_REAL_TO_HEX__1247__f_i_data = __Vfunc_Error_actual__1245__f_i_32_e;
    __Vfunc_REAL_TO_HEX__1247__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1247__f_i_data));
    __Vfunc_Error_actual__1245__f_t_32_e = __Vfunc_REAL_TO_HEX__1247__Vfuncout;
    __Vfunc_Error_actual__1245__is_E_one_S = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1245__f_t_32_s 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1245__is_M_zero_S = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1245__f_t_32_s)))));
    __Vfunc_Error_actual__1245__is_INF_S = ((IData)(__Vfunc_Error_actual__1245__is_E_one_S) 
                                            & (IData)(__Vfunc_Error_actual__1245__is_M_zero_S));
    __Vfunc_Error_actual__1245__is_NAN_S = ((IData)(__Vfunc_Error_actual__1245__is_E_one_S) 
                                            & (~ (IData)(__Vfunc_Error_actual__1245__is_M_zero_S)));
    __Vfunc_Error_actual__1245__is_E_one_E = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1245__f_t_32_e 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1245__is_M_zero_E = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1245__f_t_32_e)))));
    __Vfunc_Error_actual__1245__is_INF_E = ((IData)(__Vfunc_Error_actual__1245__is_E_one_E) 
                                            & (IData)(__Vfunc_Error_actual__1245__is_M_zero_E));
    __Vfunc_Error_actual__1245__is_NAN_E = ((IData)(__Vfunc_Error_actual__1245__is_E_one_E) 
                                            & (~ (IData)(__Vfunc_Error_actual__1245__is_M_zero_E)));
    __Vfunc_Error_actual__1245__Vfuncout = ((IData)(__Vfunc_Error_actual__1245__is_NAN_S)
                                             ? ((IData)(__Vfunc_Error_actual__1245__is_NAN_E)
                                                 ? 0.0
                                                 : 100.0)
                                             : ((IData)(__Vfunc_Error_actual__1245__is_NAN_E)
                                                 ? 
                                                ((IData)(__Vfunc_Error_actual__1245__is_NAN_S)
                                                  ? 0.0
                                                  : 100.0)
                                                 : 
                                                (((IData)(__Vfunc_Error_actual__1245__is_INF_S) 
                                                  | (IData)(__Vfunc_Error_actual__1245__is_INF_E))
                                                  ? 
                                                 ((__Vfunc_Error_actual__1245__f_t_32_s 
                                                   == __Vfunc_Error_actual__1245__f_t_32_e)
                                                   ? 0.0
                                                   : 100.0)
                                                  : 
                                                 (((0.0 
                                                    == __Vfunc_Error_actual__1245__f_i_32_e) 
                                                   | (-0.0 
                                                      == __Vfunc_Error_actual__1245__f_i_32_e))
                                                   ? 
                                                  (((0.0 
                                                     == __Vfunc_Error_actual__1245__f_i_32_s) 
                                                    | (-0.0 
                                                       == __Vfunc_Error_actual__1245__f_i_32_s))
                                                    ? 0.0
                                                    : 100.0)
                                                   : 
                                                  (100.0 
                                                   * 
                                                   (([&]() {
                                    __Vfunc_ABS_value__1248__f_i_value 
                                        = (__Vfunc_Error_actual__1245__f_i_32_e 
                                           - __Vfunc_Error_actual__1245__f_i_32_s);
                                    {
                                        if ((__Vfunc_ABS_value__1248__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1248__Vfuncout 
                                                = (- __Vfunc_ABS_value__1248__f_i_value);
                                            goto __Vlabel203;
                                        } else {
                                            __Vfunc_ABS_value__1248__Vfuncout 
                                                = __Vfunc_ABS_value__1248__f_i_value;
                                            goto __Vlabel203;
                                        }
                                        __Vlabel203: ;
                                    }
                                }(), __Vfunc_ABS_value__1248__Vfuncout) 
                                                    / 
                                                    ([&]() {
                                    __Vfunc_ABS_value__1249__f_i_value 
                                        = __Vfunc_Error_actual__1245__f_i_32_e;
                                    {
                                        if ((__Vfunc_ABS_value__1249__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1249__Vfuncout 
                                                = (- __Vfunc_ABS_value__1249__f_i_value);
                                            goto __Vlabel204;
                                        } else {
                                            __Vfunc_ABS_value__1249__Vfuncout 
                                                = __Vfunc_ABS_value__1249__f_i_value;
                                            goto __Vlabel204;
                                        }
                                        __Vlabel204: ;
                                    }
                                }(), __Vfunc_ABS_value__1249__Vfuncout)))))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_rounding_error 
        = __Vfunc_Error_actual__1245__Vfuncout;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__f_t_check 
        = (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_rounding_error 
           <= __Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_error);
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.24f) %s i_32_b=%x (%.24f) \t| o_32_s=%x (%.24f) \t| o_ov_flow=%b, o_un_flow=%b\n=> %s: expect=%.24f (%x), dut=%.24f (%x), rounding_error=%.8f %% (exp_error = %.8f %%)\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_i_32_a,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_a,
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_i_32_b,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_b,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_s,
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_un_flow,
                 32,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__f_t_check)
                      ? 0x50415353U : 0x4641494cU),
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_e,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_32_e,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_32_s,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_sr_rounding_error,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__t_error);
    if (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1238__f_t_check) {
        vlSelf->tb_FPU_unit__DOT__test_pass = ((IData)(1U) 
                                               + vlSelf->tb_FPU_unit__DOT__test_pass);
    }
    vlSelf->tb_FPU_unit__DOT__test_count = ((IData)(1U) 
                                            + vlSelf->tb_FPU_unit__DOT__test_count);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       167);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       168);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 1U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_i_fpu_a;
    vlSelf->tb_FPU_unit__DOT__i_32_b = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_i_fpu_b;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       172);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       173);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_un_flow 
        = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                    >> 3U)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_ov_flow 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
           | ((0xffffffU == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_32_s 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result) 
            << 0x1fU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result) 
                          << 0x17U) | (0x7fffffU & 
                                       ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                         ? ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                             ? 0xc00000U
                                             : 0U) : 
                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                         ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry)))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_type 
        = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_type;
    __Vfunc_Error_standard__1251__Vfuncout = 1.19209289550781250e-05;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_error 
        = __Vfunc_Error_standard__1251__Vfuncout;
    __Vfunc_HEX_TO_REAL__1252__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_i_32_a;
    __Vfunc_HEX_TO_REAL__1252__temp = __Vfunc_HEX_TO_REAL__1252__f_i_data;
    __Vfunc_HEX_TO_REAL__1252__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1252__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_a 
        = __Vfunc_HEX_TO_REAL__1252__Vfuncout;
    __Vfunc_HEX_TO_REAL__1253__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_i_32_b;
    __Vfunc_HEX_TO_REAL__1253__temp = __Vfunc_HEX_TO_REAL__1253__f_i_data;
    __Vfunc_HEX_TO_REAL__1253__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1253__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_b 
        = __Vfunc_HEX_TO_REAL__1253__Vfuncout;
    __Vfunc_HEX_TO_REAL__1254__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_32_s;
    __Vfunc_HEX_TO_REAL__1254__temp = __Vfunc_HEX_TO_REAL__1254__f_i_data;
    __Vfunc_HEX_TO_REAL__1254__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1254__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_s 
        = __Vfunc_HEX_TO_REAL__1254__Vfuncout;
    __Vfunc_Cal_FPU_expected__1255__f_i_32_b = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_b;
    __Vfunc_Cal_FPU_expected__1255__f_i_32_a = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_a;
    __Vfunc_Cal_FPU_expected__1255__f_i_add_sub = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_i_add_sub;
    __Vfunc_Cal_FPU_expected__1255__Vfuncout = ((IData)(__Vfunc_Cal_FPU_expected__1255__f_i_add_sub)
                                                 ? 
                                                (__Vfunc_Cal_FPU_expected__1255__f_i_32_a 
                                                 - __Vfunc_Cal_FPU_expected__1255__f_i_32_b)
                                                 : 
                                                (__Vfunc_Cal_FPU_expected__1255__f_i_32_a 
                                                 + __Vfunc_Cal_FPU_expected__1255__f_i_32_b));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_e 
        = __Vfunc_Cal_FPU_expected__1255__Vfuncout;
    __Vfunc_REAL_TO_HEX__1256__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_e;
    __Vfunc_REAL_TO_HEX__1256__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1256__f_i_data));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_32_e 
        = __Vfunc_REAL_TO_HEX__1256__Vfuncout;
    __Vfunc_Error_actual__1257__f_i_32_e = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_e;
    __Vfunc_Error_actual__1257__f_i_32_s = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_s;
    __Vfunc_REAL_TO_HEX__1258__f_i_data = __Vfunc_Error_actual__1257__f_i_32_s;
    __Vfunc_REAL_TO_HEX__1258__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1258__f_i_data));
    __Vfunc_Error_actual__1257__f_t_32_s = __Vfunc_REAL_TO_HEX__1258__Vfuncout;
    __Vfunc_REAL_TO_HEX__1259__f_i_data = __Vfunc_Error_actual__1257__f_i_32_e;
    __Vfunc_REAL_TO_HEX__1259__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1259__f_i_data));
    __Vfunc_Error_actual__1257__f_t_32_e = __Vfunc_REAL_TO_HEX__1259__Vfuncout;
    __Vfunc_Error_actual__1257__is_E_one_S = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1257__f_t_32_s 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1257__is_M_zero_S = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1257__f_t_32_s)))));
    __Vfunc_Error_actual__1257__is_INF_S = ((IData)(__Vfunc_Error_actual__1257__is_E_one_S) 
                                            & (IData)(__Vfunc_Error_actual__1257__is_M_zero_S));
    __Vfunc_Error_actual__1257__is_NAN_S = ((IData)(__Vfunc_Error_actual__1257__is_E_one_S) 
                                            & (~ (IData)(__Vfunc_Error_actual__1257__is_M_zero_S)));
    __Vfunc_Error_actual__1257__is_E_one_E = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1257__f_t_32_e 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1257__is_M_zero_E = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1257__f_t_32_e)))));
    __Vfunc_Error_actual__1257__is_INF_E = ((IData)(__Vfunc_Error_actual__1257__is_E_one_E) 
                                            & (IData)(__Vfunc_Error_actual__1257__is_M_zero_E));
    __Vfunc_Error_actual__1257__is_NAN_E = ((IData)(__Vfunc_Error_actual__1257__is_E_one_E) 
                                            & (~ (IData)(__Vfunc_Error_actual__1257__is_M_zero_E)));
    __Vfunc_Error_actual__1257__Vfuncout = ((IData)(__Vfunc_Error_actual__1257__is_NAN_S)
                                             ? ((IData)(__Vfunc_Error_actual__1257__is_NAN_E)
                                                 ? 0.0
                                                 : 100.0)
                                             : ((IData)(__Vfunc_Error_actual__1257__is_NAN_E)
                                                 ? 
                                                ((IData)(__Vfunc_Error_actual__1257__is_NAN_S)
                                                  ? 0.0
                                                  : 100.0)
                                                 : 
                                                (((IData)(__Vfunc_Error_actual__1257__is_INF_S) 
                                                  | (IData)(__Vfunc_Error_actual__1257__is_INF_E))
                                                  ? 
                                                 ((__Vfunc_Error_actual__1257__f_t_32_s 
                                                   == __Vfunc_Error_actual__1257__f_t_32_e)
                                                   ? 0.0
                                                   : 100.0)
                                                  : 
                                                 (((0.0 
                                                    == __Vfunc_Error_actual__1257__f_i_32_e) 
                                                   | (-0.0 
                                                      == __Vfunc_Error_actual__1257__f_i_32_e))
                                                   ? 
                                                  (((0.0 
                                                     == __Vfunc_Error_actual__1257__f_i_32_s) 
                                                    | (-0.0 
                                                       == __Vfunc_Error_actual__1257__f_i_32_s))
                                                    ? 0.0
                                                    : 100.0)
                                                   : 
                                                  (100.0 
                                                   * 
                                                   (([&]() {
                                    __Vfunc_ABS_value__1260__f_i_value 
                                        = (__Vfunc_Error_actual__1257__f_i_32_e 
                                           - __Vfunc_Error_actual__1257__f_i_32_s);
                                    {
                                        if ((__Vfunc_ABS_value__1260__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1260__Vfuncout 
                                                = (- __Vfunc_ABS_value__1260__f_i_value);
                                            goto __Vlabel205;
                                        } else {
                                            __Vfunc_ABS_value__1260__Vfuncout 
                                                = __Vfunc_ABS_value__1260__f_i_value;
                                            goto __Vlabel205;
                                        }
                                        __Vlabel205: ;
                                    }
                                }(), __Vfunc_ABS_value__1260__Vfuncout) 
                                                    / 
                                                    ([&]() {
                                    __Vfunc_ABS_value__1261__f_i_value 
                                        = __Vfunc_Error_actual__1257__f_i_32_e;
                                    {
                                        if ((__Vfunc_ABS_value__1261__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1261__Vfuncout 
                                                = (- __Vfunc_ABS_value__1261__f_i_value);
                                            goto __Vlabel206;
                                        } else {
                                            __Vfunc_ABS_value__1261__Vfuncout 
                                                = __Vfunc_ABS_value__1261__f_i_value;
                                            goto __Vlabel206;
                                        }
                                        __Vlabel206: ;
                                    }
                                }(), __Vfunc_ABS_value__1261__Vfuncout)))))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_rounding_error 
        = __Vfunc_Error_actual__1257__Vfuncout;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__f_t_check 
        = (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_rounding_error 
           <= __Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_error);
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.24f) %s i_32_b=%x (%.24f) \t| o_32_s=%x (%.24f) \t| o_ov_flow=%b, o_un_flow=%b\n=> %s: expect=%.24f (%x), dut=%.24f (%x), rounding_error=%.8f %% (exp_error = %.8f %%)\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_i_32_a,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_a,
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_i_32_b,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_b,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_s,
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_un_flow,
                 32,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__f_t_check)
                      ? 0x50415353U : 0x4641494cU),
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_e,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_32_e,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_32_s,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_sr_rounding_error,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__t_error);
    if (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1250__f_t_check) {
        vlSelf->tb_FPU_unit__DOT__test_pass = ((IData)(1U) 
                                               + vlSelf->tb_FPU_unit__DOT__test_pass);
    }
    vlSelf->tb_FPU_unit__DOT__test_count = ((IData)(1U) 
                                            + vlSelf->tb_FPU_unit__DOT__test_count);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       176);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       177);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 1U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_i_fpu_b;
    vlSelf->tb_FPU_unit__DOT__i_32_b = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_i_fpu_a;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                       181);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       182);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_un_flow 
        = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                    >> 3U)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_ov_flow 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
           | ((0xffffffU == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_32_s 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result) 
            << 0x1fU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result) 
                          << 0x17U) | (0x7fffffU & 
                                       ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                         ? ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                             ? 0xc00000U
                                             : 0U) : 
                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                         ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry)))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_type 
        = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1225__t_type;
    __Vfunc_Error_standard__1263__Vfuncout = 1.19209289550781250e-05;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_error 
        = __Vfunc_Error_standard__1263__Vfuncout;
    __Vfunc_HEX_TO_REAL__1264__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_i_32_a;
    __Vfunc_HEX_TO_REAL__1264__temp = __Vfunc_HEX_TO_REAL__1264__f_i_data;
    __Vfunc_HEX_TO_REAL__1264__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1264__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_a 
        = __Vfunc_HEX_TO_REAL__1264__Vfuncout;
    __Vfunc_HEX_TO_REAL__1265__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_i_32_b;
    __Vfunc_HEX_TO_REAL__1265__temp = __Vfunc_HEX_TO_REAL__1265__f_i_data;
    __Vfunc_HEX_TO_REAL__1265__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1265__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_b 
        = __Vfunc_HEX_TO_REAL__1265__Vfuncout;
    __Vfunc_HEX_TO_REAL__1266__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_32_s;
    __Vfunc_HEX_TO_REAL__1266__temp = __Vfunc_HEX_TO_REAL__1266__f_i_data;
    __Vfunc_HEX_TO_REAL__1266__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1266__temp)));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_s 
        = __Vfunc_HEX_TO_REAL__1266__Vfuncout;
    __Vfunc_Cal_FPU_expected__1267__f_i_32_b = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_b;
    __Vfunc_Cal_FPU_expected__1267__f_i_32_a = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_a;
    __Vfunc_Cal_FPU_expected__1267__f_i_add_sub = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_i_add_sub;
    __Vfunc_Cal_FPU_expected__1267__Vfuncout = ((IData)(__Vfunc_Cal_FPU_expected__1267__f_i_add_sub)
                                                 ? 
                                                (__Vfunc_Cal_FPU_expected__1267__f_i_32_a 
                                                 - __Vfunc_Cal_FPU_expected__1267__f_i_32_b)
                                                 : 
                                                (__Vfunc_Cal_FPU_expected__1267__f_i_32_a 
                                                 + __Vfunc_Cal_FPU_expected__1267__f_i_32_b));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_e 
        = __Vfunc_Cal_FPU_expected__1267__Vfuncout;
    __Vfunc_REAL_TO_HEX__1268__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_e;
    __Vfunc_REAL_TO_HEX__1268__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1268__f_i_data));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_32_e 
        = __Vfunc_REAL_TO_HEX__1268__Vfuncout;
    __Vfunc_Error_actual__1269__f_i_32_e = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_e;
    __Vfunc_Error_actual__1269__f_i_32_s = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_s;
    __Vfunc_REAL_TO_HEX__1270__f_i_data = __Vfunc_Error_actual__1269__f_i_32_s;
    __Vfunc_REAL_TO_HEX__1270__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1270__f_i_data));
    __Vfunc_Error_actual__1269__f_t_32_s = __Vfunc_REAL_TO_HEX__1270__Vfuncout;
    __Vfunc_REAL_TO_HEX__1271__f_i_data = __Vfunc_Error_actual__1269__f_i_32_e;
    __Vfunc_REAL_TO_HEX__1271__Vfuncout = (IData)(VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1271__f_i_data));
    __Vfunc_Error_actual__1269__f_t_32_e = __Vfunc_REAL_TO_HEX__1271__Vfuncout;
    __Vfunc_Error_actual__1269__is_E_one_S = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1269__f_t_32_s 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1269__is_M_zero_S = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1269__f_t_32_s)))));
    __Vfunc_Error_actual__1269__is_INF_S = ((IData)(__Vfunc_Error_actual__1269__is_E_one_S) 
                                            & (IData)(__Vfunc_Error_actual__1269__is_M_zero_S));
    __Vfunc_Error_actual__1269__is_NAN_S = ((IData)(__Vfunc_Error_actual__1269__is_E_one_S) 
                                            & (~ (IData)(__Vfunc_Error_actual__1269__is_M_zero_S)));
    __Vfunc_Error_actual__1269__is_E_one_E = (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_Error_actual__1269__f_t_32_e 
                                                     >> 0x17U)));
    __Vfunc_Error_actual__1269__is_M_zero_E = (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & __Vfunc_Error_actual__1269__f_t_32_e)))));
    __Vfunc_Error_actual__1269__is_INF_E = ((IData)(__Vfunc_Error_actual__1269__is_E_one_E) 
                                            & (IData)(__Vfunc_Error_actual__1269__is_M_zero_E));
    __Vfunc_Error_actual__1269__is_NAN_E = ((IData)(__Vfunc_Error_actual__1269__is_E_one_E) 
                                            & (~ (IData)(__Vfunc_Error_actual__1269__is_M_zero_E)));
    __Vfunc_Error_actual__1269__Vfuncout = ((IData)(__Vfunc_Error_actual__1269__is_NAN_S)
                                             ? ((IData)(__Vfunc_Error_actual__1269__is_NAN_E)
                                                 ? 0.0
                                                 : 100.0)
                                             : ((IData)(__Vfunc_Error_actual__1269__is_NAN_E)
                                                 ? 
                                                ((IData)(__Vfunc_Error_actual__1269__is_NAN_S)
                                                  ? 0.0
                                                  : 100.0)
                                                 : 
                                                (((IData)(__Vfunc_Error_actual__1269__is_INF_S) 
                                                  | (IData)(__Vfunc_Error_actual__1269__is_INF_E))
                                                  ? 
                                                 ((__Vfunc_Error_actual__1269__f_t_32_s 
                                                   == __Vfunc_Error_actual__1269__f_t_32_e)
                                                   ? 0.0
                                                   : 100.0)
                                                  : 
                                                 (((0.0 
                                                    == __Vfunc_Error_actual__1269__f_i_32_e) 
                                                   | (-0.0 
                                                      == __Vfunc_Error_actual__1269__f_i_32_e))
                                                   ? 
                                                  (((0.0 
                                                     == __Vfunc_Error_actual__1269__f_i_32_s) 
                                                    | (-0.0 
                                                       == __Vfunc_Error_actual__1269__f_i_32_s))
                                                    ? 0.0
                                                    : 100.0)
                                                   : 
                                                  (100.0 
                                                   * 
                                                   (([&]() {
                                    __Vfunc_ABS_value__1272__f_i_value 
                                        = (__Vfunc_Error_actual__1269__f_i_32_e 
                                           - __Vfunc_Error_actual__1269__f_i_32_s);
                                    {
                                        if ((__Vfunc_ABS_value__1272__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1272__Vfuncout 
                                                = (- __Vfunc_ABS_value__1272__f_i_value);
                                            goto __Vlabel207;
                                        } else {
                                            __Vfunc_ABS_value__1272__Vfuncout 
                                                = __Vfunc_ABS_value__1272__f_i_value;
                                            goto __Vlabel207;
                                        }
                                        __Vlabel207: ;
                                    }
                                }(), __Vfunc_ABS_value__1272__Vfuncout) 
                                                    / 
                                                    ([&]() {
                                    __Vfunc_ABS_value__1273__f_i_value 
                                        = __Vfunc_Error_actual__1269__f_i_32_e;
                                    {
                                        if ((__Vfunc_ABS_value__1273__f_i_value 
                                             < 0.0)) {
                                            __Vfunc_ABS_value__1273__Vfuncout 
                                                = (- __Vfunc_ABS_value__1273__f_i_value);
                                            goto __Vlabel208;
                                        } else {
                                            __Vfunc_ABS_value__1273__Vfuncout 
                                                = __Vfunc_ABS_value__1273__f_i_value;
                                            goto __Vlabel208;
                                        }
                                        __Vlabel208: ;
                                    }
                                }(), __Vfunc_ABS_value__1273__Vfuncout)))))));
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_rounding_error 
        = __Vfunc_Error_actual__1269__Vfuncout;
    __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__f_t_check 
        = (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_rounding_error 
           <= __Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_error);
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.24f) %s i_32_b=%x (%.24f) \t| o_32_s=%x (%.24f) \t| o_ov_flow=%b, o_un_flow=%b\n=> %s: expect=%.24f (%x), dut=%.24f (%x), rounding_error=%.8f %% (exp_error = %.8f %%)\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_i_32_a,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_a,
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_i_32_b,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_b,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_s,
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_un_flow,
                 32,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__f_t_check)
                      ? 0x50415353U : 0x4641494cU),
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_e,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_32_e,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_32_s,
                 32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_o_32_s,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_sr_rounding_error,
                 64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__t_error);
    if (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1262__f_t_check) {
        vlSelf->tb_FPU_unit__DOT__test_pass = ((IData)(1U) 
                                               + vlSelf->tb_FPU_unit__DOT__test_pass);
    }
    vlSelf->tb_FPU_unit__DOT__test_count = ((IData)(1U) 
                                            + vlSelf->tb_FPU_unit__DOT__test_count);
    tb_FPU_unit__DOT____Vrepeat0 = 0x800U;
    while (VL_LTS_III(32, 0U, tb_FPU_unit__DOT____Vrepeat0)) {
        __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_i_fpu_b 
            = vlSelf->tb_FPU_unit__DOT__w_o_data_rom_b;
        __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_i_fpu_a 
            = vlSelf->tb_FPU_unit__DOT__w_o_data_rom_a;
        __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_testcase = 
            std::string{"Read data from ROM"};
        __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_type = 
            std::string{"Random"};
        VL_WRITEF_NX("==========[ %@ ]==========\n",0,
                     -1,&(__Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_testcase));
        co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_FPU_unit.i_clk)", 
                                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                           149);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                           150);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->tb_FPU_unit__DOT__i_add_sub = 0U;
        vlSelf->tb_FPU_unit__DOT__i_32_a = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_i_fpu_a;
        vlSelf->tb_FPU_unit__DOT__i_32_b = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_i_fpu_b;
        co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_FPU_unit.i_clk)", 
                                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                           154);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                           155);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_un_flow 
            = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                        >> 3U)));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_ov_flow 
            = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
               | ((0xffffffU == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_32_s 
            = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result) 
                << 0x1fU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result) 
                              << 0x17U) | (0x7fffffU 
                                           & ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                               ? ((1U 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                                   ? 0xc00000U
                                                   : 0U)
                                               : (vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                                  ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry)))));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_i_32_b 
            = vlSelf->tb_FPU_unit__DOT__i_32_b;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_i_32_a 
            = vlSelf->tb_FPU_unit__DOT__i_32_a;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_i_add_sub 
            = vlSelf->tb_FPU_unit__DOT__i_add_sub;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_type 
            = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_type;
        __Vfunc_Error_standard__1276__Vfuncout = 1.19209289550781250e-05;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_error 
            = __Vfunc_Error_standard__1276__Vfuncout;
        __Vfunc_HEX_TO_REAL__1277__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_i_32_a;
        __Vfunc_HEX_TO_REAL__1277__temp = __Vfunc_HEX_TO_REAL__1277__f_i_data;
        __Vfunc_HEX_TO_REAL__1277__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1277__temp)));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_a 
            = __Vfunc_HEX_TO_REAL__1277__Vfuncout;
        __Vfunc_HEX_TO_REAL__1278__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_i_32_b;
        __Vfunc_HEX_TO_REAL__1278__temp = __Vfunc_HEX_TO_REAL__1278__f_i_data;
        __Vfunc_HEX_TO_REAL__1278__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1278__temp)));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_b 
            = __Vfunc_HEX_TO_REAL__1278__Vfuncout;
        __Vfunc_HEX_TO_REAL__1279__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_32_s;
        __Vfunc_HEX_TO_REAL__1279__temp = __Vfunc_HEX_TO_REAL__1279__f_i_data;
        __Vfunc_HEX_TO_REAL__1279__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1279__temp)));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_s 
            = __Vfunc_HEX_TO_REAL__1279__Vfuncout;
        __Vfunc_Cal_FPU_expected__1280__f_i_32_b = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_b;
        __Vfunc_Cal_FPU_expected__1280__f_i_32_a = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_a;
        __Vfunc_Cal_FPU_expected__1280__f_i_add_sub 
            = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_i_add_sub;
        __Vfunc_Cal_FPU_expected__1280__Vfuncout = 
            ((IData)(__Vfunc_Cal_FPU_expected__1280__f_i_add_sub)
              ? (__Vfunc_Cal_FPU_expected__1280__f_i_32_a 
                 - __Vfunc_Cal_FPU_expected__1280__f_i_32_b)
              : (__Vfunc_Cal_FPU_expected__1280__f_i_32_a 
                 + __Vfunc_Cal_FPU_expected__1280__f_i_32_b));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_e 
            = __Vfunc_Cal_FPU_expected__1280__Vfuncout;
        __Vfunc_REAL_TO_HEX__1281__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_e;
        __Vfunc_REAL_TO_HEX__1281__Vfuncout = (IData)(
                                                      VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1281__f_i_data));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_32_e 
            = __Vfunc_REAL_TO_HEX__1281__Vfuncout;
        __Vfunc_Error_actual__1282__f_i_32_e = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_e;
        __Vfunc_Error_actual__1282__f_i_32_s = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_s;
        __Vfunc_REAL_TO_HEX__1283__f_i_data = __Vfunc_Error_actual__1282__f_i_32_s;
        __Vfunc_REAL_TO_HEX__1283__Vfuncout = (IData)(
                                                      VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1283__f_i_data));
        __Vfunc_Error_actual__1282__f_t_32_s = __Vfunc_REAL_TO_HEX__1283__Vfuncout;
        __Vfunc_REAL_TO_HEX__1284__f_i_data = __Vfunc_Error_actual__1282__f_i_32_e;
        __Vfunc_REAL_TO_HEX__1284__Vfuncout = (IData)(
                                                      VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1284__f_i_data));
        __Vfunc_Error_actual__1282__f_t_32_e = __Vfunc_REAL_TO_HEX__1284__Vfuncout;
        __Vfunc_Error_actual__1282__is_E_one_S = (0xffU 
                                                  == 
                                                  (0xffU 
                                                   & (__Vfunc_Error_actual__1282__f_t_32_s 
                                                      >> 0x17U)));
        __Vfunc_Error_actual__1282__is_M_zero_S = (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & __Vfunc_Error_actual__1282__f_t_32_s)))));
        __Vfunc_Error_actual__1282__is_INF_S = ((IData)(__Vfunc_Error_actual__1282__is_E_one_S) 
                                                & (IData)(__Vfunc_Error_actual__1282__is_M_zero_S));
        __Vfunc_Error_actual__1282__is_NAN_S = ((IData)(__Vfunc_Error_actual__1282__is_E_one_S) 
                                                & (~ (IData)(__Vfunc_Error_actual__1282__is_M_zero_S)));
        __Vfunc_Error_actual__1282__is_E_one_E = (0xffU 
                                                  == 
                                                  (0xffU 
                                                   & (__Vfunc_Error_actual__1282__f_t_32_e 
                                                      >> 0x17U)));
        __Vfunc_Error_actual__1282__is_M_zero_E = (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & __Vfunc_Error_actual__1282__f_t_32_e)))));
        __Vfunc_Error_actual__1282__is_INF_E = ((IData)(__Vfunc_Error_actual__1282__is_E_one_E) 
                                                & (IData)(__Vfunc_Error_actual__1282__is_M_zero_E));
        __Vfunc_Error_actual__1282__is_NAN_E = ((IData)(__Vfunc_Error_actual__1282__is_E_one_E) 
                                                & (~ (IData)(__Vfunc_Error_actual__1282__is_M_zero_E)));
        __Vfunc_Error_actual__1282__Vfuncout = ((IData)(__Vfunc_Error_actual__1282__is_NAN_S)
                                                 ? 
                                                ((IData)(__Vfunc_Error_actual__1282__is_NAN_E)
                                                  ? 0.0
                                                  : 100.0)
                                                 : 
                                                ((IData)(__Vfunc_Error_actual__1282__is_NAN_E)
                                                  ? 
                                                 ((IData)(__Vfunc_Error_actual__1282__is_NAN_S)
                                                   ? 0.0
                                                   : 100.0)
                                                  : 
                                                 (((IData)(__Vfunc_Error_actual__1282__is_INF_S) 
                                                   | (IData)(__Vfunc_Error_actual__1282__is_INF_E))
                                                   ? 
                                                  ((__Vfunc_Error_actual__1282__f_t_32_s 
                                                    == __Vfunc_Error_actual__1282__f_t_32_e)
                                                    ? 0.0
                                                    : 100.0)
                                                   : 
                                                  (((0.0 
                                                     == __Vfunc_Error_actual__1282__f_i_32_e) 
                                                    | (-0.0 
                                                       == __Vfunc_Error_actual__1282__f_i_32_e))
                                                    ? 
                                                   (((0.0 
                                                      == __Vfunc_Error_actual__1282__f_i_32_s) 
                                                     | (-0.0 
                                                        == __Vfunc_Error_actual__1282__f_i_32_s))
                                                     ? 0.0
                                                     : 100.0)
                                                    : 
                                                   (100.0 
                                                    * 
                                                    (([&]() {
                                        __Vfunc_ABS_value__1285__f_i_value 
                                            = (__Vfunc_Error_actual__1282__f_i_32_e 
                                               - __Vfunc_Error_actual__1282__f_i_32_s);
                                        {
                                            if ((__Vfunc_ABS_value__1285__f_i_value 
                                                 < 0.0)) {
                                                __Vfunc_ABS_value__1285__Vfuncout 
                                                    = 
                                                    (- __Vfunc_ABS_value__1285__f_i_value);
                                                goto __Vlabel209;
                                            } else {
                                                __Vfunc_ABS_value__1285__Vfuncout 
                                                    = __Vfunc_ABS_value__1285__f_i_value;
                                                goto __Vlabel209;
                                            }
                                            __Vlabel209: ;
                                        }
                                    }(), __Vfunc_ABS_value__1285__Vfuncout) 
                                                     / 
                                                     ([&]() {
                                        __Vfunc_ABS_value__1286__f_i_value 
                                            = __Vfunc_Error_actual__1282__f_i_32_e;
                                        {
                                            if ((__Vfunc_ABS_value__1286__f_i_value 
                                                 < 0.0)) {
                                                __Vfunc_ABS_value__1286__Vfuncout 
                                                    = 
                                                    (- __Vfunc_ABS_value__1286__f_i_value);
                                                goto __Vlabel210;
                                            } else {
                                                __Vfunc_ABS_value__1286__Vfuncout 
                                                    = __Vfunc_ABS_value__1286__f_i_value;
                                                goto __Vlabel210;
                                            }
                                            __Vlabel210: ;
                                        }
                                    }(), __Vfunc_ABS_value__1286__Vfuncout)))))));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_rounding_error 
            = __Vfunc_Error_actual__1282__Vfuncout;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__f_t_check 
            = (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_rounding_error 
               <= __Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_error);
        VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.24f) %s i_32_b=%x (%.24f) \t| o_32_s=%x (%.24f) \t| o_ov_flow=%b, o_un_flow=%b\n=> %s: expect=%.24f (%x), dut=%.24f (%x), rounding_error=%.8f %% (exp_error = %.8f %%)\n",0,
                     -1,&(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_type),
                     24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_i_add_sub)
                          ? 0x535542U : 0x414444U),
                     32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_i_32_a,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_a,
                     8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_i_add_sub)
                         ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_i_32_b,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_b,
                     32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_32_s,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_s,
                     1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_ov_flow),
                     1,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_un_flow,
                     32,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__f_t_check)
                          ? 0x50415353U : 0x4641494cU),
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_e,
                     32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_32_e,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_32_s,
                     32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_o_32_s,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_sr_rounding_error,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__t_error);
        if (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1275__f_t_check) {
            vlSelf->tb_FPU_unit__DOT__test_pass = ((IData)(1U) 
                                                   + vlSelf->tb_FPU_unit__DOT__test_pass);
        }
        vlSelf->tb_FPU_unit__DOT__test_count = ((IData)(1U) 
                                                + vlSelf->tb_FPU_unit__DOT__test_count);
        co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_FPU_unit.i_clk)", 
                                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                           158);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                           159);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->tb_FPU_unit__DOT__i_add_sub = 0U;
        vlSelf->tb_FPU_unit__DOT__i_32_a = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_i_fpu_b;
        vlSelf->tb_FPU_unit__DOT__i_32_b = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_i_fpu_a;
        co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_FPU_unit.i_clk)", 
                                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                           163);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                           164);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_un_flow 
            = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                        >> 3U)));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_ov_flow 
            = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
               | ((0xffffffU == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_32_s 
            = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result) 
                << 0x1fU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result) 
                              << 0x17U) | (0x7fffffU 
                                           & ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                               ? ((1U 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                                   ? 0xc00000U
                                                   : 0U)
                                               : (vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                                  ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry)))));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_i_32_b 
            = vlSelf->tb_FPU_unit__DOT__i_32_b;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_i_32_a 
            = vlSelf->tb_FPU_unit__DOT__i_32_a;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_i_add_sub 
            = vlSelf->tb_FPU_unit__DOT__i_add_sub;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_type 
            = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_type;
        __Vfunc_Error_standard__1288__Vfuncout = 1.19209289550781250e-05;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_error 
            = __Vfunc_Error_standard__1288__Vfuncout;
        __Vfunc_HEX_TO_REAL__1289__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_i_32_a;
        __Vfunc_HEX_TO_REAL__1289__temp = __Vfunc_HEX_TO_REAL__1289__f_i_data;
        __Vfunc_HEX_TO_REAL__1289__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1289__temp)));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_a 
            = __Vfunc_HEX_TO_REAL__1289__Vfuncout;
        __Vfunc_HEX_TO_REAL__1290__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_i_32_b;
        __Vfunc_HEX_TO_REAL__1290__temp = __Vfunc_HEX_TO_REAL__1290__f_i_data;
        __Vfunc_HEX_TO_REAL__1290__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1290__temp)));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_b 
            = __Vfunc_HEX_TO_REAL__1290__Vfuncout;
        __Vfunc_HEX_TO_REAL__1291__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_32_s;
        __Vfunc_HEX_TO_REAL__1291__temp = __Vfunc_HEX_TO_REAL__1291__f_i_data;
        __Vfunc_HEX_TO_REAL__1291__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1291__temp)));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_s 
            = __Vfunc_HEX_TO_REAL__1291__Vfuncout;
        __Vfunc_Cal_FPU_expected__1292__f_i_32_b = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_b;
        __Vfunc_Cal_FPU_expected__1292__f_i_32_a = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_a;
        __Vfunc_Cal_FPU_expected__1292__f_i_add_sub 
            = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_i_add_sub;
        __Vfunc_Cal_FPU_expected__1292__Vfuncout = 
            ((IData)(__Vfunc_Cal_FPU_expected__1292__f_i_add_sub)
              ? (__Vfunc_Cal_FPU_expected__1292__f_i_32_a 
                 - __Vfunc_Cal_FPU_expected__1292__f_i_32_b)
              : (__Vfunc_Cal_FPU_expected__1292__f_i_32_a 
                 + __Vfunc_Cal_FPU_expected__1292__f_i_32_b));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_e 
            = __Vfunc_Cal_FPU_expected__1292__Vfuncout;
        __Vfunc_REAL_TO_HEX__1293__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_e;
        __Vfunc_REAL_TO_HEX__1293__Vfuncout = (IData)(
                                                      VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1293__f_i_data));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_32_e 
            = __Vfunc_REAL_TO_HEX__1293__Vfuncout;
        __Vfunc_Error_actual__1294__f_i_32_e = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_e;
        __Vfunc_Error_actual__1294__f_i_32_s = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_s;
        __Vfunc_REAL_TO_HEX__1295__f_i_data = __Vfunc_Error_actual__1294__f_i_32_s;
        __Vfunc_REAL_TO_HEX__1295__Vfuncout = (IData)(
                                                      VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1295__f_i_data));
        __Vfunc_Error_actual__1294__f_t_32_s = __Vfunc_REAL_TO_HEX__1295__Vfuncout;
        __Vfunc_REAL_TO_HEX__1296__f_i_data = __Vfunc_Error_actual__1294__f_i_32_e;
        __Vfunc_REAL_TO_HEX__1296__Vfuncout = (IData)(
                                                      VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1296__f_i_data));
        __Vfunc_Error_actual__1294__f_t_32_e = __Vfunc_REAL_TO_HEX__1296__Vfuncout;
        __Vfunc_Error_actual__1294__is_E_one_S = (0xffU 
                                                  == 
                                                  (0xffU 
                                                   & (__Vfunc_Error_actual__1294__f_t_32_s 
                                                      >> 0x17U)));
        __Vfunc_Error_actual__1294__is_M_zero_S = (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & __Vfunc_Error_actual__1294__f_t_32_s)))));
        __Vfunc_Error_actual__1294__is_INF_S = ((IData)(__Vfunc_Error_actual__1294__is_E_one_S) 
                                                & (IData)(__Vfunc_Error_actual__1294__is_M_zero_S));
        __Vfunc_Error_actual__1294__is_NAN_S = ((IData)(__Vfunc_Error_actual__1294__is_E_one_S) 
                                                & (~ (IData)(__Vfunc_Error_actual__1294__is_M_zero_S)));
        __Vfunc_Error_actual__1294__is_E_one_E = (0xffU 
                                                  == 
                                                  (0xffU 
                                                   & (__Vfunc_Error_actual__1294__f_t_32_e 
                                                      >> 0x17U)));
        __Vfunc_Error_actual__1294__is_M_zero_E = (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & __Vfunc_Error_actual__1294__f_t_32_e)))));
        __Vfunc_Error_actual__1294__is_INF_E = ((IData)(__Vfunc_Error_actual__1294__is_E_one_E) 
                                                & (IData)(__Vfunc_Error_actual__1294__is_M_zero_E));
        __Vfunc_Error_actual__1294__is_NAN_E = ((IData)(__Vfunc_Error_actual__1294__is_E_one_E) 
                                                & (~ (IData)(__Vfunc_Error_actual__1294__is_M_zero_E)));
        __Vfunc_Error_actual__1294__Vfuncout = ((IData)(__Vfunc_Error_actual__1294__is_NAN_S)
                                                 ? 
                                                ((IData)(__Vfunc_Error_actual__1294__is_NAN_E)
                                                  ? 0.0
                                                  : 100.0)
                                                 : 
                                                ((IData)(__Vfunc_Error_actual__1294__is_NAN_E)
                                                  ? 
                                                 ((IData)(__Vfunc_Error_actual__1294__is_NAN_S)
                                                   ? 0.0
                                                   : 100.0)
                                                  : 
                                                 (((IData)(__Vfunc_Error_actual__1294__is_INF_S) 
                                                   | (IData)(__Vfunc_Error_actual__1294__is_INF_E))
                                                   ? 
                                                  ((__Vfunc_Error_actual__1294__f_t_32_s 
                                                    == __Vfunc_Error_actual__1294__f_t_32_e)
                                                    ? 0.0
                                                    : 100.0)
                                                   : 
                                                  (((0.0 
                                                     == __Vfunc_Error_actual__1294__f_i_32_e) 
                                                    | (-0.0 
                                                       == __Vfunc_Error_actual__1294__f_i_32_e))
                                                    ? 
                                                   (((0.0 
                                                      == __Vfunc_Error_actual__1294__f_i_32_s) 
                                                     | (-0.0 
                                                        == __Vfunc_Error_actual__1294__f_i_32_s))
                                                     ? 0.0
                                                     : 100.0)
                                                    : 
                                                   (100.0 
                                                    * 
                                                    (([&]() {
                                        __Vfunc_ABS_value__1297__f_i_value 
                                            = (__Vfunc_Error_actual__1294__f_i_32_e 
                                               - __Vfunc_Error_actual__1294__f_i_32_s);
                                        {
                                            if ((__Vfunc_ABS_value__1297__f_i_value 
                                                 < 0.0)) {
                                                __Vfunc_ABS_value__1297__Vfuncout 
                                                    = 
                                                    (- __Vfunc_ABS_value__1297__f_i_value);
                                                goto __Vlabel211;
                                            } else {
                                                __Vfunc_ABS_value__1297__Vfuncout 
                                                    = __Vfunc_ABS_value__1297__f_i_value;
                                                goto __Vlabel211;
                                            }
                                            __Vlabel211: ;
                                        }
                                    }(), __Vfunc_ABS_value__1297__Vfuncout) 
                                                     / 
                                                     ([&]() {
                                        __Vfunc_ABS_value__1298__f_i_value 
                                            = __Vfunc_Error_actual__1294__f_i_32_e;
                                        {
                                            if ((__Vfunc_ABS_value__1298__f_i_value 
                                                 < 0.0)) {
                                                __Vfunc_ABS_value__1298__Vfuncout 
                                                    = 
                                                    (- __Vfunc_ABS_value__1298__f_i_value);
                                                goto __Vlabel212;
                                            } else {
                                                __Vfunc_ABS_value__1298__Vfuncout 
                                                    = __Vfunc_ABS_value__1298__f_i_value;
                                                goto __Vlabel212;
                                            }
                                            __Vlabel212: ;
                                        }
                                    }(), __Vfunc_ABS_value__1298__Vfuncout)))))));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_rounding_error 
            = __Vfunc_Error_actual__1294__Vfuncout;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__f_t_check 
            = (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_rounding_error 
               <= __Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_error);
        VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.24f) %s i_32_b=%x (%.24f) \t| o_32_s=%x (%.24f) \t| o_ov_flow=%b, o_un_flow=%b\n=> %s: expect=%.24f (%x), dut=%.24f (%x), rounding_error=%.8f %% (exp_error = %.8f %%)\n",0,
                     -1,&(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_type),
                     24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_i_add_sub)
                          ? 0x535542U : 0x414444U),
                     32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_i_32_a,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_a,
                     8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_i_add_sub)
                         ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_i_32_b,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_b,
                     32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_32_s,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_s,
                     1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_ov_flow),
                     1,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_un_flow,
                     32,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__f_t_check)
                          ? 0x50415353U : 0x4641494cU),
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_e,
                     32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_32_e,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_32_s,
                     32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_o_32_s,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_sr_rounding_error,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__t_error);
        if (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1287__f_t_check) {
            vlSelf->tb_FPU_unit__DOT__test_pass = ((IData)(1U) 
                                                   + vlSelf->tb_FPU_unit__DOT__test_pass);
        }
        vlSelf->tb_FPU_unit__DOT__test_count = ((IData)(1U) 
                                                + vlSelf->tb_FPU_unit__DOT__test_count);
        co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_FPU_unit.i_clk)", 
                                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                           167);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                           168);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->tb_FPU_unit__DOT__i_add_sub = 1U;
        vlSelf->tb_FPU_unit__DOT__i_32_a = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_i_fpu_a;
        vlSelf->tb_FPU_unit__DOT__i_32_b = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_i_fpu_b;
        co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_FPU_unit.i_clk)", 
                                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                           172);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                           173);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_un_flow 
            = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                        >> 3U)));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_ov_flow 
            = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
               | ((0xffffffU == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_32_s 
            = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result) 
                << 0x1fU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result) 
                              << 0x17U) | (0x7fffffU 
                                           & ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                               ? ((1U 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                                   ? 0xc00000U
                                                   : 0U)
                                               : (vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                                  ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry)))));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_i_32_b 
            = vlSelf->tb_FPU_unit__DOT__i_32_b;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_i_32_a 
            = vlSelf->tb_FPU_unit__DOT__i_32_a;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_i_add_sub 
            = vlSelf->tb_FPU_unit__DOT__i_add_sub;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_type 
            = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_type;
        __Vfunc_Error_standard__1300__Vfuncout = 1.19209289550781250e-05;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_error 
            = __Vfunc_Error_standard__1300__Vfuncout;
        __Vfunc_HEX_TO_REAL__1301__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_i_32_a;
        __Vfunc_HEX_TO_REAL__1301__temp = __Vfunc_HEX_TO_REAL__1301__f_i_data;
        __Vfunc_HEX_TO_REAL__1301__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1301__temp)));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_a 
            = __Vfunc_HEX_TO_REAL__1301__Vfuncout;
        __Vfunc_HEX_TO_REAL__1302__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_i_32_b;
        __Vfunc_HEX_TO_REAL__1302__temp = __Vfunc_HEX_TO_REAL__1302__f_i_data;
        __Vfunc_HEX_TO_REAL__1302__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1302__temp)));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_b 
            = __Vfunc_HEX_TO_REAL__1302__Vfuncout;
        __Vfunc_HEX_TO_REAL__1303__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_32_s;
        __Vfunc_HEX_TO_REAL__1303__temp = __Vfunc_HEX_TO_REAL__1303__f_i_data;
        __Vfunc_HEX_TO_REAL__1303__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1303__temp)));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_s 
            = __Vfunc_HEX_TO_REAL__1303__Vfuncout;
        __Vfunc_Cal_FPU_expected__1304__f_i_32_b = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_b;
        __Vfunc_Cal_FPU_expected__1304__f_i_32_a = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_a;
        __Vfunc_Cal_FPU_expected__1304__f_i_add_sub 
            = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_i_add_sub;
        __Vfunc_Cal_FPU_expected__1304__Vfuncout = 
            ((IData)(__Vfunc_Cal_FPU_expected__1304__f_i_add_sub)
              ? (__Vfunc_Cal_FPU_expected__1304__f_i_32_a 
                 - __Vfunc_Cal_FPU_expected__1304__f_i_32_b)
              : (__Vfunc_Cal_FPU_expected__1304__f_i_32_a 
                 + __Vfunc_Cal_FPU_expected__1304__f_i_32_b));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_e 
            = __Vfunc_Cal_FPU_expected__1304__Vfuncout;
        __Vfunc_REAL_TO_HEX__1305__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_e;
        __Vfunc_REAL_TO_HEX__1305__Vfuncout = (IData)(
                                                      VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1305__f_i_data));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_32_e 
            = __Vfunc_REAL_TO_HEX__1305__Vfuncout;
        __Vfunc_Error_actual__1306__f_i_32_e = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_e;
        __Vfunc_Error_actual__1306__f_i_32_s = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_s;
        __Vfunc_REAL_TO_HEX__1307__f_i_data = __Vfunc_Error_actual__1306__f_i_32_s;
        __Vfunc_REAL_TO_HEX__1307__Vfuncout = (IData)(
                                                      VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1307__f_i_data));
        __Vfunc_Error_actual__1306__f_t_32_s = __Vfunc_REAL_TO_HEX__1307__Vfuncout;
        __Vfunc_REAL_TO_HEX__1308__f_i_data = __Vfunc_Error_actual__1306__f_i_32_e;
        __Vfunc_REAL_TO_HEX__1308__Vfuncout = (IData)(
                                                      VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1308__f_i_data));
        __Vfunc_Error_actual__1306__f_t_32_e = __Vfunc_REAL_TO_HEX__1308__Vfuncout;
        __Vfunc_Error_actual__1306__is_E_one_S = (0xffU 
                                                  == 
                                                  (0xffU 
                                                   & (__Vfunc_Error_actual__1306__f_t_32_s 
                                                      >> 0x17U)));
        __Vfunc_Error_actual__1306__is_M_zero_S = (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & __Vfunc_Error_actual__1306__f_t_32_s)))));
        __Vfunc_Error_actual__1306__is_INF_S = ((IData)(__Vfunc_Error_actual__1306__is_E_one_S) 
                                                & (IData)(__Vfunc_Error_actual__1306__is_M_zero_S));
        __Vfunc_Error_actual__1306__is_NAN_S = ((IData)(__Vfunc_Error_actual__1306__is_E_one_S) 
                                                & (~ (IData)(__Vfunc_Error_actual__1306__is_M_zero_S)));
        __Vfunc_Error_actual__1306__is_E_one_E = (0xffU 
                                                  == 
                                                  (0xffU 
                                                   & (__Vfunc_Error_actual__1306__f_t_32_e 
                                                      >> 0x17U)));
        __Vfunc_Error_actual__1306__is_M_zero_E = (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & __Vfunc_Error_actual__1306__f_t_32_e)))));
        __Vfunc_Error_actual__1306__is_INF_E = ((IData)(__Vfunc_Error_actual__1306__is_E_one_E) 
                                                & (IData)(__Vfunc_Error_actual__1306__is_M_zero_E));
        __Vfunc_Error_actual__1306__is_NAN_E = ((IData)(__Vfunc_Error_actual__1306__is_E_one_E) 
                                                & (~ (IData)(__Vfunc_Error_actual__1306__is_M_zero_E)));
        __Vfunc_Error_actual__1306__Vfuncout = ((IData)(__Vfunc_Error_actual__1306__is_NAN_S)
                                                 ? 
                                                ((IData)(__Vfunc_Error_actual__1306__is_NAN_E)
                                                  ? 0.0
                                                  : 100.0)
                                                 : 
                                                ((IData)(__Vfunc_Error_actual__1306__is_NAN_E)
                                                  ? 
                                                 ((IData)(__Vfunc_Error_actual__1306__is_NAN_S)
                                                   ? 0.0
                                                   : 100.0)
                                                  : 
                                                 (((IData)(__Vfunc_Error_actual__1306__is_INF_S) 
                                                   | (IData)(__Vfunc_Error_actual__1306__is_INF_E))
                                                   ? 
                                                  ((__Vfunc_Error_actual__1306__f_t_32_s 
                                                    == __Vfunc_Error_actual__1306__f_t_32_e)
                                                    ? 0.0
                                                    : 100.0)
                                                   : 
                                                  (((0.0 
                                                     == __Vfunc_Error_actual__1306__f_i_32_e) 
                                                    | (-0.0 
                                                       == __Vfunc_Error_actual__1306__f_i_32_e))
                                                    ? 
                                                   (((0.0 
                                                      == __Vfunc_Error_actual__1306__f_i_32_s) 
                                                     | (-0.0 
                                                        == __Vfunc_Error_actual__1306__f_i_32_s))
                                                     ? 0.0
                                                     : 100.0)
                                                    : 
                                                   (100.0 
                                                    * 
                                                    (([&]() {
                                        __Vfunc_ABS_value__1309__f_i_value 
                                            = (__Vfunc_Error_actual__1306__f_i_32_e 
                                               - __Vfunc_Error_actual__1306__f_i_32_s);
                                        {
                                            if ((__Vfunc_ABS_value__1309__f_i_value 
                                                 < 0.0)) {
                                                __Vfunc_ABS_value__1309__Vfuncout 
                                                    = 
                                                    (- __Vfunc_ABS_value__1309__f_i_value);
                                                goto __Vlabel213;
                                            } else {
                                                __Vfunc_ABS_value__1309__Vfuncout 
                                                    = __Vfunc_ABS_value__1309__f_i_value;
                                                goto __Vlabel213;
                                            }
                                            __Vlabel213: ;
                                        }
                                    }(), __Vfunc_ABS_value__1309__Vfuncout) 
                                                     / 
                                                     ([&]() {
                                        __Vfunc_ABS_value__1310__f_i_value 
                                            = __Vfunc_Error_actual__1306__f_i_32_e;
                                        {
                                            if ((__Vfunc_ABS_value__1310__f_i_value 
                                                 < 0.0)) {
                                                __Vfunc_ABS_value__1310__Vfuncout 
                                                    = 
                                                    (- __Vfunc_ABS_value__1310__f_i_value);
                                                goto __Vlabel214;
                                            } else {
                                                __Vfunc_ABS_value__1310__Vfuncout 
                                                    = __Vfunc_ABS_value__1310__f_i_value;
                                                goto __Vlabel214;
                                            }
                                            __Vlabel214: ;
                                        }
                                    }(), __Vfunc_ABS_value__1310__Vfuncout)))))));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_rounding_error 
            = __Vfunc_Error_actual__1306__Vfuncout;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__f_t_check 
            = (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_rounding_error 
               <= __Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_error);
        VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.24f) %s i_32_b=%x (%.24f) \t| o_32_s=%x (%.24f) \t| o_ov_flow=%b, o_un_flow=%b\n=> %s: expect=%.24f (%x), dut=%.24f (%x), rounding_error=%.8f %% (exp_error = %.8f %%)\n",0,
                     -1,&(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_type),
                     24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_i_add_sub)
                          ? 0x535542U : 0x414444U),
                     32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_i_32_a,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_a,
                     8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_i_add_sub)
                         ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_i_32_b,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_b,
                     32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_32_s,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_s,
                     1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_ov_flow),
                     1,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_un_flow,
                     32,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__f_t_check)
                          ? 0x50415353U : 0x4641494cU),
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_e,
                     32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_32_e,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_32_s,
                     32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_o_32_s,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_sr_rounding_error,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__t_error);
        if (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1299__f_t_check) {
            vlSelf->tb_FPU_unit__DOT__test_pass = ((IData)(1U) 
                                                   + vlSelf->tb_FPU_unit__DOT__test_pass);
        }
        vlSelf->tb_FPU_unit__DOT__test_count = ((IData)(1U) 
                                                + vlSelf->tb_FPU_unit__DOT__test_count);
        co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_FPU_unit.i_clk)", 
                                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                           176);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                           177);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->tb_FPU_unit__DOT__i_add_sub = 1U;
        vlSelf->tb_FPU_unit__DOT__i_32_a = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_i_fpu_b;
        vlSelf->tb_FPU_unit__DOT__i_32_b = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_i_fpu_a;
        co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_FPU_unit.i_clk)", 
                                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                           181);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                           182);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_un_flow 
            = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                        >> 3U)));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_ov_flow 
            = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
               | ((0xffffffU == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_32_s 
            = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result) 
                << 0x1fU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result) 
                              << 0x17U) | (0x7fffffU 
                                           & ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                               ? ((1U 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man))
                                                   ? 0xc00000U
                                                   : 0U)
                                               : (vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                                  ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry)))));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_i_32_b 
            = vlSelf->tb_FPU_unit__DOT__i_32_b;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_i_32_a 
            = vlSelf->tb_FPU_unit__DOT__i_32_a;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_i_add_sub 
            = vlSelf->tb_FPU_unit__DOT__i_add_sub;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_type 
            = __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__1274__t_type;
        __Vfunc_Error_standard__1312__Vfuncout = 1.19209289550781250e-05;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_error 
            = __Vfunc_Error_standard__1312__Vfuncout;
        __Vfunc_HEX_TO_REAL__1313__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_i_32_a;
        __Vfunc_HEX_TO_REAL__1313__temp = __Vfunc_HEX_TO_REAL__1313__f_i_data;
        __Vfunc_HEX_TO_REAL__1313__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1313__temp)));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_a 
            = __Vfunc_HEX_TO_REAL__1313__Vfuncout;
        __Vfunc_HEX_TO_REAL__1314__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_i_32_b;
        __Vfunc_HEX_TO_REAL__1314__temp = __Vfunc_HEX_TO_REAL__1314__f_i_data;
        __Vfunc_HEX_TO_REAL__1314__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1314__temp)));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_b 
            = __Vfunc_HEX_TO_REAL__1314__Vfuncout;
        __Vfunc_HEX_TO_REAL__1315__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_32_s;
        __Vfunc_HEX_TO_REAL__1315__temp = __Vfunc_HEX_TO_REAL__1315__f_i_data;
        __Vfunc_HEX_TO_REAL__1315__Vfuncout = VL_CVT_D_Q((QData)((IData)(__Vfunc_HEX_TO_REAL__1315__temp)));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_s 
            = __Vfunc_HEX_TO_REAL__1315__Vfuncout;
        __Vfunc_Cal_FPU_expected__1316__f_i_32_b = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_b;
        __Vfunc_Cal_FPU_expected__1316__f_i_32_a = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_a;
        __Vfunc_Cal_FPU_expected__1316__f_i_add_sub 
            = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_i_add_sub;
        __Vfunc_Cal_FPU_expected__1316__Vfuncout = 
            ((IData)(__Vfunc_Cal_FPU_expected__1316__f_i_add_sub)
              ? (__Vfunc_Cal_FPU_expected__1316__f_i_32_a 
                 - __Vfunc_Cal_FPU_expected__1316__f_i_32_b)
              : (__Vfunc_Cal_FPU_expected__1316__f_i_32_a 
                 + __Vfunc_Cal_FPU_expected__1316__f_i_32_b));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_e 
            = __Vfunc_Cal_FPU_expected__1316__Vfuncout;
        __Vfunc_REAL_TO_HEX__1317__f_i_data = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_e;
        __Vfunc_REAL_TO_HEX__1317__Vfuncout = (IData)(
                                                      VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1317__f_i_data));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_32_e 
            = __Vfunc_REAL_TO_HEX__1317__Vfuncout;
        __Vfunc_Error_actual__1318__f_i_32_e = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_e;
        __Vfunc_Error_actual__1318__f_i_32_s = __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_s;
        __Vfunc_REAL_TO_HEX__1319__f_i_data = __Vfunc_Error_actual__1318__f_i_32_s;
        __Vfunc_REAL_TO_HEX__1319__Vfuncout = (IData)(
                                                      VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1319__f_i_data));
        __Vfunc_Error_actual__1318__f_t_32_s = __Vfunc_REAL_TO_HEX__1319__Vfuncout;
        __Vfunc_REAL_TO_HEX__1320__f_i_data = __Vfunc_Error_actual__1318__f_i_32_e;
        __Vfunc_REAL_TO_HEX__1320__Vfuncout = (IData)(
                                                      VL_CVT_Q_D(__Vfunc_REAL_TO_HEX__1320__f_i_data));
        __Vfunc_Error_actual__1318__f_t_32_e = __Vfunc_REAL_TO_HEX__1320__Vfuncout;
        __Vfunc_Error_actual__1318__is_E_one_S = (0xffU 
                                                  == 
                                                  (0xffU 
                                                   & (__Vfunc_Error_actual__1318__f_t_32_s 
                                                      >> 0x17U)));
        __Vfunc_Error_actual__1318__is_M_zero_S = (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & __Vfunc_Error_actual__1318__f_t_32_s)))));
        __Vfunc_Error_actual__1318__is_INF_S = ((IData)(__Vfunc_Error_actual__1318__is_E_one_S) 
                                                & (IData)(__Vfunc_Error_actual__1318__is_M_zero_S));
        __Vfunc_Error_actual__1318__is_NAN_S = ((IData)(__Vfunc_Error_actual__1318__is_E_one_S) 
                                                & (~ (IData)(__Vfunc_Error_actual__1318__is_M_zero_S)));
        __Vfunc_Error_actual__1318__is_E_one_E = (0xffU 
                                                  == 
                                                  (0xffU 
                                                   & (__Vfunc_Error_actual__1318__f_t_32_e 
                                                      >> 0x17U)));
        __Vfunc_Error_actual__1318__is_M_zero_E = (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & __Vfunc_Error_actual__1318__f_t_32_e)))));
        __Vfunc_Error_actual__1318__is_INF_E = ((IData)(__Vfunc_Error_actual__1318__is_E_one_E) 
                                                & (IData)(__Vfunc_Error_actual__1318__is_M_zero_E));
        __Vfunc_Error_actual__1318__is_NAN_E = ((IData)(__Vfunc_Error_actual__1318__is_E_one_E) 
                                                & (~ (IData)(__Vfunc_Error_actual__1318__is_M_zero_E)));
        __Vfunc_Error_actual__1318__Vfuncout = ((IData)(__Vfunc_Error_actual__1318__is_NAN_S)
                                                 ? 
                                                ((IData)(__Vfunc_Error_actual__1318__is_NAN_E)
                                                  ? 0.0
                                                  : 100.0)
                                                 : 
                                                ((IData)(__Vfunc_Error_actual__1318__is_NAN_E)
                                                  ? 
                                                 ((IData)(__Vfunc_Error_actual__1318__is_NAN_S)
                                                   ? 0.0
                                                   : 100.0)
                                                  : 
                                                 (((IData)(__Vfunc_Error_actual__1318__is_INF_S) 
                                                   | (IData)(__Vfunc_Error_actual__1318__is_INF_E))
                                                   ? 
                                                  ((__Vfunc_Error_actual__1318__f_t_32_s 
                                                    == __Vfunc_Error_actual__1318__f_t_32_e)
                                                    ? 0.0
                                                    : 100.0)
                                                   : 
                                                  (((0.0 
                                                     == __Vfunc_Error_actual__1318__f_i_32_e) 
                                                    | (-0.0 
                                                       == __Vfunc_Error_actual__1318__f_i_32_e))
                                                    ? 
                                                   (((0.0 
                                                      == __Vfunc_Error_actual__1318__f_i_32_s) 
                                                     | (-0.0 
                                                        == __Vfunc_Error_actual__1318__f_i_32_s))
                                                     ? 0.0
                                                     : 100.0)
                                                    : 
                                                   (100.0 
                                                    * 
                                                    (([&]() {
                                        __Vfunc_ABS_value__1321__f_i_value 
                                            = (__Vfunc_Error_actual__1318__f_i_32_e 
                                               - __Vfunc_Error_actual__1318__f_i_32_s);
                                        {
                                            if ((__Vfunc_ABS_value__1321__f_i_value 
                                                 < 0.0)) {
                                                __Vfunc_ABS_value__1321__Vfuncout 
                                                    = 
                                                    (- __Vfunc_ABS_value__1321__f_i_value);
                                                goto __Vlabel215;
                                            } else {
                                                __Vfunc_ABS_value__1321__Vfuncout 
                                                    = __Vfunc_ABS_value__1321__f_i_value;
                                                goto __Vlabel215;
                                            }
                                            __Vlabel215: ;
                                        }
                                    }(), __Vfunc_ABS_value__1321__Vfuncout) 
                                                     / 
                                                     ([&]() {
                                        __Vfunc_ABS_value__1322__f_i_value 
                                            = __Vfunc_Error_actual__1318__f_i_32_e;
                                        {
                                            if ((__Vfunc_ABS_value__1322__f_i_value 
                                                 < 0.0)) {
                                                __Vfunc_ABS_value__1322__Vfuncout 
                                                    = 
                                                    (- __Vfunc_ABS_value__1322__f_i_value);
                                                goto __Vlabel216;
                                            } else {
                                                __Vfunc_ABS_value__1322__Vfuncout 
                                                    = __Vfunc_ABS_value__1322__f_i_value;
                                                goto __Vlabel216;
                                            }
                                            __Vlabel216: ;
                                        }
                                    }(), __Vfunc_ABS_value__1322__Vfuncout)))))));
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_rounding_error 
            = __Vfunc_Error_actual__1318__Vfuncout;
        __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__f_t_check 
            = (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_rounding_error 
               <= __Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_error);
        VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.24f) %s i_32_b=%x (%.24f) \t| o_32_s=%x (%.24f) \t| o_ov_flow=%b, o_un_flow=%b\n=> %s: expect=%.24f (%x), dut=%.24f (%x), rounding_error=%.8f %% (exp_error = %.8f %%)\n",0,
                     -1,&(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_type),
                     24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_i_add_sub)
                          ? 0x535542U : 0x414444U),
                     32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_i_32_a,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_a,
                     8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_i_add_sub)
                         ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_i_32_b,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_b,
                     32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_32_s,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_s,
                     1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_ov_flow),
                     1,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_un_flow,
                     32,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__f_t_check)
                          ? 0x50415353U : 0x4641494cU),
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_e,
                     32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_32_e,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_32_s,
                     32,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_o_32_s,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_sr_rounding_error,
                     64,__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__t_error);
        if (__Vtask_tb_FPU_unit__DOT__Display_result_Error__1311__f_t_check) {
            vlSelf->tb_FPU_unit__DOT__test_pass = ((IData)(1U) 
                                                   + vlSelf->tb_FPU_unit__DOT__test_pass);
        }
        vlSelf->tb_FPU_unit__DOT__test_count = ((IData)(1U) 
                                                + vlSelf->tb_FPU_unit__DOT__test_count);
        co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_FPU_unit.i_clk)", 
                                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                                           227);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                           228);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->tb_FPU_unit__DOT__w_i_addr = (0x7ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->tb_FPU_unit__DOT__w_i_addr)));
        tb_FPU_unit__DOT____Vrepeat0 = (tb_FPU_unit__DOT____Vrepeat0 
                                        - (IData)(1U));
    }
    __Vtask_Display_SummaryResult__1323__t_test_pass 
        = vlSelf->tb_FPU_unit__DOT__test_pass;
    __Vtask_Display_SummaryResult__1323__t_test_count 
        = vlSelf->tb_FPU_unit__DOT__test_count;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "../Topmodule/../Topmodule/lib/display.svh", 
                                       6);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("\n==================================\n========== TEST SUMMARY ==========\nTotal test cases: %6d\nPassed          : %6d\nFailed          : %6d\nPass rate       : %0.2f%%\n==================================\n\n",0,
                 32,__Vtask_Display_SummaryResult__1323__t_test_count,
                 32,__Vtask_Display_SummaryResult__1323__t_test_pass,
                 32,(__Vtask_Display_SummaryResult__1323__t_test_count 
                     - __Vtask_Display_SummaryResult__1323__t_test_pass),
                 64,((100.0 * VL_ISTOR_D_I(32, __Vtask_Display_SummaryResult__1323__t_test_pass)) 
                     / VL_ISTOR_D_I(32, __Vtask_Display_SummaryResult__1323__t_test_count)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "../Topmodule/../Topmodule/lib/display.svh", 
                                       14);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "../Topmodule/../Topmodule/tb_FPU_unit.sv", 
                                       233);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_FINISH_MT("../Topmodule/../Topmodule/tb_FPU_unit.sv", 234, "");
    vlSelf->__Vm_traceActivity[3U] = 1U;
}

void Vtb_FPU_unit___024root___ico_sequent__TOP__0(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__0(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__1(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__2(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__3(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__4(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__5(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__6(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__7(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__8(Vtb_FPU_unit___024root* vlSelf);

void Vtb_FPU_unit___024root___eval_ico(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x81ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x41ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x11ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((9ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((5ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((3ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((0xfdULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__7(vlSelf);
    }
    if ((0x103ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___ico_sequent__TOP__0(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->o_pos_one = (((IData)(((0U == (0xcU & (IData)(vlSelf->i_data))) 
                                   & ((IData)(vlSelf->i_data) 
                                      | ((IData)(vlSelf->i_data) 
                                         >> 1U)))) 
                          << 1U) | (1U & ((~ ((IData)(vlSelf->i_data) 
                                              >> 3U)) 
                                          & (((IData)(vlSelf->i_data) 
                                              >> 2U) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->i_data))))))));
    vlSelf->o_zero_flag = (1U & (~ (IData)((0U != (IData)(vlSelf->i_data)))));
    vlSelf->o_less = (1U & (((~ (IData)((0U != (IData)(vlSelf->COMP_2bit__02Ei_data_a)))) 
                             & (IData)(vlSelf->COMP_2bit__02Ei_data_b)) 
                            | (((~ (IData)(vlSelf->COMP_2bit__02Ei_data_a)) 
                                & (IData)((3U == (IData)(vlSelf->COMP_2bit__02Ei_data_b)))) 
                               | ((~ ((IData)(vlSelf->COMP_2bit__02Ei_data_a) 
                                      >> 1U)) & ((IData)(vlSelf->COMP_2bit__02Ei_data_b) 
                                                 >> 1U)))));
    vlSelf->o_equal = (1U & (~ (IData)((0U != ((IData)(vlSelf->COMP_2bit__02Ei_data_a) 
                                               ^ (IData)(vlSelf->COMP_2bit__02Ei_data_b))))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & (vlSelf->CLA_24bit__02Ei_data_a & vlSelf->CLA_24bit__02Ei_data_b));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    & vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 4U));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    & vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 8U));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    & vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 0xcU));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    & vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 0x10U));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    & vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 0x14U));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & (vlSelf->CLA_24bit__02Ei_data_a ^ vlSelf->CLA_24bit__02Ei_data_b));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    ^ vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 4U));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    ^ vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 8U));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    ^ vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 0xcU));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    ^ vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 0x10U));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    ^ vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 0x14U));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->CLA_24bit__DOT__w_p = (((IData)((0xfU == (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                    << 5U) | (((IData)(
                                                       (0xfU 
                                                        == (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                               << 4U) 
                                              | (((IData)(
                                                          (0xfU 
                                                           == (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                                  << 3U) 
                                                 | (((IData)(
                                                             (0xfU 
                                                              == (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                                     << 2U) 
                                                    | (((IData)(
                                                                (0xfU 
                                                                 == (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                                        << 1U) 
                                                       | (0xfU 
                                                          == (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___ico_comb__TOP__0(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___ico_comb__TOP__0\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(vlSelf->CLA_24bit__DOT__w_c)))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___ico_comb__TOP__1(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___ico_comb__TOP__1\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->CLA_24bit__DOT__w_c) 
                                                            >> 1U)))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___ico_comb__TOP__2(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___ico_comb__TOP__2\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->CLA_24bit__DOT__w_c) 
                                                            >> 2U)))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___ico_comb__TOP__3(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___ico_comb__TOP__3\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->CLA_24bit__DOT__w_c) 
                                                            >> 3U)))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___ico_comb__TOP__4(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___ico_comb__TOP__4\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->CLA_24bit__DOT__w_c) 
                                                            >> 4U)))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___ico_comb__TOP__5(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___ico_comb__TOP__5\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->CLA_24bit__DOT__w_c) 
                                                            >> 5U)))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___ico_comb__TOP__6(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___ico_comb__TOP__6\n"); );
    // Body
    vlSelf->CLA_24bit__DOT__w_g = ((0x20U & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                              << 2U) 
                                             | (((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                   << 2U) 
                                                  & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                     << 3U)) 
                                                 | (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                     << 5U) 
                                                    & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                       << 4U))) 
                                                | ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                     << 5U) 
                                                    & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                       << 4U)) 
                                                   & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                       | ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                          & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                      << 5U))))) 
                                   | ((0x10U & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                 << 1U) 
                                                | (((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                      << 1U) 
                                                     & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                        << 4U) 
                                                       & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                          << 3U))) 
                                                   | ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                        << 4U) 
                                                       & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                          << 3U)) 
                                                      & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                          | ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                             & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                         << 4U))))) 
                                      | ((8U & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                | ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                     & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                        << 1U)) 
                                                    | (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                        << 3U) 
                                                       & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                          << 2U))) 
                                                   | ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                        << 3U) 
                                                       & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                          << 2U)) 
                                                      & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                          | ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                             & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                         << 3U))))) 
                                         | ((4U & (
                                                   (0x7ffffffcU 
                                                    & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                       >> 1U)) 
                                                   | (((0x7ffffffcU 
                                                        & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            >> 1U) 
                                                           & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g))) 
                                                       | (0xfffffffcU 
                                                          & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                              << 2U) 
                                                             & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                                << 1U)))) 
                                                      | (0xfffffffcU 
                                                         & ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                              << 2U) 
                                                             & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                                << 1U)) 
                                                            & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                                | ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                                   & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                               << 2U)))))) 
                                            | ((2U 
                                                & ((0x3ffffffeU 
                                                    & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                       >> 2U)) 
                                                   | (((0x3ffffffeU 
                                                        & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            >> 2U) 
                                                           & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              >> 1U))) 
                                                       | (0xfffffffeU 
                                                          & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)))) 
                                                      | (0xfffffffeU 
                                                         & ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)) 
                                                            & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                                | ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                                   & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                               << 1U)))))) 
                                               | (1U 
                                                  & (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                      >> 3U) 
                                                     | (((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                           >> 3U) 
                                                          & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                             >> 2U)) 
                                                         | ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                            & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                               >> 1U))) 
                                                        | (((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                            & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                               >> 1U)) 
                                                           & ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              | ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                                 & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))))))))))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___ico_comb__TOP__7(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___ico_comb__TOP__7\n"); );
    // Body
    vlSelf->o_sum = ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                       ^ (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                      << 0x14U) | ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                     ^ (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                    << 0x10U) | ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                   ^ (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                                  << 0xcU) 
                                                 | ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                      ^ (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                                     << 8U) 
                                                    | ((((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                         ^ (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                                        << 4U) 
                                                       | ((IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                          ^ (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)))))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___ico_comb__TOP__8(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___ico_comb__TOP__8\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x40U & (((0xffffffc0U & ((((((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                                << 1U) 
                                               | (((IData)(vlSelf->CLA_24bit__DOT__w_p) 
                                                   << 1U) 
                                                  & ((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                                     << 2U))) 
                                              | (((IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & (IData)(vlSelf->CLA_24bit__DOT__w_p)))) 
                                                  << 6U) 
                                                 & ((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                                    << 3U))) 
                                             | (((IData)(
                                                         (0x38U 
                                                          == 
                                                          (0x38U 
                                                           & (IData)(vlSelf->CLA_24bit__DOT__w_p)))) 
                                                 << 6U) 
                                                & ((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                                   << 4U))) 
                                            | (((IData)(
                                                        (0x3cU 
                                                         == 
                                                         (0x3cU 
                                                          & (IData)(vlSelf->CLA_24bit__DOT__w_p)))) 
                                                << 6U) 
                                               & ((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                                  << 5U)))) 
                            | (((IData)((0x3eU == (0x3eU 
                                                   & (IData)(vlSelf->CLA_24bit__DOT__w_p)))) 
                                & (IData)(vlSelf->CLA_24bit__DOT__w_g)) 
                               << 6U)) | (((IData)(
                                                   (0x3fU 
                                                    == (IData)(vlSelf->CLA_24bit__DOT__w_p))) 
                                           & (IData)(vlSelf->CLA_24bit__DOT__w_c)) 
                                          << 6U))) 
                 | ((0x20U & (((0xffffffe0U & (((((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                                  << 1U) 
                                                 | (((IData)(vlSelf->CLA_24bit__DOT__w_p) 
                                                     << 1U) 
                                                    & ((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                                       << 2U))) 
                                                | (((IData)(
                                                            (0x18U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->CLA_24bit__DOT__w_p)))) 
                                                    << 5U) 
                                                   & ((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                                      << 3U))) 
                                               | (((IData)(
                                                           (0x1cU 
                                                            == 
                                                            (0x1cU 
                                                             & (IData)(vlSelf->CLA_24bit__DOT__w_p)))) 
                                                   << 5U) 
                                                  & ((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                                     << 4U)))) 
                               | (((IData)((0x1eU == 
                                            (0x1eU 
                                             & (IData)(vlSelf->CLA_24bit__DOT__w_p)))) 
                                   & (IData)(vlSelf->CLA_24bit__DOT__w_g)) 
                                  << 5U)) | (((IData)(
                                                      (0x1fU 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->CLA_24bit__DOT__w_p)))) 
                                              & (IData)(vlSelf->CLA_24bit__DOT__w_c)) 
                                             << 5U))) 
                    | ((0x10U & (((0xfffffff0U & ((
                                                   ((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->CLA_24bit__DOT__w_p) 
                                                       << 1U) 
                                                      & ((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                                         << 2U))) 
                                                  | (((IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->CLA_24bit__DOT__w_p)))) 
                                                      << 4U) 
                                                     & ((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                                        << 3U)))) 
                                  | (((IData)((0xeU 
                                               == (0xeU 
                                                   & (IData)(vlSelf->CLA_24bit__DOT__w_p)))) 
                                      & (IData)(vlSelf->CLA_24bit__DOT__w_g)) 
                                     << 4U)) | (((IData)(
                                                         (0xfU 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->CLA_24bit__DOT__w_p)))) 
                                                 & (IData)(vlSelf->CLA_24bit__DOT__w_c)) 
                                                << 4U))) 
                       | ((8U & (((0xfffffff8U & (((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->CLA_24bit__DOT__w_p) 
                                                      << 1U) 
                                                     & ((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                                        << 2U)))) 
                                  | (((IData)((6U == 
                                               (6U 
                                                & (IData)(vlSelf->CLA_24bit__DOT__w_p)))) 
                                      & (IData)(vlSelf->CLA_24bit__DOT__w_g)) 
                                     << 3U)) | (((IData)(
                                                         (7U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->CLA_24bit__DOT__w_p)))) 
                                                 & (IData)(vlSelf->CLA_24bit__DOT__w_c)) 
                                                << 3U))) 
                          | ((4U & ((((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                      << 1U) | (((IData)(vlSelf->CLA_24bit__DOT__w_p) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                                   << 2U))) 
                                    | ((((IData)(vlSelf->CLA_24bit__DOT__w_p) 
                                         << 1U) & ((IData)(vlSelf->CLA_24bit__DOT__w_p) 
                                                   << 2U)) 
                                       & ((IData)(vlSelf->CLA_24bit__DOT__w_c) 
                                          << 2U)))) 
                             | ((2U & (((IData)(vlSelf->CLA_24bit__DOT__w_g) 
                                        | ((IData)(vlSelf->CLA_24bit__DOT__w_p) 
                                           & (IData)(vlSelf->CLA_24bit__DOT__w_c))) 
                                       << 1U)) | (IData)(vlSelf->i_carry)))))));
    vlSelf->CLA_24bit__DOT__w_c = __Vtemp_1;
    vlSelf->o_carry = (1U & ((IData)(vlSelf->CLA_24bit__DOT__w_c) 
                             >> 6U));
}

void Vtb_FPU_unit___024root___eval_triggers__ico(Vtb_FPU_unit___024root* vlSelf);

bool Vtb_FPU_unit___024root___eval_phase__ico(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb_FPU_unit___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtb_FPU_unit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtb_FPU_unit___024root___act_comb__TOP__0(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_sequent__TOP__0(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__1(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__2(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__3(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__4(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__7(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__8(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__9(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__10(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__11(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__12(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__13(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__14(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__15(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__16(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__17(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__18(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__19(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__20(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__21(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__22(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__23(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__24(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__25(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__26(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__27(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__28(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__29(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__30(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__31(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__32(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__33(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__34(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__35(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__36(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__37(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__38(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__39(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__40(Vtb_FPU_unit___024root* vlSelf);

void Vtb_FPU_unit___024root___eval_act(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_act\n"); );
    // Body
    if ((0x1c00000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0x20000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((0x1c00000200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x1c00020000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x1c00100000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x1c00040000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x7eULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__7(vlSelf);
    }
    if ((0x81ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0x1c00020400ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0x1c10020000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x1c00020800ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__9(vlSelf);
    }
    if ((0x1c08020000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__10(vlSelf);
    }
    if ((0x1c00022000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__11(vlSelf);
    }
    if ((0x1c02020000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__12(vlSelf);
    }
    if ((0x1c00021000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x1c04020000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__14(vlSelf);
    }
    if ((0x1c00028000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0x1c00820000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__16(vlSelf);
    }
    if ((0x1c00024000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x1c01020000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__18(vlSelf);
    }
    if ((0x1c00030000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x1c00220000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__20(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x1c00420000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__21(vlSelf);
    }
    if ((0x1c00180000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__22(vlSelf);
    }
    if ((0x1c00060000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__23(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x1c0c020000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__24(vlSelf);
    }
    if ((0x1c03020000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__25(vlSelf);
    }
    if ((0x1c00220200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__26(vlSelf);
    }
    if ((0x1c1fa20000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__27(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x1c00a20000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__28(vlSelf);
    }
    if ((0x1c00420200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__29(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x1d1fa20200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__30(vlSelf);
    }
    if ((0x1c03a20000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__31(vlSelf);
    }
    if ((0x1c0fa20000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__32(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0x1d1fa20200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__33(vlSelf);
    }
    if ((0x1d0fa20000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__34(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0x1c0fa20200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__35(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((0x1f1fa20200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__36(vlSelf);
    }
    if ((0x1c8fa20200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__37(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((0x1c2fa20200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__38(vlSelf);
    }
    if ((0x1ccfa20200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__39(vlSelf);
    }
    if ((0x1d3fa20300ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__40(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__0(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_2;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_2 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_9;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_9 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_10;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_10 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_11;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_11 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_12;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_12 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_13;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_13 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_14;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_14 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_15;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_15 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_16;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_16 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_2;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_2 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_9;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_9 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_10;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_10 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_11;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_11 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_12;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_12 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_13;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_13 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_14;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_14 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_15;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_15 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_16;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_16 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT____VdfgRegularize_h455b4bc6_0_0;
    tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT____VdfgRegularize_h455b4bc6_0_0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_5;
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_5 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_6;
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_6 = 0;
    // Body
    vlSelf->tb_FPU_unit__DOT__w_o_data_rom_a = vlSelf->tb_FPU_unit__DOT__rom_A
        [vlSelf->tb_FPU_unit__DOT__w_i_addr];
    vlSelf->tb_FPU_unit__DOT__w_o_data_rom_b = vlSelf->tb_FPU_unit__DOT__rom_B
        [vlSelf->tb_FPU_unit__DOT__w_i_addr];
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_5 
        = (IData)((0xff800000U == (0xff800000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_6 
        = (IData)((0xff800000U == (0xff800000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_2 
        = (IData)((0x7f800000U == (0xff800000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_3 
        = (IData)((0x7f800000U == (0xff800000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT____VdfgRegularize_h455b4bc6_0_0 
        = ((vlSelf->tb_FPU_unit__DOT__i_32_a ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
           >> 0x1fU);
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_11 
        = (IData)((0x1800000U == (0x1800000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_9 
        = (IData)((0U == (0x5000000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_14 
        = (IData)((0x2800000U == (0x2800000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_13 
        = (IData)((0x3000000U == (0x3000000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_10 
        = (IData)((0U == (0x3000000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_12 
        = (IData)((0x6000000U == (0x6000000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_11 
        = (IData)((0x18000000U == (0x18000000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_9 
        = (IData)((0U == (0x50000000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_14 
        = (IData)((0x28000000U == (0x28000000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_13 
        = (IData)((0x30000000U == (0x30000000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_10 
        = (IData)((0U == (0x30000000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_12 
        = (IData)((0x60000000U == (0x60000000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_15 
        = (1U & ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                     >> 0x17U)) & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                   >> 0x1aU)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_15 
        = (1U & ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                     >> 0x1bU)) & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                   >> 0x1eU)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_2 
        = (IData)((0U == (0x6000000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_2 
        = (IData)((0U == (0x60000000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man 
        = ((((0xffU == (0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                 >> 0x17U))) | (0xffU 
                                                == 
                                                (0xffU 
                                                 & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                    >> 0x17U)))) 
            << 1U) | ((IData)(((0x7f800000U == (0x7f800000U 
                                                & vlSelf->tb_FPU_unit__DOT__i_32_b)) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                      | ((IData)(((0x7f800000U == (0x7f800000U 
                                                   & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                         | (((~ (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub)) 
                             & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_3) 
                                & (IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_5))) 
                            | (((~ (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub)) 
                                & ((IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_6) 
                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_2))) 
                               | ((IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub) 
                                  & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_3) 
                                      & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_2)) 
                                     | ((IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_6) 
                                        & (IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_5)))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub)
                  ? (~ (IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT____VdfgRegularize_h455b4bc6_0_0))
                  : (IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT____VdfgRegularize_h455b4bc6_0_0)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_16 
        = ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a >> 0x18U)) 
           & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_2));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_16 
        = ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a >> 0x1cU)) 
           & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_2));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__w_less_low 
        = (1U & (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_16) 
                  & ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                         >> 0x17U)) & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                       >> 0x17U))) 
                 | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_16) 
                     & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                        >> 0x18U)) | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_2) 
                                       & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                          >> 0x19U)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                              >> 0x1aU)) 
                                          & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                             >> 0x1aU)) 
                                         | (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                 >> 0x17U)) 
                                             & ((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_2) 
                                                & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                            | (((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                  >> 0x17U)) 
                                                & ((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_9) 
                                                   & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_14))) 
                                               | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_9) 
                                                   & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_13)) 
                                                  | ((IData)(
                                                             (((0U 
                                                                == 
                                                                (0x4800000U 
                                                                 & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                                                               & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                                  >> 0x19U)) 
                                                              & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                                     | (((~ 
                                                          (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                           >> 0x17U)) 
                                                         & ((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_10) 
                                                            & (IData)(
                                                                      (0x4800000U 
                                                                       == 
                                                                       (0x4800000U 
                                                                        & vlSelf->tb_FPU_unit__DOT__i_32_b))))) 
                                                        | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_10) 
                                                            & (IData)(
                                                                      (0x5000000U 
                                                                       == 
                                                                       (0x5000000U 
                                                                        & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                                           | (((~ 
                                                                (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                                 >> 0x19U)) 
                                                               & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_12)) 
                                                              | (((~ 
                                                                   (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                                    >> 0x19U)) 
                                                                  & ((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_15) 
                                                                     & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                                                 | (((~ 
                                                                      (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                                       >> 0x18U)) 
                                                                     & ((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_15) 
                                                                        & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_14))) 
                                                                    | (((~ 
                                                                         (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                                          >> 0x18U)) 
                                                                        & ((vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                                            >> 0x1aU) 
                                                                           & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_13))) 
                                                                       | ((~ 
                                                                           (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                                            >> 0x17U)) 
                                                                          & ((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_12) 
                                                                             & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgRegularize_h8e9dd03d_0_11))))))))))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__w_less_high 
        = (1U & (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_16) 
                  & ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                         >> 0x1bU)) & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                       >> 0x1bU))) 
                 | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_16) 
                     & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                        >> 0x1cU)) | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_2) 
                                       & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                          >> 0x1dU)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                              >> 0x1eU)) 
                                          & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                             >> 0x1eU)) 
                                         | (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                 >> 0x1bU)) 
                                             & ((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_2) 
                                                & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                            | (((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                  >> 0x1bU)) 
                                                & ((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_9) 
                                                   & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_14))) 
                                               | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_9) 
                                                   & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_13)) 
                                                  | ((IData)(
                                                             (((0U 
                                                                == 
                                                                (0x48000000U 
                                                                 & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                                                               & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                                  >> 0x1dU)) 
                                                              & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                                     | (((~ 
                                                          (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                           >> 0x1bU)) 
                                                         & ((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_10) 
                                                            & (IData)(
                                                                      (0x48000000U 
                                                                       == 
                                                                       (0x48000000U 
                                                                        & vlSelf->tb_FPU_unit__DOT__i_32_b))))) 
                                                        | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_10) 
                                                            & (IData)(
                                                                      (0x50000000U 
                                                                       == 
                                                                       (0x50000000U 
                                                                        & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                                           | (((~ 
                                                                (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                                 >> 0x1dU)) 
                                                               & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_12)) 
                                                              | (((~ 
                                                                   (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                                    >> 0x1dU)) 
                                                                  & ((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_15) 
                                                                     & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                                                 | (((~ 
                                                                      (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                                       >> 0x1cU)) 
                                                                     & ((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_15) 
                                                                        & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_14))) 
                                                                    | (((~ 
                                                                         (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                                          >> 0x1cU)) 
                                                                        & ((vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                                            >> 0x1eU) 
                                                                           & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_13))) 
                                                                       | ((~ 
                                                                           (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                                            >> 0x1bU)) 
                                                                          & ((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_12) 
                                                                             & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgRegularize_h8e9dd03d_0_11))))))))))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__w_less_high) 
           | ((~ (IData)((0U != (0xfU & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                          ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                         >> 0x1bU))))) 
              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__w_less_low)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[0U] 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare)
             ? (0x800000U | (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_a))
             : (0x800000U | (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_b))) 
           << 4U);
    if (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare) {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min 
            = (0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                        >> 0x17U));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max 
            = (0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                        >> 0x17U));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
            = (0x800000U | (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_b));
    } else {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min 
            = (0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                        >> 0x17U));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max 
            = (0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                        >> 0x17U));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
            = (0x800000U | (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_a));
    }
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (0xfU & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                    >> 4U) & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min) 
                                 >> 4U))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g 
        = (0xfU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                   & (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                    >> 4U) ^ (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min) 
                                 >> 4U))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p 
        = (0xfU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                   ^ (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_9 
        = (IData)((0U == (0xaU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_10 
        = (IData)((0U == (6U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_9 
        = (IData)((0U == (0xa0U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_10 
        = (IData)((0U == (0x60U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_9 
        = (IData)((0U == (0xa00U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_10 
        = (IData)((0U == (0x600U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_9 
        = (IData)((0U == (0xa000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_10 
        = (IData)((0U == (0x6000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_9 
        = (IData)((0U == (0xa0000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_10 
        = (IData)((0U == (0x60000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_9 
        = (IData)((0U == (0xa00000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_10 
        = (IData)((0U == (0x600000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_2 
        = (IData)((0U == (0xcU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_2 
        = (IData)((0U == (0xc0U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_2 
        = (IData)((0U == (0xc00U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_2 
        = (IData)((0U == (0xc000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_2 
        = (IData)((0U == (0xc0000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_2 
        = (IData)((0U == (0xc00000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_16 
        = ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
               >> 1U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_2));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_16 
        = ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
               >> 5U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_2));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_16 
        = ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
               >> 9U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_2));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_16 
        = ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
               >> 0xdU)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_2));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_16 
        = ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
               >> 0x11U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_2));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_16 
        = ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
               >> 0x15U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_2));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_sequent__TOP__0(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgRegularize_h8e9dd03d_0_11 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 1U) & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                 [5U]));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgRegularize_h8e9dd03d_0_14 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 2U) & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                 [5U]));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgRegularize_h8e9dd03d_0_13 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 2U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U] >> 1U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgRegularize_h8e9dd03d_0_12 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 3U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U] >> 2U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_11 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 5U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U] >> 4U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_14 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 6U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U] >> 4U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_13 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 6U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U] >> 5U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_12 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 7U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U] >> 6U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_11 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 9U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U] >> 8U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_14 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0xaU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                   [5U] >> 8U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_13 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0xaU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                   [5U] >> 9U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_12 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0xbU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                   [5U] >> 0xaU)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_11 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0xdU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                   [5U] >> 0xcU)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_14 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0xeU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                   [5U] >> 0xcU)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_13 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0xeU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                   [5U] >> 0xdU)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_12 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0xfU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                   [5U] >> 0xeU)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_11 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x11U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x10U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_14 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x12U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x10U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_13 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x12U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x11U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_12 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x13U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x12U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_11 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x15U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x14U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_14 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x16U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x14U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_13 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x16U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x15U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_12 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x17U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x16U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_11 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x19U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x18U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_14 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x1aU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x18U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_13 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x1aU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x19U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_12 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x1bU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x1aU)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_0 
        = (1U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                 [5U] | ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                          [5U] >> 1U) | ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 2U) 
                                         | ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 3U) 
                                            | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgRegularize_h8e9dd03d_0_11) 
                                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgRegularize_h8e9dd03d_0_14) 
                                                  | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgRegularize_h8e9dd03d_0_13) 
                                                     | (((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                          [5U] 
                                                          >> 2U) 
                                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgRegularize_h8e9dd03d_0_11)) 
                                                        | (((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                             [5U] 
                                                             >> 3U) 
                                                            & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                            [5U]) 
                                                           | (((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                [5U] 
                                                                >> 3U) 
                                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                  [5U] 
                                                                  >> 1U)) 
                                                              | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgRegularize_h8e9dd03d_0_12) 
                                                                 | (((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                      [5U] 
                                                                      >> 3U) 
                                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgRegularize_h8e9dd03d_0_11)) 
                                                                    | (((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                         [5U] 
                                                                         >> 3U) 
                                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgRegularize_h8e9dd03d_0_14)) 
                                                                       | (((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                            [5U] 
                                                                            >> 3U) 
                                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgRegularize_h8e9dd03d_0_13)) 
                                                                          | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgRegularize_h8e9dd03d_0_12) 
                                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgRegularize_h8e9dd03d_0_11)))))))))))))))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__1(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow 
        = ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry)) 
           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
              >> 7U));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__2(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__2\n"); );
    // Init
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_0;
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_1;
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_1 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_3;
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_3 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_15;
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_15 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_15;
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_15 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_15;
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_15 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_15;
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_15 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_15;
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_15 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_15;
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_15 = 0;
    // Body
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_15 
        = (1U & ((~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max) 
                 & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [5U] >> 7U)));
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_15 
        = (1U & ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                     >> 4U)) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                [5U] >> 0xbU)));
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_15 
        = (1U & ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                     >> 8U)) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                [5U] >> 0xfU)));
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_15 
        = (1U & ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                     >> 0xcU)) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                  [5U] >> 0x13U)));
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_15 
        = (1U & ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                     >> 0x10U)) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                   [5U] >> 0x17U)));
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_15 
        = (1U & ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                     >> 0x14U)) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                   [5U] >> 0x1bU)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6 
        = (1U & (~ (IData)((0U != (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                            >> 0x14U) 
                                           ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x18U)))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_1 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_16) 
                  & ((~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max) 
                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                        [5U] >> 4U))) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_16) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 5U)) 
                                         | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_2) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 6U)) 
                                            | (((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                  >> 3U)) 
                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 7U)) 
                                               | (((~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max) 
                                                   & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_2) 
                                                      & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                                  | (((~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_9) 
                                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_14))) 
                                                     | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_9) 
                                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_13)) 
                                                        | ((IData)(
                                                                   (((0U 
                                                                      == 
                                                                      (9U 
                                                                       & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_11)) 
                                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                       [5U] 
                                                                       >> 6U))) 
                                                           | (((~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max) 
                                                               & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_10) 
                                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                      [5U] 
                                                                      >> 7U) 
                                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                        [5U] 
                                                                        >> 4U)))) 
                                                              | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_10) 
                                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                      [5U] 
                                                                      >> 7U) 
                                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                        [5U] 
                                                                        >> 5U))) 
                                                                 | (((~ 
                                                                      (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                       >> 2U)) 
                                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_12)) 
                                                                    | (((~ 
                                                                         (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                          >> 2U)) 
                                                                        & ((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_15) 
                                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                                                       | (((~ 
                                                                            (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                             >> 1U)) 
                                                                           & ((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_15) 
                                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_14))) 
                                                                          | (((~ 
                                                                               (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                                >> 1U)) 
                                                                              & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 7U) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_13))) 
                                                                             | ((~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max) 
                                                                                & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_12) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgRegularize_h8e9dd03d_0_11))))))))))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_2 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_16) 
                  & ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                         >> 4U)) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 8U))) | 
                 (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_16) 
                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [5U] >> 9U)) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_2) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0xaU)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                              >> 7U)) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0xbU)) 
                                         | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                 >> 4U)) 
                                             & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_2) 
                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                            | (((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                  >> 4U)) 
                                                & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_9) 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_14))) 
                                               | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_9) 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_13)) 
                                                  | ((IData)(
                                                             (((0U 
                                                                == 
                                                                (0x90U 
                                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_11)) 
                                                              & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                 [5U] 
                                                                 >> 0xaU))) 
                                                     | (((~ 
                                                          (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                           >> 4U)) 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_10) 
                                                            & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                [5U] 
                                                                >> 0xbU) 
                                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                  [5U] 
                                                                  >> 8U)))) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_10) 
                                                            & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                [5U] 
                                                                >> 0xbU) 
                                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                  [5U] 
                                                                  >> 9U))) 
                                                           | (((~ 
                                                                (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                 >> 6U)) 
                                                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_12)) 
                                                              | (((~ 
                                                                   (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                    >> 6U)) 
                                                                  & ((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_15) 
                                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                                                 | (((~ 
                                                                      (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                       >> 5U)) 
                                                                     & ((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_15) 
                                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_14))) 
                                                                    | (((~ 
                                                                         (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                          >> 5U)) 
                                                                        & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                            [5U] 
                                                                            >> 0xbU) 
                                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_13))) 
                                                                       | ((~ 
                                                                           (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                            >> 4U)) 
                                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_12) 
                                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgRegularize_h8e9dd03d_0_11))))))))))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_3 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_16) 
                  & ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                         >> 8U)) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0xcU))) 
                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_16) 
                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                        [5U] >> 0xdU)) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_2) 
                                           & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xeU)) 
                                          | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                  >> 0xbU)) 
                                              & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0xfU)) 
                                             | (((~ 
                                                  (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                   >> 8U)) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_2) 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                                | (((~ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                      >> 8U)) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_9) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_14))) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_9) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_13)) 
                                                      | ((IData)(
                                                                 (((0U 
                                                                    == 
                                                                    (0x900U 
                                                                     & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_11)) 
                                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                     [5U] 
                                                                     >> 0xeU))) 
                                                         | (((~ 
                                                              (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                               >> 8U)) 
                                                             & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_10) 
                                                                & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                    [5U] 
                                                                    >> 0xfU) 
                                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                      [5U] 
                                                                      >> 0xcU)))) 
                                                            | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_10) 
                                                                & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                    [5U] 
                                                                    >> 0xfU) 
                                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                      [5U] 
                                                                      >> 0xdU))) 
                                                               | (((~ 
                                                                    (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                     >> 0xaU)) 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_12)) 
                                                                  | (((~ 
                                                                       (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                        >> 0xaU)) 
                                                                      & ((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_15) 
                                                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                                                     | (((~ 
                                                                          (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                           >> 9U)) 
                                                                         & ((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_15) 
                                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_14))) 
                                                                        | (((~ 
                                                                             (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                              >> 9U)) 
                                                                            & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0xfU) 
                                                                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_13))) 
                                                                           | ((~ 
                                                                               (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                                >> 8U)) 
                                                                              & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_12) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgRegularize_h8e9dd03d_0_11))))))))))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_4 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_16) 
                  & ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                         >> 0xcU)) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                      [5U] >> 0x10U))) 
                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_16) 
                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                        [5U] >> 0x11U)) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_2) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x12U)) 
                                           | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                   >> 0xfU)) 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x13U)) 
                                              | (((~ 
                                                   (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                    >> 0xcU)) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_2) 
                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                                 | (((~ 
                                                      (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                       >> 0xcU)) 
                                                     & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_9) 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_14))) 
                                                    | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_9) 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_13)) 
                                                       | ((IData)(
                                                                  (((0U 
                                                                     == 
                                                                     (0x9000U 
                                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_11)) 
                                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                      [5U] 
                                                                      >> 0x12U))) 
                                                          | (((~ 
                                                               (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                >> 0xcU)) 
                                                              & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_10) 
                                                                 & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                     [5U] 
                                                                     >> 0x13U) 
                                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                       [5U] 
                                                                       >> 0x10U)))) 
                                                             | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_10) 
                                                                 & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                     [5U] 
                                                                     >> 0x13U) 
                                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                       [5U] 
                                                                       >> 0x11U))) 
                                                                | (((~ 
                                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                      >> 0xeU)) 
                                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_12)) 
                                                                   | (((~ 
                                                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                         >> 0xeU)) 
                                                                       & ((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_15) 
                                                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                                                      | (((~ 
                                                                           (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                            >> 0xdU)) 
                                                                          & ((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_15) 
                                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_14))) 
                                                                         | (((~ 
                                                                              (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                               >> 0xdU)) 
                                                                             & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0x13U) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_13))) 
                                                                            | ((~ 
                                                                                (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                                >> 0xcU)) 
                                                                               & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_12) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgRegularize_h8e9dd03d_0_11))))))))))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_5 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_16) 
                  & ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                         >> 0x10U)) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x14U))) 
                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_16) 
                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                        [5U] >> 0x15U)) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_2) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x16U)) 
                                           | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                   >> 0x13U)) 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x17U)) 
                                              | (((~ 
                                                   (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                    >> 0x10U)) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_2) 
                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                                 | (((~ 
                                                      (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                       >> 0x10U)) 
                                                     & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_9) 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_14))) 
                                                    | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_9) 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_13)) 
                                                       | ((IData)(
                                                                  (((0U 
                                                                     == 
                                                                     (0x90000U 
                                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_11)) 
                                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                      [5U] 
                                                                      >> 0x16U))) 
                                                          | (((~ 
                                                               (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                >> 0x10U)) 
                                                              & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_10) 
                                                                 & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                     [5U] 
                                                                     >> 0x17U) 
                                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                       [5U] 
                                                                       >> 0x14U)))) 
                                                             | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_10) 
                                                                 & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                     [5U] 
                                                                     >> 0x17U) 
                                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                       [5U] 
                                                                       >> 0x15U))) 
                                                                | (((~ 
                                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                      >> 0x12U)) 
                                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_12)) 
                                                                   | (((~ 
                                                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                         >> 0x12U)) 
                                                                       & ((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_15) 
                                                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                                                      | (((~ 
                                                                           (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                            >> 0x11U)) 
                                                                          & ((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_15) 
                                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_14))) 
                                                                         | (((~ 
                                                                              (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                               >> 0x11U)) 
                                                                             & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0x17U) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_13))) 
                                                                            | ((~ 
                                                                                (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                                >> 0x10U)) 
                                                                               & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_12) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgRegularize_h8e9dd03d_0_11))))))))))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_6 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_16) 
                  & ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                         >> 0x14U)) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x18U))) 
                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_16) 
                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                        [5U] >> 0x19U)) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_2) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x1aU)) 
                                           | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                   >> 0x17U)) 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x1bU)) 
                                              | (((~ 
                                                   (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                    >> 0x14U)) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_2) 
                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                                 | (((~ 
                                                      (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                       >> 0x14U)) 
                                                     & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_9) 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_14))) 
                                                    | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_9) 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_13)) 
                                                       | ((IData)(
                                                                  (((0U 
                                                                     == 
                                                                     (0x900000U 
                                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_11)) 
                                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                      [5U] 
                                                                      >> 0x1aU))) 
                                                          | (((~ 
                                                               (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                >> 0x14U)) 
                                                              & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_10) 
                                                                 & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                     [5U] 
                                                                     >> 0x1bU) 
                                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                       [5U] 
                                                                       >> 0x18U)))) 
                                                             | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_10) 
                                                                 & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                     [5U] 
                                                                     >> 0x1bU) 
                                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                       [5U] 
                                                                       >> 0x19U))) 
                                                                | (((~ 
                                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                      >> 0x16U)) 
                                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_12)) 
                                                                   | (((~ 
                                                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                         >> 0x16U)) 
                                                                       & ((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_15) 
                                                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_11))) 
                                                                      | (((~ 
                                                                           (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                            >> 0x15U)) 
                                                                          & ((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_15) 
                                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_14))) 
                                                                         | (((~ 
                                                                              (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                               >> 0x15U)) 
                                                                             & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0x1bU) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_13))) 
                                                                            | ((~ 
                                                                                (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                                >> 0x14U)) 
                                                                               & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_12) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgRegularize_h8e9dd03d_0_11))))))))))))))))));
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_3 
        = ((~ (IData)((0U != (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                       >> 0x10U) ^ 
                                      (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x14U)))))) 
           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6));
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_0 
        = ((~ (IData)((0U != (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                       >> 0xcU) ^ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x10U)))))) 
           & (IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_3));
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_1 
        = ((~ (IData)((0U != (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                       >> 8U) ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0xcU)))))) 
           & (IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_COMP_28BIT_less 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_6) 
           | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6) 
               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_5)) 
              | (((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_3) 
                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_4)) 
                 | (((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_0) 
                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_3)) 
                    | (((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_1) 
                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_2)) 
                       | (((~ (IData)((0U != (0xfU 
                                              & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                  >> 4U) 
                                                 ^ 
                                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 8U)))))) 
                           & (IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_1)) 
                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_1) 
                             | ((~ (IData)((0U != (0xfU 
                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                      ^ 
                                                      (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                       [5U] 
                                                       >> 4U)))))) 
                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_0)))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SIGN_OUT__i_comp_man 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare) 
           | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_COMP_28BIT_less));
    if (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_COMP_28BIT_less) {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
            = vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
            [5U];
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_min 
            = (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
               << 4U);
    } else {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
            = (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
               << 4U);
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_min 
            = vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
            [5U];
    }
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result 
        = (1U & (((((~ (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub)) 
                    & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                       >> 0x1fU)) | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                         >> 0x1fU)) 
                                     & (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub))) 
                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SIGN_OUT__i_comp_man)) 
                 | ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SIGN_OUT__i_comp_man)) 
                    & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                       >> 0x1fU))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
        = (0xfffffffU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry)
                          ? (~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_min)
                          : vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_min));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                   & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 4U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 8U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0xcU));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x10U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x14U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x18U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                   ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 4U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0xcU));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 8U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x14U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x10U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x18U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p 
        = (((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
            << 6U) | (((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                       << 5U) | (((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                  << 4U) | (((IData)(
                                                     (0xfU 
                                                      == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                             << 3U) 
                                            | (((IData)(
                                                        (0xfU 
                                                         == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0xfU 
                                                            == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                                   << 1U) 
                                                  | (0xfU 
                                                     == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__3(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__3\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (1U | ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                << 1U) 
                                               | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                   << 1U) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                     << 2U)))) 
                               | (((IData)((6U == (6U 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g)) 
                                  << 3U)) | (((IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
                                             << 3U))) 
                       | ((4U & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                   << 1U) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                              << 1U) 
                                             & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                << 2U))) 
                                 | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                      << 1U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                << 2U)) 
                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c) 
                                       << 2U)))) | 
                          (2U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                  | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))) 
                                 << 1U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = __Vtemp_1;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                  >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                              >> 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                        >> 2U)) | (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                          >> 1U)) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g) 
           | (0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__4(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__4\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number 
        = ((0x10U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                      ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                     << 4U)) | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__7(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__7\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__8(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__8\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__9(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__9\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 1U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__10(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__10\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__11(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__11\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 3U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__12(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__12\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__13(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__13\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 2U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__14(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__14\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12 
        = (IData)((0U == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_4 
        = (IData)((0U == (0xaU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__15(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__15\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 5U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__16(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__16\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__17(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__17\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 4U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__18(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__18\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12 
        = (IData)((0U == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_4 
        = (IData)((0U == (0xaU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__19(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__19\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 6U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__20(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__20\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_c));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12 
        = (IData)((0U == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_4 
        = (IData)((0U == (0xaU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__21(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__21\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g 
        = ((0x40U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                      << 3U) | (((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                   << 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                             << 4U)) 
                                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                     << 6U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                               << 5U))) 
                                | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                     << 6U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                               << 5U)) 
                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                       | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                      << 6U))))) | 
           ((0x20U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                       << 2U) | (((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                    << 2U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                              << 3U)) 
                                  | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                      << 5U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                << 4U))) 
                                 | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                      << 5U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                << 4U)) 
                                    & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                        | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                       << 5U))))) | 
            ((0x10U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                        << 1U) | (((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                     << 1U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                       << 4U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                 << 3U))) 
                                  | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                       << 4U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                 << 3U)) 
                                     & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                        << 4U))))) 
             | ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                            & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                               << 1U)) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                           << 3U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U))) 
                          | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                               << 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                         << 2U)) & 
                             (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                              << 3U))))) | ((4U & (
                                                   (0x7ffffffcU 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                       >> 1U)) 
                                                   | (((0x7ffffffcU 
                                                        & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            >> 1U) 
                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g))) 
                                                       | (0xfffffffcU 
                                                          & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                              << 2U) 
                                                             & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                                << 1U)))) 
                                                      | (0xfffffffcU 
                                                         & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                              << 2U) 
                                                             & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                                << 1U)) 
                                                            & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                                | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                               << 2U)))))) 
                                            | ((2U 
                                                & ((0x3ffffffeU 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                       >> 2U)) 
                                                   | (((0x3ffffffeU 
                                                        & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            >> 2U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              >> 1U))) 
                                                       | (0xfffffffeU 
                                                          & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)))) 
                                                      | (0xfffffffeU 
                                                         & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)) 
                                                            & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                                | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                               << 1U)))))) 
                                               | (1U 
                                                  & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                      >> 3U) 
                                                     | (((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                           >> 3U) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                             >> 2U)) 
                                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                            & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                               >> 1U))) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgRegularize_h7e120794_0_1) 
                                                            & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                               >> 1U)) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                                 & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)))))))))))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__22(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__22\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = __Vtemp_1;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                  >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                              >> 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                        >> 2U)) | (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                          >> 1U)) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))))))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__23(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__23\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[1U] 
        = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0x7ffffffU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                             [0U] >> 1U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [0U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[2U] 
        = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0x3ffffffU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                             [1U] >> 2U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [1U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[3U] 
        = ((4U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0xffffffU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                            [2U] >> 4U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [2U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[4U] 
        = ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0xfffffU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                           [3U] >> 8U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [3U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[5U] 
        = ((0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0xfffU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U] >> 0x10U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [4U]);
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__24(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__24\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
           & (IData)((0U == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_15 
        = ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum) 
               >> 3U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_4));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__25(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__25\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
           & (IData)((0U == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15 
        = ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum) 
               >> 3U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_4));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__26(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__26\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry 
        = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                       >> 3U))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__27(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__27\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_man 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
            << 0x18U) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum) 
                          << 0x14U) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum) 
                                          << 8U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum) 
                                           << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__sum)))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[0U] 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_man;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__28(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__28\n"); );
    // Body
    vlSelf->__VdfgRegularize_hd87f99a1_5_9 = (1U & (IData)(
                                                           ((0U 
                                                             != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum)) 
                                                            | (0U 
                                                               != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
           & (IData)((0U == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15 
        = ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum) 
               >> 3U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_4));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__29(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__29\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x80U & (((0xffffff80U & (((((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                 << 1U) 
                                                | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                      << 2U))) 
                                               | (((IData)(
                                                           (0x60U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                   << 7U) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                     << 3U))) 
                                              | (((IData)(
                                                          (0x70U 
                                                           == 
                                                           (0x70U 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                  << 7U) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                    << 4U))) 
                                             | (((IData)(
                                                         (0x78U 
                                                          == 
                                                          (0x78U 
                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                 << 7U) 
                                                & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                   << 5U))) 
                                            | (((IData)(
                                                        (0x7cU 
                                                         == 
                                                         (0x7cU 
                                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                << 7U) 
                                               & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                  << 6U)))) 
                            | (((IData)((0x7eU == (0x7eU 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)) 
                               << 7U)) | (((IData)(
                                                   (0x7fU 
                                                    == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p))) 
                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)) 
                                          << 7U))) 
                 | ((0x40U & (((0xffffffc0U & ((((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                      << 1U) 
                                                     & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                        << 2U))) 
                                                 | (((IData)(
                                                             (0x30U 
                                                              == 
                                                              (0x30U 
                                                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                     << 6U) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                       << 3U))) 
                                                | (((IData)(
                                                            (0x38U 
                                                             == 
                                                             (0x38U 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                    << 6U) 
                                                   & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                      << 4U))) 
                                               | (((IData)(
                                                           (0x3cU 
                                                            == 
                                                            (0x3cU 
                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                   << 6U) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                     << 5U)))) 
                               | (((IData)((0x3eU == 
                                            (0x3eU 
                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)) 
                                  << 6U)) | (((IData)(
                                                      (0x3fU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)) 
                                             << 6U))) 
                    | ((0x20U & (((0xffffffe0U & ((
                                                   (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                     << 1U) 
                                                    | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                        << 1U) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                          << 2U))) 
                                                   | (((IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x18U 
                                                                 & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                       << 5U) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                         << 3U))) 
                                                  | (((IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x1cU 
                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                      << 5U) 
                                                     & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                        << 4U)))) 
                                  | (((IData)((0x1eU 
                                               == (0x1eU 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                      & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)) 
                                     << 5U)) | (((IData)(
                                                         (0x1fU 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                 & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)) 
                                                << 5U))) 
                       | ((0x10U & (((0xfffffff0U & 
                                      ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                         << 1U) | (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                      << 2U))) 
                                       | (((IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                           << 4U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                           << 3U)))) 
                                     | (((IData)((0xeU 
                                                  == 
                                                  (0xeU 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)) 
                                        << 4U)) | (
                                                   ((IData)(
                                                            (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)) 
                                                   << 4U))) 
                          | ((8U & (((0xfffffff8U & 
                                      (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                        << 1U) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                   << 1U) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                     << 2U)))) 
                                     | (((IData)((6U 
                                                  == 
                                                  (6U 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)) 
                                        << 3U)) | (
                                                   ((IData)(
                                                            (7U 
                                                             == 
                                                             (7U 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)) 
                                                   << 3U))) 
                             | ((4U & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                         << 1U) | (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                      << 2U))) 
                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                            << 1U) 
                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                              << 2U)) 
                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                             << 2U)))) 
                                | ((2U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))) 
                                          << 1U)) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__30(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__30\n"); );
    // Body
    vlSelf->__VdfgRegularize_hd87f99a1_5_4 = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow)
                                               ? (0x8000000U 
                                                  | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                      << 0x17U) 
                                                     | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                         << 0x13U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                            << 0xfU) 
                                                           | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                                     << 3U) 
                                                                    | (7U 
                                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                                          >> 1U)))))))))
                                               : ((8U 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum))
                                                   ? vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_man
                                                   : 
                                                  vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                                                  [5U]));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__31(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__31\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag 
        = (1U & ((~ (IData)(((0U != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum)) 
                             | (0U != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum))))) 
                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_5_9))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__32(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__32\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag 
        = ((~ (IData)(((0U != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum)) 
                       | (0U != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum))))) 
           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
            ? 0x1fU : (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag) 
                        << 4U) | ((8U & (((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)) 
                                          & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_5_9))) 
                                         << 3U)) | 
                                  ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)
                                      ? (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
                                          & (IData)(
                                                    (0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum))))) 
                                         & (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum))))
                                      : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_5_9)
                                          ? (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                              & (IData)(
                                                        (0U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum))))) 
                                             & (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum))))
                                          : (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                              & (IData)(
                                                        (0U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum))))) 
                                             & (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum)))))) 
                                    << 2U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)
                                                 ? 
                                                (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum)) 
                                                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                     & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                        >> 1U)) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                          | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                             >> 1U)))))
                                                 : 
                                                ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_5_9)
                                                  ? 
                                                 (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum)) 
                                                  | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                         >> 1U)) 
                                                     | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                        & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                              >> 1U)))))
                                                  : 
                                                 (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum)) 
                                                  | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                         >> 1U)) 
                                                     | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                        & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                              >> 1U))))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)
                                                     ? 
                                                    (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                      & (IData)(
                                                                (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum))))) 
                                                     | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                            >> 2U)) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum)) 
                                                           | (IData)(
                                                                     (4U 
                                                                      == 
                                                                      (0xcU 
                                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum)))))))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_5_9)
                                                      ? 
                                                     (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                       & (IData)(
                                                                 (1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum))))) 
                                                      | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                             >> 2U)) 
                                                         | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum)) 
                                                            | (IData)(
                                                                      (4U 
                                                                       == 
                                                                       (0xcU 
                                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum)))))))
                                                      : 
                                                     (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                       & (IData)(
                                                                 (1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum))))) 
                                                      | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                             >> 2U)) 
                                                         | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum)) 
                                                            | (IData)(
                                                                      (4U 
                                                                       == 
                                                                       (0xcU 
                                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum)))))))))))))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__33(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__33\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit 
        = (1U & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                 & (vlSelf->__VdfgRegularize_hd87f99a1_5_4 
                    >> 2U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
            ? 0U : (0xffffffU & (vlSelf->__VdfgRegularize_hd87f99a1_5_4 
                                 >> 4U)));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__34(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__34\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[1U] 
        = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position))
            ? (0xffffffeU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [0U] << 1U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [0U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[2U] 
        = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position))
            ? (0xffffffcU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [1U] << 2U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [1U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[3U] 
        = ((4U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position))
            ? (0xffffff0U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [2U] << 4U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [2U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[4U] 
        = ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position))
            ? (0xfffff00U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [3U] << 8U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [3U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[5U] 
        = ((0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position))
            ? (0xfff0000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [4U] << 0x10U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [4U]);
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__35(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__35\n"); );
    // Body
    if (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b = 0U;
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b = 1U;
    } else if ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum))) {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b = 0U;
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b = 0U;
    } else {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b 
            = (0xfU & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position) 
                          >> 4U)));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b 
            = (0xfU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position)));
    }
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
            >> 4U) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                    >> 4U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p 
        = (0xfU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__36(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__36\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((0x7fffffU == (0x7fffffU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                   & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                  << 0x17U) | ((((0x3fffffU == (0x3fffffU 
                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                << 0x16U) | ((((0x1fffffU 
                                                == 
                                                (0x1fffffU 
                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                               & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                              << 0x15U) 
                                             | ((((0xfffffU 
                                                   == 
                                                   (0xfffffU 
                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                 << 0x14U) 
                                                | ((((0x7ffffU 
                                                      == 
                                                      (0x7ffffU 
                                                       & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                     & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                    << 0x13U) 
                                                   | ((((0x3ffffU 
                                                         == 
                                                         (0x3ffffU 
                                                          & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                        & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                       << 0x12U) 
                                                      | ((((0x1ffffU 
                                                            == 
                                                            (0x1ffffU 
                                                             & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                           & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                          << 0x11U) 
                                                         | ((((0xffffU 
                                                               == 
                                                               (0xffffU 
                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                             << 0x10U) 
                                                            | ((((0x7fffU 
                                                                  == 
                                                                  (0x7fffU 
                                                                   & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                << 0xfU) 
                                                               | ((((0x3fffU 
                                                                     == 
                                                                     (0x3fffU 
                                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                   << 0xeU) 
                                                                  | ((((0x1fffU 
                                                                        == 
                                                                        (0x1fffU 
                                                                         & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                       & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                      << 0xdU) 
                                                                     | ((((0xfffU 
                                                                           == 
                                                                           (0xfffU 
                                                                            & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                          & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                         << 0xcU) 
                                                                        | ((((0x7ffU 
                                                                              == 
                                                                              (0x7ffU 
                                                                               & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                             & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                            << 0xbU) 
                                                                           | ((((0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                               << 0xaU) 
                                                                              | ((((0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 9U) 
                                                                                | ((((0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 8U) 
                                                                                | ((((0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 7U) 
                                                                                | ((((0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 6U) 
                                                                                | ((((0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 5U) 
                                                                                | ((((0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 4U) 
                                                                                | ((((7U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 3U) 
                                                                                | ((((3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 1U)) 
                                                                                | ((((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                                                                                & (vlSelf->__VdfgRegularize_hd87f99a1_5_4 
                                                                                >> 3U)) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit)) 
                                                                                | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit) 
                                                                                & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                                                                                & ((vlSelf->__VdfgRegularize_hd87f99a1_5_4 
                                                                                >> 1U) 
                                                                                | vlSelf->__VdfgRegularize_hd87f99a1_5_4)))))))))))))))))))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__37(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__37\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = __Vtemp_1;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                  >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                              >> 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                        >> 2U)) | (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                          >> 1U)) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g) 
           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry) 
              & (0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__38(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__38\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
            ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                      ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                     << 4U) | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                               ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__39(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__39\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = __Vtemp_1;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                  >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                              >> 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                        >> 2U)) | (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                          >> 1U)) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))))))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__40(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__40\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((0x7fU == (0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result))) 
                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)) 
                  << 7U) | ((((0x3fU == (0x3fU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result))) 
                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)) 
                             << 6U) | ((((0x1fU == 
                                          (0x1fU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result))) 
                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)) 
                                        << 5U) | ((
                                                   ((0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result))) 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)) 
                                                   << 4U) 
                                                  | ((((7U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result))) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)) 
                                                      << 3U) 
                                                     | ((((3U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result))) 
                                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result) 
                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)) 
                                                               << 1U)) 
                                                           | ((0xffffffU 
                                                               == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
                                                              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry 
        = __Vtemp_1;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result 
        = ((((0U != (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_b)) 
             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_2)) 
            | (((0U != (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_3)) 
               | ((~ (IData)((0U != (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                  & (IData)((((0x7f800000U == (0x7f800000U 
                                               & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                              & (0x7f800000U == (0x7f800000U 
                                                 & vlSelf->tb_FPU_unit__DOT__i_32_b))) 
                             & (~ (IData)((0U != (0x7fffffU 
                                                  & vlSelf->tb_FPU_unit__DOT__i_32_b)))))))))
            ? 0xffU : ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result) 
                       ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)));
}

void Vtb_FPU_unit___024root___nba_comb__TOP__0(Vtb_FPU_unit___024root* vlSelf);

void Vtb_FPU_unit___024root___eval_nba(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_nba\n"); );
    // Body
    if ((0x1c00000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_FPU_unit___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___nba_comb__TOP__0(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_5;
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_5 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_6;
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_6 = 0;
    // Body
    vlSelf->tb_FPU_unit__DOT__w_o_data_rom_a = vlSelf->tb_FPU_unit__DOT__rom_A
        [vlSelf->tb_FPU_unit__DOT__w_i_addr];
    vlSelf->tb_FPU_unit__DOT__w_o_data_rom_b = vlSelf->tb_FPU_unit__DOT__rom_B
        [vlSelf->tb_FPU_unit__DOT__w_i_addr];
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_5 
        = (IData)((0xff800000U == (0xff800000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_6 
        = (IData)((0xff800000U == (0xff800000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_2 
        = (IData)((0x7f800000U == (0xff800000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_3 
        = (IData)((0x7f800000U == (0xff800000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result 
        = (1U & (((((~ (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub)) 
                    & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                       >> 0x1fU)) | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                         >> 0x1fU)) 
                                     & (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub))) 
                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SIGN_OUT__i_comp_man)) 
                 | ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SIGN_OUT__i_comp_man)) 
                    & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                       >> 0x1fU))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result 
        = ((((0U != (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_b)) 
             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_2)) 
            | (((0U != (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_3)) 
               | ((~ (IData)((0U != (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                  & (IData)((((0x7f800000U == (0x7f800000U 
                                               & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                              & (0x7f800000U == (0x7f800000U 
                                                 & vlSelf->tb_FPU_unit__DOT__i_32_b))) 
                             & (~ (IData)((0U != (0x7fffffU 
                                                  & vlSelf->tb_FPU_unit__DOT__i_32_b)))))))))
            ? 0xffU : ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result) 
                       ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man 
        = ((((0xffU == (0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                 >> 0x17U))) | (0xffU 
                                                == 
                                                (0xffU 
                                                 & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                    >> 0x17U)))) 
            << 1U) | ((IData)(((0x7f800000U == (0x7f800000U 
                                                & vlSelf->tb_FPU_unit__DOT__i_32_b)) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                      | ((IData)(((0x7f800000U == (0x7f800000U 
                                                   & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                         | (((~ (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub)) 
                             & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_3) 
                                & (IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_5))) 
                            | (((~ (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub)) 
                                & ((IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_6) 
                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_2))) 
                               | ((IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub) 
                                  & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_3) 
                                      & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_2)) 
                                     | ((IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_6) 
                                        & (IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgRegularize_h2f9c2cd2_0_5)))))))));
}

void Vtb_FPU_unit___024root___timing_resume(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___timing_resume\n"); );
    // Body
    if ((0x800000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hef0ac919__0.resume("@(posedge tb_FPU_unit.i_clk)");
    }
    if ((0x1000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hef0ac1e8__0.resume("@(negedge tb_FPU_unit.i_clk)");
    }
    if ((0x400000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_FPU_unit___024root___timing_commit(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___timing_commit\n"); );
    // Body
    if ((! (0x800000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hef0ac919__0.commit("@(posedge tb_FPU_unit.i_clk)");
    }
    if ((! (0x1000000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hef0ac1e8__0.commit("@(negedge tb_FPU_unit.i_clk)");
    }
}

void Vtb_FPU_unit___024root___eval_triggers__act(Vtb_FPU_unit___024root* vlSelf);

bool Vtb_FPU_unit___024root___eval_phase__act(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<37> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_FPU_unit___024root___eval_triggers__act(vlSelf);
    Vtb_FPU_unit___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_FPU_unit___024root___timing_resume(vlSelf);
        Vtb_FPU_unit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_FPU_unit___024root___eval_phase__nba(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_FPU_unit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}
