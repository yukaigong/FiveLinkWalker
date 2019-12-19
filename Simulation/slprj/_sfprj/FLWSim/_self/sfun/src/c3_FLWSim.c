/* Include files */

#include "FLWSim_sfun.h"
#include "c3_FLWSim.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "FLWSim_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c3_debug_family_names[48] = { "q", "dq", "T", "Kd", "Kp",
  "s", "ds", "stanceLeg", "hr", "dhr", "ddhr", "p_LT", "p_RT", "Jp_LT", "Jp_RT",
  "dJp_LT", "dJp_RT", "J_basexyz", "rp_LT", "rp_RT", "Jrp_LT", "Jrp_RT",
  "dJrp_LT", "dJrp_RT", "M", "C", "G", "B", "q1", "q2", "Jh", "dJh", "h0", "dh0",
  "Jg", "dJg", "Me", "He", "Be", "S", "y", "dy", "nargin", "nargout", "x", "t",
  "GRF", "u" };

static const char * c3_b_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c3_c_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c3_d_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c3_e_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c3_f_debug_family_names[5] = { "nargin", "nargout", "var1",
  "var2", "output1" };

static const char * c3_g_debug_family_names[5] = { "nargin", "nargout", "var1",
  "var2", "output1" };

static const char * c3_h_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c3_i_debug_family_names[5] = { "nargin", "nargout", "var1",
  "var2", "output1" };

static const char * c3_j_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

/* Function Declarations */
static void initialize_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance);
static void initialize_params_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance);
static void enable_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance);
static void disable_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance);
static void c3_update_debugger_state_c3_FLWSim(SFc3_FLWSimInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c3_FLWSim(SFc3_FLWSimInstanceStruct
  *chartInstance);
static void set_sim_state_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_st);
static void finalize_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance);
static void sf_gateway_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance);
static void mdl_start_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance);
static void c3_chartstep_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance);
static void initSimStructsc3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance);
static void c3_p_LeftToe(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_output1[3]);
static void c3_p_RightToe(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_output1[3]);
static void c3_Jp_LeftToe(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_output1[21]);
static void c3_Jp_RightToe(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_output1[21]);
static void c3_dJp_LeftToe(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_var2[7], real_T c3_output1[21]);
static void c3_dJp_RightToe(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_var2[7], real_T c3_output1[21]);
static void c3_InertiaMatrix(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_output1[49]);
static void c3_CoriolisTerm(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_var2[7], real_T c3_output1[7]);
static void c3_GravityVector(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_output1[7]);
static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber, uint32_T c3_instanceNumber);
static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData);
static void c3_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance, const
  mxArray *c3_b_u, const char_T *c3_identifier, real_T c3_y[4]);
static void c3_b_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[4]);
static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static const mxArray *c3_d_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static real_T c3_c_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_e_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static const mxArray *c3_f_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static const mxArray *c3_g_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static void c3_d_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[9]);
static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_h_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static void c3_e_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[81]);
static void c3_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_i_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static void c3_f_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[14]);
static void c3_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_j_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static void c3_g_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[28]);
static void c3_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_k_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static void c3_h_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[7]);
static void c3_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_l_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static const mxArray *c3_m_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static void c3_i_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[49]);
static void c3_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_n_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static void c3_j_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[21]);
static void c3_i_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_o_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static void c3_k_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[3]);
static void c3_j_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static real_T c3_rem(SFc3_FLWSimInstanceStruct *chartInstance, real_T c3_b_x);
static real_T c3_mod(SFc3_FLWSimInstanceStruct *chartInstance, real_T c3_b_x);
static void c3_error(SFc3_FLWSimInstanceStruct *chartInstance);
static void c3_mpower(SFc3_FLWSimInstanceStruct *chartInstance, real_T c3_a[81],
                      real_T c3_c[81]);
static void c3_invNxN(SFc3_FLWSimInstanceStruct *chartInstance, real_T c3_b_x[81],
                      real_T c3_y[81]);
static void c3_check_forloop_overflow_error(SFc3_FLWSimInstanceStruct
  *chartInstance, boolean_T c3_overflow);
static real_T c3_norm(SFc3_FLWSimInstanceStruct *chartInstance, real_T c3_b_x[81]);
static void c3_warning(SFc3_FLWSimInstanceStruct *chartInstance);
static void c3_b_warning(SFc3_FLWSimInstanceStruct *chartInstance, char_T
  c3_varargin_1[14]);
static void c3_b_mpower(SFc3_FLWSimInstanceStruct *chartInstance, real_T c3_a[16],
  real_T c3_c[16]);
static void c3_b_invNxN(SFc3_FLWSimInstanceStruct *chartInstance, real_T c3_b_x
  [16], real_T c3_y[16]);
static real_T c3_b_norm(SFc3_FLWSimInstanceStruct *chartInstance, real_T c3_b_x
  [16]);
static void c3_l_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_sprintf, const char_T *c3_identifier, char_T c3_y[14]);
static void c3_m_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, char_T c3_y[14]);
static const mxArray *c3_p_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static int32_T c3_n_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_k_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static uint8_T c3_o_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_is_active_c3_FLWSim, const char_T *c3_identifier);
static uint8_T c3_p_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId);
static void init_dsm_address_info(SFc3_FLWSimInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc3_FLWSimInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc3_FLWSim(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c3_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_is_active_c3_FLWSim = 0U;
}

static void initialize_params_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c3_update_debugger_state_c3_FLWSim(SFc3_FLWSimInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c3_FLWSim(SFc3_FLWSimInstanceStruct
  *chartInstance)
{
  const mxArray *c3_st;
  const mxArray *c3_y = NULL;
  const mxArray *c3_b_y = NULL;
  uint8_T c3_hoistedGlobal;
  const mxArray *c3_c_y = NULL;
  c3_st = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellmatrix(2, 1), false);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", *chartInstance->c3_u, 0, 0U, 1U, 0U,
    1, 4), false);
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_hoistedGlobal = chartInstance->c3_is_active_c3_FLWSim;
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", &c3_hoistedGlobal, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c3_y, 1, c3_c_y);
  sf_mex_assign(&c3_st, c3_y, false);
  return c3_st;
}

static void set_sim_state_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_st)
{
  const mxArray *c3_b_u;
  real_T c3_dv0[4];
  int32_T c3_i0;
  chartInstance->c3_doneDoubleBufferReInit = true;
  c3_b_u = sf_mex_dup(c3_st);
  c3_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_b_u, 0)), "u",
                      c3_dv0);
  for (c3_i0 = 0; c3_i0 < 4; c3_i0++) {
    (*chartInstance->c3_u)[c3_i0] = c3_dv0[c3_i0];
  }

  chartInstance->c3_is_active_c3_FLWSim = c3_o_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_b_u, 1)), "is_active_c3_FLWSim");
  sf_mex_destroy(&c3_b_u);
  c3_update_debugger_state_c3_FLWSim(chartInstance);
  sf_mex_destroy(&c3_st);
}

static void finalize_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance)
{
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_i3;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  for (c3_i1 = 0; c3_i1 < 6; c3_i1++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c3_GRF)[c3_i1], 2U);
  }

  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_t, 1U);
  for (c3_i2 = 0; c3_i2 < 14; c3_i2++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c3_x)[c3_i2], 0U);
  }

  chartInstance->c3_sfEvent = CALL_EVENT;
  c3_chartstep_c3_FLWSim(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_FLWSimMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  for (c3_i3 = 0; c3_i3 < 4; c3_i3++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c3_u)[c3_i3], 3U);
  }
}

static void mdl_start_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void c3_chartstep_c3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance)
{
  int32_T c3_i4;
  real_T c3_b_t;
  real_T c3_b_x[14];
  int32_T c3_i5;
  uint32_T c3_debug_family_var_map[48];
  real_T c3_b_GRF[6];
  real_T c3_q[7];
  real_T c3_dq[7];
  real_T c3_T;
  real_T c3_Kd;
  real_T c3_Kp;
  real_T c3_s;
  real_T c3_ds;
  real_T c3_stanceLeg;
  real_T c3_hr[4];
  real_T c3_dhr[4];
  real_T c3_ddhr[4];
  real_T c3_p_LT[3];
  real_T c3_p_RT[3];
  real_T c3_Jp_LT[21];
  real_T c3_Jp_RT[21];
  real_T c3_dJp_LT[21];
  real_T c3_dJp_RT[21];
  real_T c3_J_basexyz[21];
  real_T c3_rp_LT[3];
  real_T c3_rp_RT[3];
  real_T c3_Jrp_LT[21];
  real_T c3_Jrp_RT[21];
  real_T c3_dJrp_LT[21];
  real_T c3_dJrp_RT[21];
  real_T c3_M[49];
  real_T c3_C[7];
  real_T c3_G[7];
  real_T c3_B[28];
  real_T c3_q1[7];
  real_T c3_q2[7];
  real_T c3_Jh[28];
  real_T c3_dJh[28];
  real_T c3_h0[4];
  real_T c3_dh0[4];
  real_T c3_Jg[14];
  real_T c3_dJg[14];
  real_T c3_Me[81];
  real_T c3_He[9];
  real_T c3_Be[36];
  real_T c3_S[63];
  real_T c3_y[4];
  real_T c3_dy[4];
  real_T c3_nargin = 3.0;
  real_T c3_nargout = 1.0;
  real_T c3_b_u[4];
  int32_T c3_i6;
  int32_T c3_i7;
  real_T c3_A;
  real_T c3_b_A;
  real_T c3_c_u;
  real_T c3_b_y;
  real_T c3_c_x;
  real_T c3_a;
  int32_T c3_i8;
  static real_T c3_dv1[4] = { 0.0, 0.0, 0.0, 12.5 };

  int32_T c3_i9;
  real_T c3_b_q[7];
  real_T c3_dv2[3];
  int32_T c3_i10;
  int32_T c3_i11;
  real_T c3_c_q[7];
  real_T c3_dv3[3];
  int32_T c3_i12;
  int32_T c3_i13;
  real_T c3_d_q[7];
  real_T c3_dv4[21];
  int32_T c3_i14;
  int32_T c3_i15;
  real_T c3_e_q[7];
  real_T c3_dv5[21];
  int32_T c3_i16;
  int32_T c3_i17;
  int32_T c3_i18;
  real_T c3_f_q[7];
  real_T c3_b_dq[7];
  real_T c3_dv6[21];
  int32_T c3_i19;
  int32_T c3_i20;
  int32_T c3_i21;
  real_T c3_g_q[7];
  real_T c3_c_dq[7];
  real_T c3_dv7[21];
  int32_T c3_i22;
  int32_T c3_i23;
  int32_T c3_i24;
  real_T c3_h_q[7];
  real_T c3_dv8[3];
  real_T c3_i_q[3];
  int32_T c3_i25;
  int32_T c3_i26;
  real_T c3_j_q[7];
  real_T c3_k_q[3];
  int32_T c3_i27;
  int32_T c3_i28;
  real_T c3_l_q[7];
  real_T c3_dv9[21];
  int32_T c3_i29;
  int32_T c3_i30;
  real_T c3_m_q[7];
  int32_T c3_i31;
  int32_T c3_i32;
  int32_T c3_i33;
  real_T c3_n_q[7];
  real_T c3_d_dq[7];
  int32_T c3_i34;
  int32_T c3_i35;
  int32_T c3_i36;
  real_T c3_o_q[7];
  real_T c3_e_dq[7];
  int32_T c3_i37;
  int32_T c3_i38;
  real_T c3_p_q[7];
  real_T c3_dv10[49];
  int32_T c3_i39;
  int32_T c3_i40;
  int32_T c3_i41;
  real_T c3_q_q[7];
  real_T c3_f_dq[7];
  real_T c3_dv11[7];
  int32_T c3_i42;
  int32_T c3_i43;
  real_T c3_r_q[7];
  real_T c3_dv12[7];
  int32_T c3_i44;
  int32_T c3_i45;
  static real_T c3_dv13[28] = { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0 };

  int32_T c3_i46;
  int32_T c3_i47;
  int32_T c3_i48;
  int32_T c3_i49;
  real_T c3_b_q2[4];
  static int32_T c3_iv0[4] = { 5, 6, 3, 4 };

  int32_T c3_i50;
  int32_T c3_i51;
  int32_T c3_i52;
  int32_T c3_i53;
  int32_T c3_i54;
  int32_T c3_i55;
  int32_T c3_i56;
  int32_T c3_i57;
  int32_T c3_i58;
  int32_T c3_i59;
  int32_T c3_i60;
  int32_T c3_i61;
  int32_T c3_i62;
  int32_T c3_i63;
  int32_T c3_i64;
  int32_T c3_i65;
  int32_T c3_i66;
  int32_T c3_i67;
  int32_T c3_i68;
  int32_T c3_i69;
  int32_T c3_i70;
  int32_T c3_i71;
  int32_T c3_i72;
  int32_T c3_i73;
  int32_T c3_i74;
  int32_T c3_i75;
  int32_T c3_i76;
  int32_T c3_i77;
  int32_T c3_i78;
  int32_T c3_i79;
  int32_T c3_i80;
  int32_T c3_i81;
  int32_T c3_i82;
  int32_T c3_i83;
  int32_T c3_i84;
  int32_T c3_i85;
  int32_T c3_i86;
  int32_T c3_i87;
  int32_T c3_i88;
  int32_T c3_i89;
  int32_T c3_i90;
  int32_T c3_i91;
  int32_T c3_i92;
  real_T c3_b_a[28];
  int32_T c3_i93;
  int32_T c3_i94;
  real_T c3_b[7];
  int32_T c3_i95;
  int32_T c3_i96;
  int32_T c3_i97;
  int32_T c3_i98;
  int32_T c3_i99;
  int32_T c3_i100;
  int32_T c3_i101;
  int32_T c3_i102;
  int32_T c3_i103;
  int32_T c3_i104;
  int32_T c3_i105;
  int32_T c3_i106;
  int32_T c3_i107;
  int32_T c3_i108;
  int32_T c3_i109;
  int32_T c3_i110;
  int32_T c3_i111;
  int32_T c3_i112;
  int32_T c3_i113;
  int32_T c3_i114;
  int32_T c3_i115;
  int32_T c3_i116;
  int32_T c3_i117;
  int32_T c3_i118;
  int32_T c3_i119;
  int32_T c3_i120;
  int32_T c3_i121;
  int32_T c3_i122;
  int32_T c3_i123;
  int32_T c3_i124;
  int32_T c3_i125;
  int32_T c3_i126;
  int32_T c3_i127;
  int32_T c3_i128;
  int32_T c3_i129;
  int32_T c3_i130;
  int32_T c3_i131;
  int32_T c3_i132;
  int32_T c3_i133;
  int32_T c3_i134;
  int32_T c3_i135;
  int32_T c3_i136;
  int32_T c3_i137;
  int32_T c3_i138;
  real_T c3_c_a[14];
  int32_T c3_i139;
  int32_T c3_i140;
  real_T c3_d_a[2];
  int32_T c3_i141;
  int32_T c3_i142;
  int32_T c3_i143;
  int32_T c3_i144;
  static real_T c3_b_b[36] = { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0 };

  int32_T c3_i145;
  static real_T c3_c_b[63] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T c3_i146;
  int32_T c3_i147;
  int32_T c3_i148;
  int32_T c3_i149;
  real_T c3_b_Me[81];
  real_T c3_d_b[81];
  int32_T c3_i150;
  int32_T c3_i151;
  real_T c3_e_b[4];
  int32_T c3_i152;
  real_T c3_f_b[4];
  int32_T c3_i153;
  real_T c3_e_a[28];
  real_T c3_c_Me[81];
  real_T c3_g_b[81];
  int32_T c3_i154;
  int32_T c3_i155;
  real_T c3_h_b[9];
  int32_T c3_i156;
  int32_T c3_i157;
  int32_T c3_i158;
  int32_T c3_i159;
  int32_T c3_i160;
  int32_T c3_i161;
  int32_T c3_i162;
  int32_T c3_i163;
  real_T c3_f_a[36];
  real_T c3_g_a[16];
  real_T c3_h_a[16];
  int32_T c3_i164;
  int32_T c3_i165;
  int32_T c3_i166;
  int32_T c3_i167;
  int32_T c3_i168;
  int32_T c3_i169;
  real_T c3_i_a[36];
  int32_T c3_i170;
  int32_T c3_i171;
  int32_T c3_i172;
  int32_T c3_i173;
  int32_T c3_i174;
  int32_T c3_i175;
  int32_T c3_i176;
  int32_T c3_i177;
  int32_T c3_i178;
  int32_T c3_i179;
  int32_T c3_i180;
  int32_T c3_i181;
  real_T c3_j_a[36];
  int32_T c3_i182;
  real_T c3_d0;
  int32_T c3_i183;
  int32_T c3_i184;
  int32_T c3_i185;
  int32_T c3_i186;
  real_T c3_k_a[36];
  int32_T c3_i187;
  int32_T c3_i188;
  int32_T c3_i189;
  real_T c3_i_b[4];
  int32_T c3_i190;
  int32_T c3_i191;
  int32_T c3_i192;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  for (c3_i4 = 0; c3_i4 < 14; c3_i4++) {
    c3_b_x[c3_i4] = (*chartInstance->c3_x)[c3_i4];
  }

  c3_b_t = *chartInstance->c3_t;
  for (c3_i5 = 0; c3_i5 < 6; c3_i5++) {
    c3_b_GRF[c3_i5] = (*chartInstance->c3_GRF)[c3_i5];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 48U, 48U, c3_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_q, 0U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_dq, 1U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c3_T, 2U, c3_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c3_Kd, 3U, c3_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c3_Kp, 4U, c3_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_s, 5U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c3_ds, 6U, c3_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_stanceLeg, 7U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_hr, 8U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_dhr, 9U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_ddhr, 10U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_p_LT, 11U, c3_o_sf_marshallOut,
    c3_j_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_p_RT, 12U, c3_o_sf_marshallOut,
    c3_j_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_Jp_LT, 13U, c3_n_sf_marshallOut,
    c3_i_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_Jp_RT, 14U, c3_n_sf_marshallOut,
    c3_i_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_dJp_LT, 15U, c3_n_sf_marshallOut,
    c3_i_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_dJp_RT, 16U, c3_n_sf_marshallOut,
    c3_i_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_J_basexyz, 17U, c3_n_sf_marshallOut,
    c3_i_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_rp_LT, 18U, c3_o_sf_marshallOut,
    c3_j_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_rp_RT, 19U, c3_o_sf_marshallOut,
    c3_j_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_Jrp_LT, 20U, c3_n_sf_marshallOut,
    c3_i_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_Jrp_RT, 21U, c3_n_sf_marshallOut,
    c3_i_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_dJrp_LT, 22U, c3_n_sf_marshallOut,
    c3_i_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_dJrp_RT, 23U, c3_n_sf_marshallOut,
    c3_i_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_M, 24U, c3_m_sf_marshallOut,
    c3_h_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_C, 25U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_G, 26U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c3_B, 27U, c3_l_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_q1, 28U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_q2, 29U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_Jh, 30U, c3_j_sf_marshallOut,
    c3_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_dJh, 31U, c3_j_sf_marshallOut,
    c3_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_h0, 32U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_dh0, 33U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_Jg, 34U, c3_i_sf_marshallOut,
    c3_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_dJg, 35U, c3_i_sf_marshallOut,
    c3_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_Me, 36U, c3_h_sf_marshallOut,
    c3_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_He, 37U, c3_g_sf_marshallOut,
    c3_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c3_Be, 38U, c3_f_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c3_S, 39U, c3_e_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_y, 40U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_dy, 41U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 42U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 43U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c3_b_x, 44U, c3_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c3_b_t, 45U, c3_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c3_b_GRF, 46U, c3_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_b_u, 47U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 2);
  for (c3_i6 = 0; c3_i6 < 7; c3_i6++) {
    c3_q[c3_i6] = c3_b_x[c3_i6];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 3);
  for (c3_i7 = 0; c3_i7 < 7; c3_i7++) {
    c3_dq[c3_i7] = c3_b_x[c3_i7 + 7];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 5);
  c3_T = 0.4;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 6);
  c3_Kd = 50.0;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 7);
  c3_Kp = 400.0;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 8);
  c3_A = c3_rem(chartInstance, c3_b_t);
  c3_s = c3_A / 0.4;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 9);
  c3_ds = 2.5;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 11);
  c3_b_A = c3_b_t;
  c3_c_u = c3_b_A / 0.4;
  if (c3_c_u < 0.0) {
    c3_b_y = muDoubleScalarCeil(c3_c_u);
  } else {
    c3_b_y = muDoubleScalarFloor(c3_c_u);
  }

  c3_c_x = c3_mod(chartInstance, c3_b_y);
  if (muDoubleScalarIsNaN(c3_c_x)) {
    c3_error(chartInstance);
  }

  if (CV_EML_IF(0, 1, 0, c3_c_x != 0.0)) {
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 12);
    c3_stanceLeg = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 14);
    c3_stanceLeg = -1.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 19);
  c3_a = c3_s - 0.5;
  c3_hr[0] = -0.52359877559829882;
  c3_hr[1] = 0.6;
  c3_hr[2] = 0.0;
  c3_hr[3] = c3_a * c3_a + 0.35;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 20);
  c3_dhr[0] = 0.0;
  c3_dhr[1] = 0.0;
  c3_dhr[2] = 0.0;
  c3_dhr[3] = 2.0 * (c3_s - 0.5) * c3_ds;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 21);
  for (c3_i8 = 0; c3_i8 < 4; c3_i8++) {
    c3_ddhr[c3_i8] = c3_dv1[c3_i8];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 23);
  for (c3_i9 = 0; c3_i9 < 7; c3_i9++) {
    c3_b_q[c3_i9] = c3_q[c3_i9];
  }

  c3_p_LeftToe(chartInstance, c3_b_q, c3_dv2);
  for (c3_i10 = 0; c3_i10 < 3; c3_i10++) {
    c3_p_LT[c3_i10] = c3_dv2[c3_i10];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 24);
  for (c3_i11 = 0; c3_i11 < 7; c3_i11++) {
    c3_c_q[c3_i11] = c3_q[c3_i11];
  }

  c3_p_RightToe(chartInstance, c3_c_q, c3_dv3);
  for (c3_i12 = 0; c3_i12 < 3; c3_i12++) {
    c3_p_RT[c3_i12] = c3_dv3[c3_i12];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 25);
  for (c3_i13 = 0; c3_i13 < 7; c3_i13++) {
    c3_d_q[c3_i13] = c3_q[c3_i13];
  }

  c3_Jp_LeftToe(chartInstance, c3_d_q, c3_dv4);
  for (c3_i14 = 0; c3_i14 < 21; c3_i14++) {
    c3_Jp_LT[c3_i14] = c3_dv4[c3_i14];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 26);
  for (c3_i15 = 0; c3_i15 < 7; c3_i15++) {
    c3_e_q[c3_i15] = c3_q[c3_i15];
  }

  c3_Jp_RightToe(chartInstance, c3_e_q, c3_dv5);
  for (c3_i16 = 0; c3_i16 < 21; c3_i16++) {
    c3_Jp_RT[c3_i16] = c3_dv5[c3_i16];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 27);
  for (c3_i17 = 0; c3_i17 < 7; c3_i17++) {
    c3_f_q[c3_i17] = c3_q[c3_i17];
  }

  for (c3_i18 = 0; c3_i18 < 7; c3_i18++) {
    c3_b_dq[c3_i18] = c3_dq[c3_i18];
  }

  c3_dJp_LeftToe(chartInstance, c3_f_q, c3_b_dq, c3_dv6);
  for (c3_i19 = 0; c3_i19 < 21; c3_i19++) {
    c3_dJp_LT[c3_i19] = c3_dv6[c3_i19];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 28);
  for (c3_i20 = 0; c3_i20 < 7; c3_i20++) {
    c3_g_q[c3_i20] = c3_q[c3_i20];
  }

  for (c3_i21 = 0; c3_i21 < 7; c3_i21++) {
    c3_c_dq[c3_i21] = c3_dq[c3_i21];
  }

  c3_dJp_RightToe(chartInstance, c3_g_q, c3_c_dq, c3_dv7);
  for (c3_i22 = 0; c3_i22 < 21; c3_i22++) {
    c3_dJp_RT[c3_i22] = c3_dv7[c3_i22];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 31);
  for (c3_i23 = 0; c3_i23 < 21; c3_i23++) {
    c3_J_basexyz[c3_i23] = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 31);
  c3_J_basexyz[0] = 1.0;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 31);
  c3_J_basexyz[5] = 1.0;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 32);
  for (c3_i24 = 0; c3_i24 < 7; c3_i24++) {
    c3_h_q[c3_i24] = c3_q[c3_i24];
  }

  c3_p_LeftToe(chartInstance, c3_h_q, c3_dv8);
  c3_i_q[0] = c3_q[0];
  c3_i_q[1] = 0.0;
  c3_i_q[2] = c3_q[1];
  for (c3_i25 = 0; c3_i25 < 3; c3_i25++) {
    c3_rp_LT[c3_i25] = c3_i_q[c3_i25] - c3_dv8[c3_i25];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 33);
  for (c3_i26 = 0; c3_i26 < 7; c3_i26++) {
    c3_j_q[c3_i26] = c3_q[c3_i26];
  }

  c3_p_RightToe(chartInstance, c3_j_q, c3_dv8);
  c3_k_q[0] = c3_q[0];
  c3_k_q[1] = 0.0;
  c3_k_q[2] = c3_q[1];
  for (c3_i27 = 0; c3_i27 < 3; c3_i27++) {
    c3_rp_RT[c3_i27] = c3_k_q[c3_i27] - c3_dv8[c3_i27];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 34);
  for (c3_i28 = 0; c3_i28 < 7; c3_i28++) {
    c3_l_q[c3_i28] = c3_q[c3_i28];
  }

  c3_Jp_LeftToe(chartInstance, c3_l_q, c3_dv9);
  for (c3_i29 = 0; c3_i29 < 21; c3_i29++) {
    c3_Jrp_LT[c3_i29] = c3_J_basexyz[c3_i29] - c3_dv9[c3_i29];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 35);
  for (c3_i30 = 0; c3_i30 < 7; c3_i30++) {
    c3_m_q[c3_i30] = c3_q[c3_i30];
  }

  c3_Jp_RightToe(chartInstance, c3_m_q, c3_dv9);
  for (c3_i31 = 0; c3_i31 < 21; c3_i31++) {
    c3_Jrp_RT[c3_i31] = c3_J_basexyz[c3_i31] - c3_dv9[c3_i31];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 36);
  for (c3_i32 = 0; c3_i32 < 7; c3_i32++) {
    c3_n_q[c3_i32] = c3_q[c3_i32];
  }

  for (c3_i33 = 0; c3_i33 < 7; c3_i33++) {
    c3_d_dq[c3_i33] = c3_dq[c3_i33];
  }

  c3_dJp_LeftToe(chartInstance, c3_n_q, c3_d_dq, c3_dv9);
  for (c3_i34 = 0; c3_i34 < 21; c3_i34++) {
    c3_dJrp_LT[c3_i34] = -c3_dv9[c3_i34];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 37);
  for (c3_i35 = 0; c3_i35 < 7; c3_i35++) {
    c3_o_q[c3_i35] = c3_q[c3_i35];
  }

  for (c3_i36 = 0; c3_i36 < 7; c3_i36++) {
    c3_e_dq[c3_i36] = c3_dq[c3_i36];
  }

  c3_dJp_RightToe(chartInstance, c3_o_q, c3_e_dq, c3_dv9);
  for (c3_i37 = 0; c3_i37 < 21; c3_i37++) {
    c3_dJrp_RT[c3_i37] = -c3_dv9[c3_i37];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 39);
  for (c3_i38 = 0; c3_i38 < 7; c3_i38++) {
    c3_p_q[c3_i38] = c3_q[c3_i38];
  }

  c3_InertiaMatrix(chartInstance, c3_p_q, c3_dv10);
  for (c3_i39 = 0; c3_i39 < 49; c3_i39++) {
    c3_M[c3_i39] = c3_dv10[c3_i39];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 40);
  for (c3_i40 = 0; c3_i40 < 7; c3_i40++) {
    c3_q_q[c3_i40] = c3_q[c3_i40];
  }

  for (c3_i41 = 0; c3_i41 < 7; c3_i41++) {
    c3_f_dq[c3_i41] = c3_dq[c3_i41];
  }

  c3_CoriolisTerm(chartInstance, c3_q_q, c3_f_dq, c3_dv11);
  for (c3_i42 = 0; c3_i42 < 7; c3_i42++) {
    c3_C[c3_i42] = c3_dv11[c3_i42];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 41);
  for (c3_i43 = 0; c3_i43 < 7; c3_i43++) {
    c3_r_q[c3_i43] = c3_q[c3_i43];
  }

  c3_GravityVector(chartInstance, c3_r_q, c3_dv12);
  for (c3_i44 = 0; c3_i44 < 7; c3_i44++) {
    c3_G[c3_i44] = c3_dv12[c3_i44];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 42);
  for (c3_i45 = 0; c3_i45 < 28; c3_i45++) {
    c3_B[c3_i45] = c3_dv13[c3_i45];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 44);
  for (c3_i46 = 0; c3_i46 < 7; c3_i46++) {
    c3_q1[c3_i46] = c3_q[c3_i46];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 45);
  for (c3_i47 = 0; c3_i47 < 7; c3_i47++) {
    c3_q2[c3_i47] = c3_q1[c3_i47];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 45);
  for (c3_i48 = 0; c3_i48 < 4; c3_i48++) {
    c3_b_q2[c3_i48] = c3_q2[c3_iv0[c3_i48]];
  }

  for (c3_i49 = 0; c3_i49 < 4; c3_i49++) {
    c3_q2[c3_i49 + 3] = c3_b_q2[c3_i49];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 47);
  if (CV_EML_IF(0, 1, 1, CV_RELATIONAL_EVAL(4U, 0U, 0, c3_stanceLeg, -1.0, -1,
        0U, c3_stanceLeg == -1.0))) {
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 49);
    for (c3_i51 = 0; c3_i51 < 28; c3_i51++) {
      c3_Jh[c3_i51] = 0.0;
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 50);
    for (c3_i53 = 0; c3_i53 < 28; c3_i53++) {
      c3_dJh[c3_i53] = 0.0;
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 52);
    c3_Jh[8] = 1.0;
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 53);
    c3_i55 = 0;
    c3_i57 = 0;
    for (c3_i59 = 0; c3_i59 < 7; c3_i59++) {
      c3_Jh[c3_i55 + 1] = c3_Jrp_LT[c3_i57 + 2];
      c3_i55 += 4;
      c3_i57 += 3;
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 54);
    c3_i61 = 0;
    c3_i63 = 0;
    for (c3_i65 = 0; c3_i65 < 7; c3_i65++) {
      c3_i67 = 0;
      for (c3_i71 = 0; c3_i71 < 2; c3_i71++) {
        c3_Jh[(c3_i71 + c3_i61) + 2] = c3_Jrp_RT[c3_i67 + c3_i63];
        c3_i67 += 2;
      }

      c3_i61 += 4;
      c3_i63 += 3;
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 56);
    c3_i70 = 0;
    c3_i73 = 0;
    for (c3_i75 = 0; c3_i75 < 7; c3_i75++) {
      c3_dJh[c3_i70 + 1] = c3_dJrp_LT[c3_i73 + 2];
      c3_i70 += 4;
      c3_i73 += 3;
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 57);
    c3_i77 = 0;
    c3_i79 = 0;
    for (c3_i81 = 0; c3_i81 < 7; c3_i81++) {
      c3_i83 = 0;
      for (c3_i85 = 0; c3_i85 < 2; c3_i85++) {
        c3_dJh[(c3_i85 + c3_i77) + 2] = c3_dJrp_RT[c3_i83 + c3_i79];
        c3_i83 += 2;
      }

      c3_i77 += 4;
      c3_i79 += 3;
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 59);
    c3_h0[0] = c3_q[2];
    c3_h0[1] = c3_rp_LT[2];
    c3_i87 = 0;
    for (c3_i89 = 0; c3_i89 < 2; c3_i89++) {
      c3_h0[c3_i89 + 2] = c3_rp_RT[c3_i87];
      c3_i87 += 2;
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 60);
    for (c3_i91 = 0; c3_i91 < 28; c3_i91++) {
      c3_b_a[c3_i91] = c3_Jh[c3_i91];
    }

    for (c3_i93 = 0; c3_i93 < 7; c3_i93++) {
      c3_b[c3_i93] = c3_dq[c3_i93];
    }

    for (c3_i95 = 0; c3_i95 < 4; c3_i95++) {
      c3_dh0[c3_i95] = 0.0;
    }

    for (c3_i97 = 0; c3_i97 < 4; c3_i97++) {
      c3_dh0[c3_i97] = 0.0;
      c3_i101 = 0;
      for (c3_i105 = 0; c3_i105 < 7; c3_i105++) {
        c3_dh0[c3_i97] += c3_b_a[c3_i101 + c3_i97] * c3_b[c3_i105];
        c3_i101 += 4;
      }
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 62);
    c3_i100 = 0;
    c3_i104 = 0;
    for (c3_i107 = 0; c3_i107 < 7; c3_i107++) {
      c3_i109 = 0;
      for (c3_i113 = 0; c3_i113 < 2; c3_i113++) {
        c3_Jg[c3_i113 + c3_i100] = c3_Jp_LT[c3_i109 + c3_i104];
        c3_i109 += 2;
      }

      c3_i100 += 2;
      c3_i104 += 3;
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 63);
    c3_i112 = 0;
    c3_i115 = 0;
    for (c3_i117 = 0; c3_i117 < 7; c3_i117++) {
      c3_i119 = 0;
      for (c3_i121 = 0; c3_i121 < 2; c3_i121++) {
        c3_dJg[c3_i121 + c3_i112] = c3_dJp_LT[c3_i119 + c3_i115];
        c3_i119 += 2;
      }

      c3_i112 += 2;
      c3_i115 += 3;
    }
  } else {
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 67);
    for (c3_i50 = 0; c3_i50 < 28; c3_i50++) {
      c3_Jh[c3_i50] = 0.0;
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 68);
    for (c3_i52 = 0; c3_i52 < 28; c3_i52++) {
      c3_dJh[c3_i52] = 0.0;
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 70);
    c3_Jh[8] = 1.0;
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 71);
    c3_i54 = 0;
    c3_i56 = 0;
    for (c3_i58 = 0; c3_i58 < 7; c3_i58++) {
      c3_Jh[c3_i54 + 1] = c3_Jrp_RT[c3_i56 + 2];
      c3_i54 += 4;
      c3_i56 += 3;
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 72);
    c3_i60 = 0;
    c3_i62 = 0;
    for (c3_i64 = 0; c3_i64 < 7; c3_i64++) {
      c3_i66 = 0;
      for (c3_i69 = 0; c3_i69 < 2; c3_i69++) {
        c3_Jh[(c3_i69 + c3_i60) + 2] = c3_Jrp_LT[c3_i66 + c3_i62];
        c3_i66 += 2;
      }

      c3_i60 += 4;
      c3_i62 += 3;
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 74);
    c3_i68 = 0;
    c3_i72 = 0;
    for (c3_i74 = 0; c3_i74 < 7; c3_i74++) {
      c3_dJh[c3_i68 + 1] = c3_dJrp_RT[c3_i72 + 2];
      c3_i68 += 4;
      c3_i72 += 3;
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 75);
    c3_i76 = 0;
    c3_i78 = 0;
    for (c3_i80 = 0; c3_i80 < 7; c3_i80++) {
      c3_i82 = 0;
      for (c3_i84 = 0; c3_i84 < 2; c3_i84++) {
        c3_dJh[(c3_i84 + c3_i76) + 2] = c3_dJrp_LT[c3_i82 + c3_i78];
        c3_i82 += 2;
      }

      c3_i76 += 4;
      c3_i78 += 3;
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 77);
    c3_h0[0] = c3_q[2];
    c3_h0[1] = c3_rp_RT[2];
    c3_i86 = 0;
    for (c3_i88 = 0; c3_i88 < 2; c3_i88++) {
      c3_h0[c3_i88 + 2] = c3_rp_LT[c3_i86];
      c3_i86 += 2;
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 78);
    for (c3_i90 = 0; c3_i90 < 28; c3_i90++) {
      c3_b_a[c3_i90] = c3_Jh[c3_i90];
    }

    for (c3_i92 = 0; c3_i92 < 7; c3_i92++) {
      c3_b[c3_i92] = c3_dq[c3_i92];
    }

    for (c3_i94 = 0; c3_i94 < 4; c3_i94++) {
      c3_dh0[c3_i94] = 0.0;
    }

    for (c3_i96 = 0; c3_i96 < 4; c3_i96++) {
      c3_dh0[c3_i96] = 0.0;
      c3_i99 = 0;
      for (c3_i103 = 0; c3_i103 < 7; c3_i103++) {
        c3_dh0[c3_i96] += c3_b_a[c3_i99 + c3_i96] * c3_b[c3_i103];
        c3_i99 += 4;
      }
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 80);
    c3_i98 = 0;
    c3_i102 = 0;
    for (c3_i106 = 0; c3_i106 < 7; c3_i106++) {
      c3_i108 = 0;
      for (c3_i111 = 0; c3_i111 < 2; c3_i111++) {
        c3_Jg[c3_i111 + c3_i98] = c3_Jp_RT[c3_i108 + c3_i102];
        c3_i108 += 2;
      }

      c3_i98 += 2;
      c3_i102 += 3;
    }

    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 81);
    c3_i110 = 0;
    c3_i114 = 0;
    for (c3_i116 = 0; c3_i116 < 7; c3_i116++) {
      c3_i118 = 0;
      for (c3_i120 = 0; c3_i120 < 2; c3_i120++) {
        c3_dJg[c3_i120 + c3_i110] = c3_dJp_RT[c3_i118 + c3_i114];
        c3_i118 += 2;
      }

      c3_i110 += 2;
      c3_i114 += 3;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 85);
  c3_i122 = 0;
  c3_i123 = 0;
  for (c3_i124 = 0; c3_i124 < 7; c3_i124++) {
    for (c3_i126 = 0; c3_i126 < 7; c3_i126++) {
      c3_Me[c3_i126 + c3_i122] = c3_M[c3_i126 + c3_i123];
    }

    c3_i122 += 9;
    c3_i123 += 7;
  }

  c3_i125 = 0;
  for (c3_i127 = 0; c3_i127 < 2; c3_i127++) {
    c3_i129 = 0;
    for (c3_i131 = 0; c3_i131 < 7; c3_i131++) {
      c3_Me[(c3_i131 + c3_i125) + 63] = -c3_Jg[c3_i129 + c3_i127];
      c3_i129 += 2;
    }

    c3_i125 += 9;
  }

  c3_i128 = 0;
  c3_i130 = 0;
  for (c3_i132 = 0; c3_i132 < 7; c3_i132++) {
    for (c3_i134 = 0; c3_i134 < 2; c3_i134++) {
      c3_Me[(c3_i134 + c3_i128) + 7] = c3_Jg[c3_i134 + c3_i130];
    }

    c3_i128 += 9;
    c3_i130 += 2;
  }

  c3_i133 = 0;
  for (c3_i135 = 0; c3_i135 < 2; c3_i135++) {
    for (c3_i136 = 0; c3_i136 < 2; c3_i136++) {
      c3_Me[(c3_i136 + c3_i133) + 70] = 0.0;
    }

    c3_i133 += 9;
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 86);
  for (c3_i137 = 0; c3_i137 < 14; c3_i137++) {
    c3_c_a[c3_i137] = c3_dJg[c3_i137];
  }

  for (c3_i138 = 0; c3_i138 < 7; c3_i138++) {
    c3_b[c3_i138] = c3_dq[c3_i138];
  }

  for (c3_i139 = 0; c3_i139 < 2; c3_i139++) {
    c3_d_a[c3_i139] = 0.0;
    c3_i141 = 0;
    for (c3_i142 = 0; c3_i142 < 7; c3_i142++) {
      c3_d_a[c3_i139] += c3_c_a[c3_i141 + c3_i139] * c3_b[c3_i142];
      c3_i141 += 2;
    }
  }

  for (c3_i140 = 0; c3_i140 < 7; c3_i140++) {
    c3_He[c3_i140] = c3_C[c3_i140] + c3_G[c3_i140];
  }

  for (c3_i143 = 0; c3_i143 < 2; c3_i143++) {
    c3_He[c3_i143 + 7] = c3_d_a[c3_i143];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 87);
  for (c3_i144 = 0; c3_i144 < 36; c3_i144++) {
    c3_Be[c3_i144] = c3_b_b[c3_i144];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 89);
  for (c3_i145 = 0; c3_i145 < 63; c3_i145++) {
    c3_S[c3_i145] = c3_c_b[c3_i145];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 91);
  for (c3_i146 = 0; c3_i146 < 4; c3_i146++) {
    c3_y[c3_i146] = c3_h0[c3_i146] - c3_hr[c3_i146];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 92);
  for (c3_i147 = 0; c3_i147 < 4; c3_i147++) {
    c3_dy[c3_i147] = c3_dh0[c3_i147] - c3_dhr[c3_i147];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 94);
  for (c3_i148 = 0; c3_i148 < 28; c3_i148++) {
    c3_b_a[c3_i148] = c3_Jh[c3_i148];
  }

  for (c3_i149 = 0; c3_i149 < 81; c3_i149++) {
    c3_b_Me[c3_i149] = c3_Me[c3_i149];
  }

  c3_mpower(chartInstance, c3_b_Me, c3_d_b);
  for (c3_i150 = 0; c3_i150 < 4; c3_i150++) {
    c3_e_b[c3_i150] = c3_dy[c3_i150];
  }

  for (c3_i151 = 0; c3_i151 < 4; c3_i151++) {
    c3_f_b[c3_i151] = c3_y[c3_i151];
  }

  for (c3_i152 = 0; c3_i152 < 28; c3_i152++) {
    c3_e_a[c3_i152] = c3_Jh[c3_i152];
  }

  for (c3_i153 = 0; c3_i153 < 81; c3_i153++) {
    c3_c_Me[c3_i153] = c3_Me[c3_i153];
  }

  c3_mpower(chartInstance, c3_c_Me, c3_g_b);
  for (c3_i154 = 0; c3_i154 < 9; c3_i154++) {
    c3_h_b[c3_i154] = c3_He[c3_i154];
  }

  for (c3_i155 = 0; c3_i155 < 4; c3_i155++) {
    c3_i157 = 0;
    c3_i158 = 0;
    for (c3_i159 = 0; c3_i159 < 9; c3_i159++) {
      c3_f_a[c3_i157 + c3_i155] = 0.0;
      c3_i165 = 0;
      for (c3_i168 = 0; c3_i168 < 7; c3_i168++) {
        c3_f_a[c3_i157 + c3_i155] += c3_b_a[c3_i165 + c3_i155] * c3_c_b[c3_i168
          + c3_i158];
        c3_i165 += 4;
      }

      c3_i157 += 4;
      c3_i158 += 7;
    }
  }

  for (c3_i156 = 0; c3_i156 < 4; c3_i156++) {
    c3_i161 = 0;
    c3_i162 = 0;
    for (c3_i163 = 0; c3_i163 < 9; c3_i163++) {
      c3_i_a[c3_i161 + c3_i156] = 0.0;
      c3_i170 = 0;
      for (c3_i173 = 0; c3_i173 < 9; c3_i173++) {
        c3_i_a[c3_i161 + c3_i156] += c3_f_a[c3_i170 + c3_i156] * c3_d_b[c3_i173
          + c3_i162];
        c3_i170 += 4;
      }

      c3_i161 += 4;
      c3_i162 += 9;
    }
  }

  for (c3_i160 = 0; c3_i160 < 4; c3_i160++) {
    c3_i164 = 0;
    c3_i167 = 0;
    for (c3_i169 = 0; c3_i169 < 4; c3_i169++) {
      c3_g_a[c3_i164 + c3_i160] = 0.0;
      c3_i176 = 0;
      for (c3_i179 = 0; c3_i179 < 9; c3_i179++) {
        c3_g_a[c3_i164 + c3_i160] += c3_i_a[c3_i176 + c3_i160] * c3_b_b[c3_i179
          + c3_i167];
        c3_i176 += 4;
      }

      c3_i164 += 4;
      c3_i167 += 9;
    }
  }

  c3_b_mpower(chartInstance, c3_g_a, c3_h_a);
  for (c3_i166 = 0; c3_i166 < 4; c3_i166++) {
    c3_i172 = 0;
    c3_i174 = 0;
    for (c3_i175 = 0; c3_i175 < 9; c3_i175++) {
      c3_j_a[c3_i172 + c3_i166] = 0.0;
      c3_i183 = 0;
      for (c3_i185 = 0; c3_i185 < 7; c3_i185++) {
        c3_j_a[c3_i172 + c3_i166] += c3_e_a[c3_i183 + c3_i166] * c3_c_b[c3_i185
          + c3_i174];
        c3_i183 += 4;
      }

      c3_i172 += 4;
      c3_i174 += 7;
    }
  }

  for (c3_i171 = 0; c3_i171 < 4; c3_i171++) {
    c3_i178 = 0;
    c3_i180 = 0;
    for (c3_i181 = 0; c3_i181 < 9; c3_i181++) {
      c3_k_a[c3_i178 + c3_i171] = 0.0;
      c3_i188 = 0;
      for (c3_i189 = 0; c3_i189 < 9; c3_i189++) {
        c3_k_a[c3_i178 + c3_i171] += c3_j_a[c3_i188 + c3_i171] * c3_g_b[c3_i189
          + c3_i180];
        c3_i188 += 4;
      }

      c3_i178 += 4;
      c3_i180 += 9;
    }
  }

  for (c3_i177 = 0; c3_i177 < 4; c3_i177++) {
    c3_d0 = 0.0;
    c3_i184 = 0;
    for (c3_i186 = 0; c3_i186 < 9; c3_i186++) {
      c3_d0 += c3_k_a[c3_i184 + c3_i177] * c3_h_b[c3_i186];
      c3_i184 += 4;
    }

    c3_i_b[c3_i177] = ((-50.0 * c3_e_b[c3_i177] - 400.0 * c3_f_b[c3_i177]) +
                       c3_ddhr[c3_i177]) + c3_d0;
  }

  for (c3_i182 = 0; c3_i182 < 4; c3_i182++) {
    c3_b_u[c3_i182] = 0.0;
  }

  for (c3_i187 = 0; c3_i187 < 4; c3_i187++) {
    c3_b_u[c3_i187] = 0.0;
    c3_i190 = 0;
    for (c3_i192 = 0; c3_i192 < 4; c3_i192++) {
      c3_b_u[c3_i187] += c3_h_a[c3_i190 + c3_i187] * c3_i_b[c3_i192];
      c3_i190 += 4;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, -94);
  _SFD_SYMBOL_SCOPE_POP();
  for (c3_i191 = 0; c3_i191 < 4; c3_i191++) {
    (*chartInstance->c3_u)[c3_i191] = c3_b_u[c3_i191];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
}

static void initSimStructsc3_FLWSim(SFc3_FLWSimInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c3_p_LeftToe(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_output1[3])
{
  uint32_T c3_debug_family_var_map[4];
  real_T c3_nargin = 1.0;
  real_T c3_nargout = 1.0;
  int32_T c3_i193;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c3_b_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_var1, 2U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_output1, 3U, c3_o_sf_marshallOut,
    c3_j_sf_marshallIn);
  CV_SCRIPT_FCN(0, 0);
  _SFD_SCRIPT_CALL(0U, chartInstance->c3_sfEvent, 2);
  CV_SCRIPT_IF(0, 0, false);
  _SFD_SCRIPT_CALL(0U, chartInstance->c3_sfEvent, 5);
  _SFD_SCRIPT_CALL(0U, chartInstance->c3_sfEvent, 7);
  for (c3_i193 = 0; c3_i193 < 3; c3_i193++) {
    c3_output1[c3_i193] = 0.0;
  }

  _SFD_SCRIPT_CALL(0U, chartInstance->c3_sfEvent, 10);
  p_LeftToe_src(c3_output1, c3_var1);
  _SFD_SCRIPT_CALL(0U, chartInstance->c3_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_p_RightToe(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_output1[3])
{
  uint32_T c3_debug_family_var_map[4];
  real_T c3_nargin = 1.0;
  real_T c3_nargout = 1.0;
  int32_T c3_i194;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c3_c_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_var1, 2U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_output1, 3U, c3_o_sf_marshallOut,
    c3_j_sf_marshallIn);
  CV_SCRIPT_FCN(1, 0);
  _SFD_SCRIPT_CALL(1U, chartInstance->c3_sfEvent, 2);
  CV_SCRIPT_IF(1, 0, false);
  _SFD_SCRIPT_CALL(1U, chartInstance->c3_sfEvent, 5);
  _SFD_SCRIPT_CALL(1U, chartInstance->c3_sfEvent, 7);
  for (c3_i194 = 0; c3_i194 < 3; c3_i194++) {
    c3_output1[c3_i194] = 0.0;
  }

  _SFD_SCRIPT_CALL(1U, chartInstance->c3_sfEvent, 10);
  p_RightToe_src(c3_output1, c3_var1);
  _SFD_SCRIPT_CALL(1U, chartInstance->c3_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_Jp_LeftToe(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_output1[21])
{
  uint32_T c3_debug_family_var_map[4];
  real_T c3_nargin = 1.0;
  real_T c3_nargout = 1.0;
  int32_T c3_i195;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c3_d_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_var1, 2U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_output1, 3U, c3_n_sf_marshallOut,
    c3_i_sf_marshallIn);
  CV_SCRIPT_FCN(2, 0);
  _SFD_SCRIPT_CALL(2U, chartInstance->c3_sfEvent, 2);
  CV_SCRIPT_IF(2, 0, false);
  _SFD_SCRIPT_CALL(2U, chartInstance->c3_sfEvent, 5);
  _SFD_SCRIPT_CALL(2U, chartInstance->c3_sfEvent, 7);
  for (c3_i195 = 0; c3_i195 < 21; c3_i195++) {
    c3_output1[c3_i195] = 0.0;
  }

  _SFD_SCRIPT_CALL(2U, chartInstance->c3_sfEvent, 10);
  Jp_LeftToe_src(c3_output1, c3_var1);
  _SFD_SCRIPT_CALL(2U, chartInstance->c3_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_Jp_RightToe(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_output1[21])
{
  uint32_T c3_debug_family_var_map[4];
  real_T c3_nargin = 1.0;
  real_T c3_nargout = 1.0;
  int32_T c3_i196;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c3_e_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_var1, 2U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_output1, 3U, c3_n_sf_marshallOut,
    c3_i_sf_marshallIn);
  CV_SCRIPT_FCN(3, 0);
  _SFD_SCRIPT_CALL(3U, chartInstance->c3_sfEvent, 2);
  CV_SCRIPT_IF(3, 0, false);
  _SFD_SCRIPT_CALL(3U, chartInstance->c3_sfEvent, 5);
  _SFD_SCRIPT_CALL(3U, chartInstance->c3_sfEvent, 7);
  for (c3_i196 = 0; c3_i196 < 21; c3_i196++) {
    c3_output1[c3_i196] = 0.0;
  }

  _SFD_SCRIPT_CALL(3U, chartInstance->c3_sfEvent, 10);
  Jp_RightToe_src(c3_output1, c3_var1);
  _SFD_SCRIPT_CALL(3U, chartInstance->c3_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_dJp_LeftToe(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_var2[7], real_T c3_output1[21])
{
  uint32_T c3_debug_family_var_map[5];
  real_T c3_nargin = 2.0;
  real_T c3_nargout = 1.0;
  int32_T c3_i197;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 5U, 5U, c3_f_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_var1, 2U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_var2, 3U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_output1, 4U, c3_n_sf_marshallOut,
    c3_i_sf_marshallIn);
  CV_SCRIPT_FCN(4, 0);
  _SFD_SCRIPT_CALL(4U, chartInstance->c3_sfEvent, 2);
  CV_SCRIPT_IF(4, 0, false);
  _SFD_SCRIPT_CALL(4U, chartInstance->c3_sfEvent, 5);
  _SFD_SCRIPT_CALL(4U, chartInstance->c3_sfEvent, 7);
  for (c3_i197 = 0; c3_i197 < 21; c3_i197++) {
    c3_output1[c3_i197] = 0.0;
  }

  _SFD_SCRIPT_CALL(4U, chartInstance->c3_sfEvent, 10);
  dJp_LeftToe_src(c3_output1, c3_var1, c3_var2);
  _SFD_SCRIPT_CALL(4U, chartInstance->c3_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_dJp_RightToe(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_var2[7], real_T c3_output1[21])
{
  uint32_T c3_debug_family_var_map[5];
  real_T c3_nargin = 2.0;
  real_T c3_nargout = 1.0;
  int32_T c3_i198;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 5U, 5U, c3_g_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_var1, 2U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_var2, 3U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_output1, 4U, c3_n_sf_marshallOut,
    c3_i_sf_marshallIn);
  CV_SCRIPT_FCN(5, 0);
  _SFD_SCRIPT_CALL(5U, chartInstance->c3_sfEvent, 2);
  CV_SCRIPT_IF(5, 0, false);
  _SFD_SCRIPT_CALL(5U, chartInstance->c3_sfEvent, 5);
  _SFD_SCRIPT_CALL(5U, chartInstance->c3_sfEvent, 7);
  for (c3_i198 = 0; c3_i198 < 21; c3_i198++) {
    c3_output1[c3_i198] = 0.0;
  }

  _SFD_SCRIPT_CALL(5U, chartInstance->c3_sfEvent, 10);
  dJp_RightToe_src(c3_output1, c3_var1, c3_var2);
  _SFD_SCRIPT_CALL(5U, chartInstance->c3_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_InertiaMatrix(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_output1[49])
{
  uint32_T c3_debug_family_var_map[4];
  real_T c3_nargin = 1.0;
  real_T c3_nargout = 1.0;
  int32_T c3_i199;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c3_h_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_var1, 2U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_output1, 3U, c3_m_sf_marshallOut,
    c3_h_sf_marshallIn);
  CV_SCRIPT_FCN(6, 0);
  _SFD_SCRIPT_CALL(6U, chartInstance->c3_sfEvent, 2);
  CV_SCRIPT_IF(6, 0, false);
  _SFD_SCRIPT_CALL(6U, chartInstance->c3_sfEvent, 5);
  _SFD_SCRIPT_CALL(6U, chartInstance->c3_sfEvent, 7);
  for (c3_i199 = 0; c3_i199 < 49; c3_i199++) {
    c3_output1[c3_i199] = 0.0;
  }

  _SFD_SCRIPT_CALL(6U, chartInstance->c3_sfEvent, 10);
  InertiaMatrix_src(c3_output1, c3_var1);
  _SFD_SCRIPT_CALL(6U, chartInstance->c3_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_CoriolisTerm(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_var2[7], real_T c3_output1[7])
{
  uint32_T c3_debug_family_var_map[5];
  real_T c3_nargin = 2.0;
  real_T c3_nargout = 1.0;
  int32_T c3_i200;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 5U, 5U, c3_i_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_var1, 2U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_var2, 3U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_output1, 4U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  CV_SCRIPT_FCN(7, 0);
  _SFD_SCRIPT_CALL(7U, chartInstance->c3_sfEvent, 2);
  CV_SCRIPT_IF(7, 0, false);
  _SFD_SCRIPT_CALL(7U, chartInstance->c3_sfEvent, 5);
  _SFD_SCRIPT_CALL(7U, chartInstance->c3_sfEvent, 7);
  for (c3_i200 = 0; c3_i200 < 7; c3_i200++) {
    c3_output1[c3_i200] = 0.0;
  }

  _SFD_SCRIPT_CALL(7U, chartInstance->c3_sfEvent, 10);
  CoriolisTerm_src(c3_output1, c3_var1, c3_var2);
  _SFD_SCRIPT_CALL(7U, chartInstance->c3_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_GravityVector(SFc3_FLWSimInstanceStruct *chartInstance, real_T
  c3_var1[7], real_T c3_output1[7])
{
  uint32_T c3_debug_family_var_map[4];
  real_T c3_nargin = 1.0;
  real_T c3_nargout = 1.0;
  int32_T c3_i201;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c3_j_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_c_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_var1, 2U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_output1, 3U, c3_k_sf_marshallOut,
    c3_g_sf_marshallIn);
  CV_SCRIPT_FCN(8, 0);
  _SFD_SCRIPT_CALL(8U, chartInstance->c3_sfEvent, 2);
  CV_SCRIPT_IF(8, 0, false);
  _SFD_SCRIPT_CALL(8U, chartInstance->c3_sfEvent, 5);
  _SFD_SCRIPT_CALL(8U, chartInstance->c3_sfEvent, 7);
  for (c3_i201 = 0; c3_i201 < 7; c3_i201++) {
    c3_output1[c3_i201] = 0.0;
  }

  _SFD_SCRIPT_CALL(8U, chartInstance->c3_sfEvent, 10);
  GravityVector_src(c3_output1, c3_var1);
  _SFD_SCRIPT_CALL(8U, chartInstance->c3_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
}

static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber, uint32_T c3_instanceNumber)
{
  (void)(c3_machineNumber);
  (void)(c3_chartNumber);
  (void)(c3_instanceNumber);
  _SFD_SCRIPT_TRANSLATION(c3_chartNumber, c3_instanceNumber, 0U,
    sf_debug_get_script_id(
    "D:\\Dropbox (DynamicLegLocomotion)\\robots\\codes\\SimpleModels\\FiveLinkWalker\\Simulation\\Model\\kin\\m\\p_LeftToe.m"));
  _SFD_SCRIPT_TRANSLATION(c3_chartNumber, c3_instanceNumber, 1U,
    sf_debug_get_script_id(
    "D:\\Dropbox (DynamicLegLocomotion)\\robots\\codes\\SimpleModels\\FiveLinkWalker\\Simulation\\Model\\kin\\m\\p_RightToe.m"));
  _SFD_SCRIPT_TRANSLATION(c3_chartNumber, c3_instanceNumber, 2U,
    sf_debug_get_script_id(
    "D:\\Dropbox (DynamicLegLocomotion)\\robots\\codes\\SimpleModels\\FiveLinkWalker\\Simulation\\Model\\kin\\m\\Jp_LeftToe.m"));
  _SFD_SCRIPT_TRANSLATION(c3_chartNumber, c3_instanceNumber, 3U,
    sf_debug_get_script_id(
    "D:\\Dropbox (DynamicLegLocomotion)\\robots\\codes\\SimpleModels\\FiveLinkWalker\\Simulation\\Model\\kin\\m\\Jp_RightToe.m"));
  _SFD_SCRIPT_TRANSLATION(c3_chartNumber, c3_instanceNumber, 4U,
    sf_debug_get_script_id(
    "D:\\Dropbox (DynamicLegLocomotion)\\robots\\codes\\SimpleModels\\FiveLinkWalker\\Simulation\\Model\\kin\\m\\dJp_LeftToe.m"));
  _SFD_SCRIPT_TRANSLATION(c3_chartNumber, c3_instanceNumber, 5U,
    sf_debug_get_script_id(
    "D:\\Dropbox (DynamicLegLocomotion)\\robots\\codes\\SimpleModels\\FiveLinkWalker\\Simulation\\Model\\kin\\m\\dJp_RightToe.m"));
  _SFD_SCRIPT_TRANSLATION(c3_chartNumber, c3_instanceNumber, 6U,
    sf_debug_get_script_id(
    "D:\\Dropbox (DynamicLegLocomotion)\\robots\\codes\\SimpleModels\\FiveLinkWalker\\Simulation\\Model\\dyn\\m\\InertiaMatrix.m"));
  _SFD_SCRIPT_TRANSLATION(c3_chartNumber, c3_instanceNumber, 7U,
    sf_debug_get_script_id(
    "D:\\Dropbox (DynamicLegLocomotion)\\robots\\codes\\SimpleModels\\FiveLinkWalker\\Simulation\\Model\\dyn\\m\\CoriolisTerm.m"));
  _SFD_SCRIPT_TRANSLATION(c3_chartNumber, c3_instanceNumber, 8U,
    sf_debug_get_script_id(
    "D:\\Dropbox (DynamicLegLocomotion)\\robots\\codes\\SimpleModels\\FiveLinkWalker\\Simulation\\Model\\dyn\\m\\GravityVector.m"));
}

static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i202;
  const mxArray *c3_y = NULL;
  real_T c3_b_u[4];
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  for (c3_i202 = 0; c3_i202 < 4; c3_i202++) {
    c3_b_u[c3_i202] = (*(real_T (*)[4])c3_inData)[c3_i202];
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_u, 0, 0U, 1U, 0U, 1, 4), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static void c3_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance, const
  mxArray *c3_b_u, const char_T *c3_identifier, real_T c3_y[4])
{
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = (const char *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_u), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_b_u);
}

static void c3_b_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[4])
{
  real_T c3_dv14[4];
  int32_T c3_i203;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_b_u), c3_dv14, 1, 0, 0U, 1, 0U, 1, 4);
  for (c3_i203 = 0; c3_i203 < 4; c3_i203++) {
    c3_y[c3_i203] = c3_dv14[c3_i203];
  }

  sf_mex_destroy(&c3_b_u);
}

static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_u;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y[4];
  int32_T c3_i204;
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_b_u = sf_mex_dup(c3_mxArrayInData);
  c3_thisId.fIdentifier = (const char *)c3_varName;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_u), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_b_u);
  for (c3_i204 = 0; c3_i204 < 4; c3_i204++) {
    (*(real_T (*)[4])c3_outData)[c3_i204] = c3_y[c3_i204];
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i205;
  const mxArray *c3_y = NULL;
  real_T c3_b_u[6];
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  for (c3_i205 = 0; c3_i205 < 6; c3_i205++) {
    c3_b_u[c3_i205] = (*(real_T (*)[6])c3_inData)[c3_i205];
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_u, 0, 0U, 1U, 0U, 1, 6), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  real_T c3_b_u;
  const mxArray *c3_y = NULL;
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_b_u = *(real_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_b_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static const mxArray *c3_d_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i206;
  const mxArray *c3_y = NULL;
  real_T c3_b_u[14];
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  for (c3_i206 = 0; c3_i206 < 14; c3_i206++) {
    c3_b_u[c3_i206] = (*(real_T (*)[14])c3_inData)[c3_i206];
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_u, 0, 0U, 1U, 0U, 1, 14), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static real_T c3_c_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId)
{
  real_T c3_y;
  real_T c3_d1;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_b_u), &c3_d1, 1, 0, 0U, 0, 0U, 0);
  c3_y = c3_d1;
  sf_mex_destroy(&c3_b_u);
  return c3_y;
}

static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_nargout;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y;
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_nargout = sf_mex_dup(c3_mxArrayInData);
  c3_thisId.fIdentifier = (const char *)c3_varName;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nargout), &c3_thisId);
  sf_mex_destroy(&c3_nargout);
  *(real_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_e_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i207;
  int32_T c3_i208;
  const mxArray *c3_y = NULL;
  int32_T c3_i209;
  real_T c3_b_u[63];
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_i207 = 0;
  for (c3_i208 = 0; c3_i208 < 9; c3_i208++) {
    for (c3_i209 = 0; c3_i209 < 7; c3_i209++) {
      c3_b_u[c3_i209 + c3_i207] = (*(real_T (*)[63])c3_inData)[c3_i209 + c3_i207];
    }

    c3_i207 += 7;
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_u, 0, 0U, 1U, 0U, 2, 7, 9), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static const mxArray *c3_f_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i210;
  int32_T c3_i211;
  const mxArray *c3_y = NULL;
  int32_T c3_i212;
  real_T c3_b_u[36];
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_i210 = 0;
  for (c3_i211 = 0; c3_i211 < 4; c3_i211++) {
    for (c3_i212 = 0; c3_i212 < 9; c3_i212++) {
      c3_b_u[c3_i212 + c3_i210] = (*(real_T (*)[36])c3_inData)[c3_i212 + c3_i210];
    }

    c3_i210 += 9;
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_u, 0, 0U, 1U, 0U, 2, 9, 4), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static const mxArray *c3_g_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i213;
  const mxArray *c3_y = NULL;
  real_T c3_b_u[9];
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  for (c3_i213 = 0; c3_i213 < 9; c3_i213++) {
    c3_b_u[c3_i213] = (*(real_T (*)[9])c3_inData)[c3_i213];
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_u, 0, 0U, 1U, 0U, 1, 9), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static void c3_d_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[9])
{
  real_T c3_dv15[9];
  int32_T c3_i214;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_b_u), c3_dv15, 1, 0, 0U, 1, 0U, 1, 9);
  for (c3_i214 = 0; c3_i214 < 9; c3_i214++) {
    c3_y[c3_i214] = c3_dv15[c3_i214];
  }

  sf_mex_destroy(&c3_b_u);
}

static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_He;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y[9];
  int32_T c3_i215;
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_He = sf_mex_dup(c3_mxArrayInData);
  c3_thisId.fIdentifier = (const char *)c3_varName;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_He), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_He);
  for (c3_i215 = 0; c3_i215 < 9; c3_i215++) {
    (*(real_T (*)[9])c3_outData)[c3_i215] = c3_y[c3_i215];
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_h_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i216;
  int32_T c3_i217;
  const mxArray *c3_y = NULL;
  int32_T c3_i218;
  real_T c3_b_u[81];
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_i216 = 0;
  for (c3_i217 = 0; c3_i217 < 9; c3_i217++) {
    for (c3_i218 = 0; c3_i218 < 9; c3_i218++) {
      c3_b_u[c3_i218 + c3_i216] = (*(real_T (*)[81])c3_inData)[c3_i218 + c3_i216];
    }

    c3_i216 += 9;
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_u, 0, 0U, 1U, 0U, 2, 9, 9), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static void c3_e_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[81])
{
  real_T c3_dv16[81];
  int32_T c3_i219;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_b_u), c3_dv16, 1, 0, 0U, 1, 0U, 2, 9,
                9);
  for (c3_i219 = 0; c3_i219 < 81; c3_i219++) {
    c3_y[c3_i219] = c3_dv16[c3_i219];
  }

  sf_mex_destroy(&c3_b_u);
}

static void c3_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_Me;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y[81];
  int32_T c3_i220;
  int32_T c3_i221;
  int32_T c3_i222;
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_Me = sf_mex_dup(c3_mxArrayInData);
  c3_thisId.fIdentifier = (const char *)c3_varName;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_Me), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_Me);
  c3_i220 = 0;
  for (c3_i221 = 0; c3_i221 < 9; c3_i221++) {
    for (c3_i222 = 0; c3_i222 < 9; c3_i222++) {
      (*(real_T (*)[81])c3_outData)[c3_i222 + c3_i220] = c3_y[c3_i222 + c3_i220];
    }

    c3_i220 += 9;
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_i_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i223;
  int32_T c3_i224;
  const mxArray *c3_y = NULL;
  int32_T c3_i225;
  real_T c3_b_u[14];
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_i223 = 0;
  for (c3_i224 = 0; c3_i224 < 7; c3_i224++) {
    for (c3_i225 = 0; c3_i225 < 2; c3_i225++) {
      c3_b_u[c3_i225 + c3_i223] = (*(real_T (*)[14])c3_inData)[c3_i225 + c3_i223];
    }

    c3_i223 += 2;
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_u, 0, 0U, 1U, 0U, 2, 2, 7), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static void c3_f_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[14])
{
  real_T c3_dv17[14];
  int32_T c3_i226;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_b_u), c3_dv17, 1, 0, 0U, 1, 0U, 2, 2,
                7);
  for (c3_i226 = 0; c3_i226 < 14; c3_i226++) {
    c3_y[c3_i226] = c3_dv17[c3_i226];
  }

  sf_mex_destroy(&c3_b_u);
}

static void c3_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_dJg;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y[14];
  int32_T c3_i227;
  int32_T c3_i228;
  int32_T c3_i229;
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_dJg = sf_mex_dup(c3_mxArrayInData);
  c3_thisId.fIdentifier = (const char *)c3_varName;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_dJg), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_dJg);
  c3_i227 = 0;
  for (c3_i228 = 0; c3_i228 < 7; c3_i228++) {
    for (c3_i229 = 0; c3_i229 < 2; c3_i229++) {
      (*(real_T (*)[14])c3_outData)[c3_i229 + c3_i227] = c3_y[c3_i229 + c3_i227];
    }

    c3_i227 += 2;
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_j_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i230;
  int32_T c3_i231;
  const mxArray *c3_y = NULL;
  int32_T c3_i232;
  real_T c3_b_u[28];
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_i230 = 0;
  for (c3_i231 = 0; c3_i231 < 7; c3_i231++) {
    for (c3_i232 = 0; c3_i232 < 4; c3_i232++) {
      c3_b_u[c3_i232 + c3_i230] = (*(real_T (*)[28])c3_inData)[c3_i232 + c3_i230];
    }

    c3_i230 += 4;
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_u, 0, 0U, 1U, 0U, 2, 4, 7), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static void c3_g_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[28])
{
  real_T c3_dv18[28];
  int32_T c3_i233;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_b_u), c3_dv18, 1, 0, 0U, 1, 0U, 2, 4,
                7);
  for (c3_i233 = 0; c3_i233 < 28; c3_i233++) {
    c3_y[c3_i233] = c3_dv18[c3_i233];
  }

  sf_mex_destroy(&c3_b_u);
}

static void c3_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_dJh;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y[28];
  int32_T c3_i234;
  int32_T c3_i235;
  int32_T c3_i236;
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_dJh = sf_mex_dup(c3_mxArrayInData);
  c3_thisId.fIdentifier = (const char *)c3_varName;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_dJh), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_dJh);
  c3_i234 = 0;
  for (c3_i235 = 0; c3_i235 < 7; c3_i235++) {
    for (c3_i236 = 0; c3_i236 < 4; c3_i236++) {
      (*(real_T (*)[28])c3_outData)[c3_i236 + c3_i234] = c3_y[c3_i236 + c3_i234];
    }

    c3_i234 += 4;
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_k_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i237;
  const mxArray *c3_y = NULL;
  real_T c3_b_u[7];
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  for (c3_i237 = 0; c3_i237 < 7; c3_i237++) {
    c3_b_u[c3_i237] = (*(real_T (*)[7])c3_inData)[c3_i237];
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_u, 0, 0U, 1U, 0U, 1, 7), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static void c3_h_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[7])
{
  real_T c3_dv19[7];
  int32_T c3_i238;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_b_u), c3_dv19, 1, 0, 0U, 1, 0U, 1, 7);
  for (c3_i238 = 0; c3_i238 < 7; c3_i238++) {
    c3_y[c3_i238] = c3_dv19[c3_i238];
  }

  sf_mex_destroy(&c3_b_u);
}

static void c3_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_q2;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y[7];
  int32_T c3_i239;
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_q2 = sf_mex_dup(c3_mxArrayInData);
  c3_thisId.fIdentifier = (const char *)c3_varName;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_q2), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_q2);
  for (c3_i239 = 0; c3_i239 < 7; c3_i239++) {
    (*(real_T (*)[7])c3_outData)[c3_i239] = c3_y[c3_i239];
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_l_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i240;
  int32_T c3_i241;
  const mxArray *c3_y = NULL;
  int32_T c3_i242;
  real_T c3_b_u[28];
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_i240 = 0;
  for (c3_i241 = 0; c3_i241 < 4; c3_i241++) {
    for (c3_i242 = 0; c3_i242 < 7; c3_i242++) {
      c3_b_u[c3_i242 + c3_i240] = (*(real_T (*)[28])c3_inData)[c3_i242 + c3_i240];
    }

    c3_i240 += 7;
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_u, 0, 0U, 1U, 0U, 2, 7, 4), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static const mxArray *c3_m_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i243;
  int32_T c3_i244;
  const mxArray *c3_y = NULL;
  int32_T c3_i245;
  real_T c3_b_u[49];
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_i243 = 0;
  for (c3_i244 = 0; c3_i244 < 7; c3_i244++) {
    for (c3_i245 = 0; c3_i245 < 7; c3_i245++) {
      c3_b_u[c3_i245 + c3_i243] = (*(real_T (*)[49])c3_inData)[c3_i245 + c3_i243];
    }

    c3_i243 += 7;
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_u, 0, 0U, 1U, 0U, 2, 7, 7), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static void c3_i_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[49])
{
  real_T c3_dv20[49];
  int32_T c3_i246;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_b_u), c3_dv20, 1, 0, 0U, 1, 0U, 2, 7,
                7);
  for (c3_i246 = 0; c3_i246 < 49; c3_i246++) {
    c3_y[c3_i246] = c3_dv20[c3_i246];
  }

  sf_mex_destroy(&c3_b_u);
}

static void c3_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_M;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y[49];
  int32_T c3_i247;
  int32_T c3_i248;
  int32_T c3_i249;
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_M = sf_mex_dup(c3_mxArrayInData);
  c3_thisId.fIdentifier = (const char *)c3_varName;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_M), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_M);
  c3_i247 = 0;
  for (c3_i248 = 0; c3_i248 < 7; c3_i248++) {
    for (c3_i249 = 0; c3_i249 < 7; c3_i249++) {
      (*(real_T (*)[49])c3_outData)[c3_i249 + c3_i247] = c3_y[c3_i249 + c3_i247];
    }

    c3_i247 += 7;
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_n_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i250;
  int32_T c3_i251;
  const mxArray *c3_y = NULL;
  int32_T c3_i252;
  real_T c3_b_u[21];
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_i250 = 0;
  for (c3_i251 = 0; c3_i251 < 7; c3_i251++) {
    for (c3_i252 = 0; c3_i252 < 3; c3_i252++) {
      c3_b_u[c3_i252 + c3_i250] = (*(real_T (*)[21])c3_inData)[c3_i252 + c3_i250];
    }

    c3_i250 += 3;
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_u, 0, 0U, 1U, 0U, 2, 3, 7), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static void c3_j_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[21])
{
  real_T c3_dv21[21];
  int32_T c3_i253;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_b_u), c3_dv21, 1, 0, 0U, 1, 0U, 2, 3,
                7);
  for (c3_i253 = 0; c3_i253 < 21; c3_i253++) {
    c3_y[c3_i253] = c3_dv21[c3_i253];
  }

  sf_mex_destroy(&c3_b_u);
}

static void c3_i_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_dJrp_RT;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y[21];
  int32_T c3_i254;
  int32_T c3_i255;
  int32_T c3_i256;
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_dJrp_RT = sf_mex_dup(c3_mxArrayInData);
  c3_thisId.fIdentifier = (const char *)c3_varName;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_dJrp_RT), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_dJrp_RT);
  c3_i254 = 0;
  for (c3_i255 = 0; c3_i255 < 7; c3_i255++) {
    for (c3_i256 = 0; c3_i256 < 3; c3_i256++) {
      (*(real_T (*)[21])c3_outData)[c3_i256 + c3_i254] = c3_y[c3_i256 + c3_i254];
    }

    c3_i254 += 3;
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_o_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i257;
  const mxArray *c3_y = NULL;
  real_T c3_b_u[3];
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  for (c3_i257 = 0; c3_i257 < 3; c3_i257++) {
    c3_b_u[c3_i257] = (*(real_T (*)[3])c3_inData)[c3_i257];
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_b_u, 0, 0U, 1U, 0U, 1, 3), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static void c3_k_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[3])
{
  real_T c3_dv22[3];
  int32_T c3_i258;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_b_u), c3_dv22, 1, 0, 0U, 1, 0U, 1, 3);
  for (c3_i258 = 0; c3_i258 < 3; c3_i258++) {
    c3_y[c3_i258] = c3_dv22[c3_i258];
  }

  sf_mex_destroy(&c3_b_u);
}

static void c3_j_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_rp_RT;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y[3];
  int32_T c3_i259;
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_rp_RT = sf_mex_dup(c3_mxArrayInData);
  c3_thisId.fIdentifier = (const char *)c3_varName;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_k_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_rp_RT), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_rp_RT);
  for (c3_i259 = 0; c3_i259 < 3; c3_i259++) {
    (*(real_T (*)[3])c3_outData)[c3_i259] = c3_y[c3_i259];
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

const mxArray *sf_c3_FLWSim_get_eml_resolved_functions_info(void)
{
  const mxArray *c3_nameCaptureInfo = NULL;
  const char * c3_data[9] = {
    "789ced9adf4fda5014c7afc699b9cd85a73defd1bd584571eaf6500a5504aa0828ce6599d05ee06adb5bfb43c187853f64cfdbbfe1e3966cc9deb63f6740a9c0"
    "250d24c25d71f724e4f4e4dbde6f39dc7c72720398d993660000cf9b9fd9e6672902dab1e82610eae459d01fa43ed3c90b44edc52330d7f79ca77fee6419eb36",
    "acd96ea1221dee3b5a099acd422f6af06e19056b482fea76be6e4060420bab5750692b65a4c23cd2601af71409d42cb49d1ee9ae6849adeb5815ca1739470366"
    "d5eabeaeda5b809efe9cf97cffb921fd2183ec0f799fe767f8ac373fc4cf5b7f96a8bdf07ea77edfd7bc9b797e98ffb0ef3b6c3f8408ddf89886653b8fbd9ffa",
    "befdf6fce689baebef2a0a764a2aecfafdbaa79f41d480b8cfd3df8b1fe2db5cdcc44609d75e2ec5ebcd6d8ee434aca4b18c356c23acbfe24c5cc2b6c5c95881"
    "1697439aa142a979ad5adc0eba8269a45f148aea05345b9aa3165b0f71ed1bb80ba4731a77d7d4656d583f47dd4f64f662013cee5c35be7dfdf43b4acfcf8dff",
    "c5afe6b3dea8fbf3858f5f88d04f0fafb3ea3b51a8af1e1da1a8a55ed6b4acb2db7d8fcc109f61ef017c6a5aeb9ff93cff3038bec9b753637c1c7fe2e31f2274"
    "e3631655aa5d90ff2b8effb9a7dfa5af5fbf4e89e35e5397b58e2f459eff603c9f7e9ee7b23bd25a38a3236335523d170b2756595304c6733282c9f32ddecd51",
    "ea3c4f128339e3f918789eec19cc3bbef4f873cbe6f309fad1e2b91ead39b593422579291e2b5bd7ebe79b89929c603c2723983cdfe6dba9313e9e3ff5f10f11"
    "7a9218d0a795e7a6af5fbf4e8be7e4804e913f3f19cfa79fe7a94cac60476f5276242e86c32bd17c269ed864e72d03114c9ebfe1dd2c50e7b9420ce88ce763e0",
    "b93238a0d3e30fff9df17cfa79be71706ae6337b950412f57cb47e5048a9a224329e93114c9ebfe5dba9313e9e3ff3f10f11ba420ce8d3ca738ba801719fa753"
    "e33931a053e4399bcf27e8478be7c25a465a1713cebe98cba6c2d7a791e3d572899d9f0fc4a83cf7f31beb3e69c4c6c6ef45a206c47d9ebea743d34645a9689b",
    "a8b537a795dfb6af5fbf3e617e2bf516bffb9aea029ce23ed2be307e4f3dbf9126640ecbd5a460ac188e20ada9caa99064e72b0311287e8338f5f93b864d8455"
    "64e5a139126782caef80ccdf2ebf7b9b4a7dfebe65fc9ea01f2d7edb95f0819c8bd4a494a09eecada684fd8da2c5ce53062250fc6e8c8fdfa3cedfbb66f10ad9",
    "f56328dbb875663cadfc0ed4fcddd754daf337cff83d413f5afc3e5476a57d39eb54e05662c7394c976eb0f810fe7ff8174ed0aecb",
    "" };

  c3_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(c3_data, 13632U, &c3_nameCaptureInfo);
  return c3_nameCaptureInfo;
}

static real_T c3_rem(SFc3_FLWSimInstanceStruct *chartInstance, real_T c3_b_x)
{
  (void)chartInstance;
  return muDoubleScalarRem(c3_b_x, 0.4);
}

static real_T c3_mod(SFc3_FLWSimInstanceStruct *chartInstance, real_T c3_b_x)
{
  real_T c3_r;
  (void)chartInstance;
  if ((!muDoubleScalarIsInf(c3_b_x)) && (!muDoubleScalarIsNaN(c3_b_x))) {
    if (c3_b_x == 0.0) {
      c3_r = 0.0;
    } else {
      c3_r = muDoubleScalarRem(c3_b_x, 2.0);
      if (c3_r == 0.0) {
        c3_r = 0.0;
      } else {
        if (c3_b_x < 0.0) {
          c3_r += 2.0;
        }
      }
    }
  } else {
    c3_r = rtNaN;
  }

  return c3_r;
}

static void c3_error(SFc3_FLWSimInstanceStruct *chartInstance)
{
  const mxArray *c3_y = NULL;
  static char_T c3_cv0[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  (void)chartInstance;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_cv0, 10, 0U, 1U, 0U, 2, 1, 19),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    1U, 14, c3_y));
}

static void c3_mpower(SFc3_FLWSimInstanceStruct *chartInstance, real_T c3_a[81],
                      real_T c3_c[81])
{
  int32_T c3_i260;
  real_T c3_b_a[81];
  int32_T c3_i261;
  real_T c3_n1x;
  real_T c3_c_a[81];
  int32_T c3_i262;
  real_T c3_n1xinv;
  real_T c3_b_c[81];
  real_T c3_rc;
  real_T c3_b_x;
  const mxArray *c3_y = NULL;
  static char_T c3_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *c3_b_y = NULL;
  char_T c3_str[14];
  for (c3_i260 = 0; c3_i260 < 81; c3_i260++) {
    c3_b_a[c3_i260] = c3_a[c3_i260];
  }

  c3_invNxN(chartInstance, c3_b_a, c3_c);
  for (c3_i261 = 0; c3_i261 < 81; c3_i261++) {
    c3_c_a[c3_i261] = c3_a[c3_i261];
  }

  c3_n1x = c3_norm(chartInstance, c3_c_a);
  for (c3_i262 = 0; c3_i262 < 81; c3_i262++) {
    c3_b_c[c3_i262] = c3_c[c3_i262];
  }

  c3_n1xinv = c3_norm(chartInstance, c3_b_c);
  c3_rc = 1.0 / (c3_n1x * c3_n1xinv);
  if ((c3_n1x == 0.0) || (c3_n1xinv == 0.0) || (c3_rc == 0.0)) {
    c3_warning(chartInstance);
  } else {
    if (muDoubleScalarIsNaN(c3_rc) || (c3_rc < 2.2204460492503131E-16)) {
      c3_b_x = c3_rc;
      c3_y = NULL;
      sf_mex_assign(&c3_y, sf_mex_create("y", c3_rfmt, 10, 0U, 1U, 0U, 2, 1, 6),
                    false);
      c3_b_y = NULL;
      sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_x, 0, 0U, 0U, 0U, 0),
                    false);
      c3_l_emlrt_marshallIn(chartInstance, sf_mex_call_debug
                            (sfGlobalDebugInstanceStruct, "sprintf", 1U, 2U, 14,
        c3_y, 14, c3_b_y), "sprintf", c3_str);
      c3_b_warning(chartInstance, c3_str);
    }
  }
}

static void c3_invNxN(SFc3_FLWSimInstanceStruct *chartInstance, real_T c3_b_x[81],
                      real_T c3_y[81])
{
  int32_T c3_i263;
  int32_T c3_i264;
  int32_T c3_i265;
  real_T c3_A[81];
  int32_T c3_j;
  int32_T c3_ipiv[9];
  int32_T c3_i266;
  int32_T c3_c;
  int32_T c3_idxmax;
  int32_T c3_k;
  int32_T c3_p[9];
  int32_T c3_ix;
  real_T c3_smax;
  int32_T c3_b_k;
  boolean_T c3_overflow;
  int32_T c3_jA;
  int32_T c3_pipk;
  int32_T c3_jy;
  int32_T c3_b;
  int32_T c3_b_ix;
  boolean_T c3_b_overflow;
  boolean_T c3_c_overflow;
  int32_T c3_iy;
  real_T c3_alpha1;
  int32_T c3_b_c;
  int32_T c3_c_k;
  int32_T c3_d_k;
  char_T c3_DIAGA;
  char_T c3_TRANSA;
  int32_T c3_b_j;
  int32_T c3_c_j;
  int32_T c3_i;
  char_T c3_UPLO;
  real_T c3_temp;
  char_T c3_SIDE;
  real_T c3_s;
  ptrdiff_t c3_m_t;
  real_T c3_yjy;
  ptrdiff_t c3_n_t;
  int32_T c3_b_i;
  ptrdiff_t c3_lda_t;
  int32_T c3_c_ix;
  ptrdiff_t c3_ldb_t;
  int32_T c3_b_b;
  boolean_T c3_d_overflow;
  int32_T c3_ijA;
  for (c3_i263 = 0; c3_i263 < 81; c3_i263++) {
    c3_y[c3_i263] = 0.0;
  }

  for (c3_i264 = 0; c3_i264 < 81; c3_i264++) {
    c3_A[c3_i264] = c3_b_x[c3_i264];
  }

  for (c3_i265 = 0; c3_i265 < 9; c3_i265++) {
    c3_ipiv[c3_i265] = 1 + c3_i265;
  }

  for (c3_j = 0; c3_j < 8; c3_j++) {
    c3_c = c3_j * 10;
    if (9 - c3_j < 1) {
      c3_idxmax = 0;
    } else {
      c3_idxmax = 1;
      if (9 - c3_j > 1) {
        c3_ix = c3_c;
        c3_smax = muDoubleScalarAbs(c3_A[c3_c]) + muDoubleScalarAbs(0.0);
        c3_overflow = ((!(2 > 9 - c3_j)) && (9 - c3_j > 2147483646));
        if (c3_overflow) {
          c3_check_forloop_overflow_error(chartInstance, c3_overflow);
        }

        for (c3_c_k = 2; c3_c_k <= 9 - c3_j; c3_c_k++) {
          c3_ix++;
          c3_s = muDoubleScalarAbs(c3_A[c3_ix]) + muDoubleScalarAbs(0.0);
          if (c3_s > c3_smax) {
            c3_idxmax = c3_c_k;
            c3_smax = c3_s;
          }
        }
      }
    }

    if (c3_A[(c3_c + c3_idxmax) - 1] != 0.0) {
      if (c3_idxmax - 1 != 0) {
        c3_ipiv[c3_j] = c3_j + c3_idxmax;
        c3_b_ix = c3_j;
        c3_iy = (c3_j + c3_idxmax) - 1;
        for (c3_d_k = 0; c3_d_k < 9; c3_d_k++) {
          c3_temp = c3_A[c3_b_ix];
          c3_A[c3_b_ix] = c3_A[c3_iy];
          c3_A[c3_iy] = c3_temp;
          c3_b_ix += 9;
          c3_iy += 9;
        }
      }

      c3_b = (c3_c - c3_j) + 9;
      c3_c_overflow = ((!(c3_c + 2 > c3_b)) && (c3_b > 2147483646));
      if (c3_c_overflow) {
        c3_check_forloop_overflow_error(chartInstance, c3_c_overflow);
      }

      for (c3_i = c3_c + 1; c3_i + 1 <= c3_b; c3_i++) {
        c3_A[c3_i] /= c3_A[c3_c];
      }
    }

    c3_jA = c3_c + 11;
    c3_jy = c3_c + 9;
    c3_b_overflow = ((!(1 > 8 - c3_j)) && (8 - c3_j > 2147483646));
    if (c3_b_overflow) {
      c3_check_forloop_overflow_error(chartInstance, c3_b_overflow);
    }

    for (c3_c_j = 1; c3_c_j <= 8 - c3_j; c3_c_j++) {
      c3_yjy = c3_A[c3_jy];
      if (c3_A[c3_jy] != 0.0) {
        c3_c_ix = c3_c;
        c3_b_b = (c3_jA - c3_j) + 7;
        c3_d_overflow = ((!(c3_jA > c3_b_b)) && (c3_b_b > 2147483646));
        if (c3_d_overflow) {
          c3_check_forloop_overflow_error(chartInstance, c3_d_overflow);
        }

        for (c3_ijA = c3_jA - 1; c3_ijA + 1 <= c3_b_b; c3_ijA++) {
          c3_A[c3_ijA] += c3_A[c3_c_ix + 1] * -c3_yjy;
          c3_c_ix++;
        }
      }

      c3_jy += 9;
      c3_jA += 9;
    }
  }

  for (c3_i266 = 0; c3_i266 < 9; c3_i266++) {
    c3_p[c3_i266] = 1 + c3_i266;
  }

  for (c3_k = 0; c3_k < 8; c3_k++) {
    if ((real_T)c3_ipiv[c3_k] > 1.0 + (real_T)c3_k) {
      c3_pipk = c3_p[c3_ipiv[c3_k] - 1];
      c3_p[c3_ipiv[c3_k] - 1] = c3_p[c3_k];
      c3_p[c3_k] = c3_pipk;
    }
  }

  for (c3_b_k = 0; c3_b_k < 9; c3_b_k++) {
    c3_b_c = c3_p[c3_b_k] - 1;
    c3_y[c3_b_k + 9 * (c3_p[c3_b_k] - 1)] = 1.0;
    for (c3_b_j = c3_b_k; c3_b_j + 1 < 10; c3_b_j++) {
      if (c3_y[c3_b_j + 9 * c3_b_c] != 0.0) {
        for (c3_b_i = c3_b_j + 1; c3_b_i + 1 < 10; c3_b_i++) {
          c3_y[c3_b_i + 9 * c3_b_c] -= c3_y[c3_b_j + 9 * c3_b_c] * c3_A[c3_b_i +
            9 * c3_b_j];
        }
      }
    }
  }

  c3_alpha1 = 1.0;
  c3_DIAGA = 'N';
  c3_TRANSA = 'N';
  c3_UPLO = 'U';
  c3_SIDE = 'L';
  c3_m_t = (ptrdiff_t)9;
  c3_n_t = (ptrdiff_t)9;
  c3_lda_t = (ptrdiff_t)9;
  c3_ldb_t = (ptrdiff_t)9;
  dtrsm(&c3_SIDE, &c3_UPLO, &c3_TRANSA, &c3_DIAGA, &c3_m_t, &c3_n_t, &c3_alpha1,
        &c3_A[0], &c3_lda_t, &c3_y[0], &c3_ldb_t);
}

static void c3_check_forloop_overflow_error(SFc3_FLWSimInstanceStruct
  *chartInstance, boolean_T c3_overflow)
{
  const mxArray *c3_y = NULL;
  static char_T c3_cv1[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c3_b_y = NULL;
  static char_T c3_cv2[5] = { 'i', 'n', 't', '3', '2' };

  (void)chartInstance;
  if (!c3_overflow) {
  } else {
    c3_y = NULL;
    sf_mex_assign(&c3_y, sf_mex_create("y", c3_cv1, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c3_b_y = NULL;
    sf_mex_assign(&c3_b_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                      sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message",
      1U, 2U, 14, c3_y, 14, c3_b_y));
  }
}

static real_T c3_norm(SFc3_FLWSimInstanceStruct *chartInstance, real_T c3_b_x[81])
{
  real_T c3_y;
  int32_T c3_j;
  real_T c3_s;
  int32_T c3_i;
  boolean_T exitg1;
  (void)chartInstance;
  c3_y = 0.0;
  c3_j = 0;
  exitg1 = false;
  while ((!exitg1) && (c3_j < 9)) {
    c3_s = 0.0;
    for (c3_i = 0; c3_i < 9; c3_i++) {
      c3_s += muDoubleScalarAbs(c3_b_x[c3_i + 9 * c3_j]);
    }

    if (muDoubleScalarIsNaN(c3_s)) {
      c3_y = rtNaN;
      exitg1 = true;
    } else {
      if (c3_s > c3_y) {
        c3_y = c3_s;
      }

      c3_j++;
    }
  }

  return c3_y;
}

static void c3_warning(SFc3_FLWSimInstanceStruct *chartInstance)
{
  const mxArray *c3_y = NULL;
  static char_T c3_cv3[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *c3_b_y = NULL;
  static char_T c3_cv4[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c3_c_y = NULL;
  static char_T c3_msgID[27] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't',
    'r', 'i', 'x' };

  (void)chartInstance;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_cv3, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", c3_cv4, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", c3_msgID, 10, 0U, 1U, 0U, 2, 1, 27),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "feval", 0U, 2U, 14, c3_y, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "feval", 1U,
    2U, 14, c3_b_y, 14, c3_c_y));
}

static void c3_b_warning(SFc3_FLWSimInstanceStruct *chartInstance, char_T
  c3_varargin_1[14])
{
  const mxArray *c3_y = NULL;
  static char_T c3_cv5[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *c3_b_y = NULL;
  static char_T c3_cv6[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c3_c_y = NULL;
  static char_T c3_msgID[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'l', 'l', 'C', 'o', 'n', 'd', 'i', 't', 'i', 'o',
    'n', 'e', 'd', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *c3_d_y = NULL;
  (void)chartInstance;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_cv5, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", c3_cv6, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", c3_msgID, 10, 0U, 1U, 0U, 2, 1, 33),
                false);
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_varargin_1, 10, 0U, 1U, 0U, 2, 1,
    14), false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "feval", 0U, 2U, 14, c3_y, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "feval", 1U,
    3U, 14, c3_b_y, 14, c3_c_y, 14, c3_d_y));
}

static void c3_b_mpower(SFc3_FLWSimInstanceStruct *chartInstance, real_T c3_a[16],
  real_T c3_c[16])
{
  int32_T c3_i267;
  real_T c3_b_a[16];
  int32_T c3_i268;
  real_T c3_n1x;
  real_T c3_c_a[16];
  int32_T c3_i269;
  real_T c3_n1xinv;
  real_T c3_b_c[16];
  real_T c3_rc;
  real_T c3_b_x;
  const mxArray *c3_y = NULL;
  static char_T c3_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *c3_b_y = NULL;
  char_T c3_str[14];
  for (c3_i267 = 0; c3_i267 < 16; c3_i267++) {
    c3_b_a[c3_i267] = c3_a[c3_i267];
  }

  c3_b_invNxN(chartInstance, c3_b_a, c3_c);
  for (c3_i268 = 0; c3_i268 < 16; c3_i268++) {
    c3_c_a[c3_i268] = c3_a[c3_i268];
  }

  c3_n1x = c3_b_norm(chartInstance, c3_c_a);
  for (c3_i269 = 0; c3_i269 < 16; c3_i269++) {
    c3_b_c[c3_i269] = c3_c[c3_i269];
  }

  c3_n1xinv = c3_b_norm(chartInstance, c3_b_c);
  c3_rc = 1.0 / (c3_n1x * c3_n1xinv);
  if ((c3_n1x == 0.0) || (c3_n1xinv == 0.0) || (c3_rc == 0.0)) {
    c3_warning(chartInstance);
  } else {
    if (muDoubleScalarIsNaN(c3_rc) || (c3_rc < 2.2204460492503131E-16)) {
      c3_b_x = c3_rc;
      c3_y = NULL;
      sf_mex_assign(&c3_y, sf_mex_create("y", c3_rfmt, 10, 0U, 1U, 0U, 2, 1, 6),
                    false);
      c3_b_y = NULL;
      sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_x, 0, 0U, 0U, 0U, 0),
                    false);
      c3_l_emlrt_marshallIn(chartInstance, sf_mex_call_debug
                            (sfGlobalDebugInstanceStruct, "sprintf", 1U, 2U, 14,
        c3_y, 14, c3_b_y), "sprintf", c3_str);
      c3_b_warning(chartInstance, c3_str);
    }
  }
}

static void c3_b_invNxN(SFc3_FLWSimInstanceStruct *chartInstance, real_T c3_b_x
  [16], real_T c3_y[16])
{
  int32_T c3_i270;
  int32_T c3_i271;
  int32_T c3_i272;
  real_T c3_A[16];
  int32_T c3_j;
  int32_T c3_ipiv[4];
  int32_T c3_i273;
  int32_T c3_c;
  int32_T c3_idxmax;
  int32_T c3_k;
  int32_T c3_p[4];
  int32_T c3_ix;
  real_T c3_smax;
  int32_T c3_b_k;
  boolean_T c3_overflow;
  int32_T c3_jA;
  int32_T c3_pipk;
  int32_T c3_jy;
  int32_T c3_b;
  int32_T c3_b_ix;
  boolean_T c3_b_overflow;
  boolean_T c3_c_overflow;
  int32_T c3_iy;
  int32_T c3_b_j;
  int32_T c3_b_c;
  int32_T c3_c_k;
  int32_T c3_d_k;
  int32_T c3_c_j;
  int32_T c3_d_j;
  int32_T c3_i;
  int32_T c3_jBcol;
  real_T c3_temp;
  int32_T c3_e_k;
  real_T c3_s;
  real_T c3_yjy;
  int32_T c3_b_i;
  int32_T c3_kAcol;
  int32_T c3_c_ix;
  int32_T c3_b_b;
  boolean_T c3_d_overflow;
  boolean_T c3_e_overflow;
  int32_T c3_ijA;
  int32_T c3_c_i;
  for (c3_i270 = 0; c3_i270 < 16; c3_i270++) {
    c3_y[c3_i270] = 0.0;
  }

  for (c3_i271 = 0; c3_i271 < 16; c3_i271++) {
    c3_A[c3_i271] = c3_b_x[c3_i271];
  }

  for (c3_i272 = 0; c3_i272 < 4; c3_i272++) {
    c3_ipiv[c3_i272] = 1 + c3_i272;
  }

  for (c3_j = 0; c3_j < 3; c3_j++) {
    c3_c = c3_j * 5;
    if (4 - c3_j < 1) {
      c3_idxmax = 0;
    } else {
      c3_idxmax = 1;
      if (4 - c3_j > 1) {
        c3_ix = c3_c;
        c3_smax = muDoubleScalarAbs(c3_A[c3_c]) + muDoubleScalarAbs(0.0);
        c3_overflow = ((!(2 > 4 - c3_j)) && (4 - c3_j > 2147483646));
        if (c3_overflow) {
          c3_check_forloop_overflow_error(chartInstance, c3_overflow);
        }

        for (c3_c_k = 2; c3_c_k <= 4 - c3_j; c3_c_k++) {
          c3_ix++;
          c3_s = muDoubleScalarAbs(c3_A[c3_ix]) + muDoubleScalarAbs(0.0);
          if (c3_s > c3_smax) {
            c3_idxmax = c3_c_k;
            c3_smax = c3_s;
          }
        }
      }
    }

    if (c3_A[(c3_c + c3_idxmax) - 1] != 0.0) {
      if (c3_idxmax - 1 != 0) {
        c3_ipiv[c3_j] = c3_j + c3_idxmax;
        c3_b_ix = c3_j;
        c3_iy = (c3_j + c3_idxmax) - 1;
        for (c3_d_k = 0; c3_d_k < 4; c3_d_k++) {
          c3_temp = c3_A[c3_b_ix];
          c3_A[c3_b_ix] = c3_A[c3_iy];
          c3_A[c3_iy] = c3_temp;
          c3_b_ix += 4;
          c3_iy += 4;
        }
      }

      c3_b = (c3_c - c3_j) + 4;
      c3_c_overflow = ((!(c3_c + 2 > c3_b)) && (c3_b > 2147483646));
      if (c3_c_overflow) {
        c3_check_forloop_overflow_error(chartInstance, c3_c_overflow);
      }

      for (c3_i = c3_c + 1; c3_i + 1 <= c3_b; c3_i++) {
        c3_A[c3_i] /= c3_A[c3_c];
      }
    }

    c3_jA = c3_c + 6;
    c3_jy = c3_c + 4;
    c3_b_overflow = ((!(1 > 3 - c3_j)) && (3 - c3_j > 2147483646));
    if (c3_b_overflow) {
      c3_check_forloop_overflow_error(chartInstance, c3_b_overflow);
    }

    for (c3_d_j = 1; c3_d_j <= 3 - c3_j; c3_d_j++) {
      c3_yjy = c3_A[c3_jy];
      if (c3_A[c3_jy] != 0.0) {
        c3_c_ix = c3_c;
        c3_b_b = (c3_jA - c3_j) + 2;
        c3_d_overflow = ((!(c3_jA > c3_b_b)) && (c3_b_b > 2147483646));
        if (c3_d_overflow) {
          c3_check_forloop_overflow_error(chartInstance, c3_d_overflow);
        }

        for (c3_ijA = c3_jA - 1; c3_ijA + 1 <= c3_b_b; c3_ijA++) {
          c3_A[c3_ijA] += c3_A[c3_c_ix + 1] * -c3_yjy;
          c3_c_ix++;
        }
      }

      c3_jy += 4;
      c3_jA += 4;
    }
  }

  for (c3_i273 = 0; c3_i273 < 4; c3_i273++) {
    c3_p[c3_i273] = 1 + c3_i273;
  }

  for (c3_k = 0; c3_k < 3; c3_k++) {
    if ((real_T)c3_ipiv[c3_k] > 1.0 + (real_T)c3_k) {
      c3_pipk = c3_p[c3_ipiv[c3_k] - 1];
      c3_p[c3_ipiv[c3_k] - 1] = c3_p[c3_k];
      c3_p[c3_k] = c3_pipk;
    }
  }

  for (c3_b_k = 0; c3_b_k < 4; c3_b_k++) {
    c3_b_c = c3_p[c3_b_k] - 1;
    c3_y[c3_b_k + ((c3_p[c3_b_k] - 1) << 2)] = 1.0;
    for (c3_c_j = c3_b_k; c3_c_j + 1 < 5; c3_c_j++) {
      if (c3_y[c3_c_j + (c3_b_c << 2)] != 0.0) {
        for (c3_b_i = c3_c_j + 1; c3_b_i + 1 < 5; c3_b_i++) {
          c3_y[c3_b_i + (c3_b_c << 2)] -= c3_y[c3_c_j + (c3_b_c << 2)] *
            c3_A[c3_b_i + (c3_c_j << 2)];
        }
      }
    }
  }

  for (c3_b_j = 0; c3_b_j < 4; c3_b_j++) {
    c3_jBcol = c3_b_j << 2;
    for (c3_e_k = 3; c3_e_k > -1; c3_e_k--) {
      c3_kAcol = c3_e_k << 2;
      if (c3_y[c3_e_k + c3_jBcol] != 0.0) {
        c3_y[c3_e_k + c3_jBcol] /= c3_A[c3_e_k + c3_kAcol];
        c3_e_overflow = ((!(1 > c3_e_k)) && (c3_e_k > 2147483646));
        if (c3_e_overflow) {
          c3_check_forloop_overflow_error(chartInstance, c3_e_overflow);
        }

        for (c3_c_i = 0; c3_c_i + 1 <= c3_e_k; c3_c_i++) {
          c3_y[c3_c_i + c3_jBcol] -= c3_y[c3_e_k + c3_jBcol] * c3_A[c3_c_i +
            c3_kAcol];
        }
      }
    }
  }
}

static real_T c3_b_norm(SFc3_FLWSimInstanceStruct *chartInstance, real_T c3_b_x
  [16])
{
  real_T c3_y;
  int32_T c3_j;
  real_T c3_s;
  int32_T c3_i;
  boolean_T exitg1;
  (void)chartInstance;
  c3_y = 0.0;
  c3_j = 0;
  exitg1 = false;
  while ((!exitg1) && (c3_j < 4)) {
    c3_s = 0.0;
    for (c3_i = 0; c3_i < 4; c3_i++) {
      c3_s += muDoubleScalarAbs(c3_b_x[c3_i + (c3_j << 2)]);
    }

    if (muDoubleScalarIsNaN(c3_s)) {
      c3_y = rtNaN;
      exitg1 = true;
    } else {
      if (c3_s > c3_y) {
        c3_y = c3_s;
      }

      c3_j++;
    }
  }

  return c3_y;
}

static void c3_l_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_sprintf, const char_T *c3_identifier, char_T c3_y[14])
{
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = (const char *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_m_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_sprintf), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_sprintf);
}

static void c3_m_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId, char_T c3_y[14])
{
  char_T c3_cv7[14];
  int32_T c3_i274;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_b_u), c3_cv7, 1, 10, 0U, 1, 0U, 2, 1,
                14);
  for (c3_i274 = 0; c3_i274 < 14; c3_i274++) {
    c3_y[c3_i274] = c3_cv7[c3_i274];
  }

  sf_mex_destroy(&c3_b_u);
}

static const mxArray *c3_p_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_b_u;
  const mxArray *c3_y = NULL;
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_b_u = *(int32_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_b_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static int32_T c3_n_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId)
{
  int32_T c3_y;
  int32_T c3_i275;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_b_u), &c3_i275, 1, 6, 0U, 0, 0U, 0);
  c3_y = c3_i275;
  sf_mex_destroy(&c3_b_u);
  return c3_y;
}

static void c3_k_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_sfEvent;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_y;
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)chartInstanceVoid;
  c3_b_sfEvent = sf_mex_dup(c3_mxArrayInData);
  c3_thisId.fIdentifier = (const char *)c3_varName;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_n_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_sfEvent),
    &c3_thisId);
  sf_mex_destroy(&c3_b_sfEvent);
  *(int32_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static uint8_T c3_o_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_is_active_c3_FLWSim, const char_T *c3_identifier)
{
  uint8_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = (const char *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_p_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_is_active_c3_FLWSim), &c3_thisId);
  sf_mex_destroy(&c3_b_is_active_c3_FLWSim);
  return c3_y;
}

static uint8_T c3_p_emlrt_marshallIn(SFc3_FLWSimInstanceStruct *chartInstance,
  const mxArray *c3_b_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_y;
  uint8_T c3_u0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_b_u), &c3_u0, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_u0;
  sf_mex_destroy(&c3_b_u);
  return c3_y;
}

static void init_dsm_address_info(SFc3_FLWSimInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc3_FLWSimInstanceStruct *chartInstance)
{
  chartInstance->c3_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c3_x = (real_T (*)[14])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c3_u = (real_T (*)[4])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c3_t = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c3_GRF = (real_T (*)[6])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c3_FLWSim_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1666985502U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3882417444U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(988559346U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(491632457U);
}

mxArray* sf_c3_FLWSim_get_post_codegen_info(void);
mxArray *sf_c3_FLWSim_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("SUHnQZZordIgaiCBDncznF");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(14);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(6);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(4);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c3_FLWSim_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c3_FLWSim_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString("coder.internal.blas.BLASApi"));
  return(mxcell3p);
}

mxArray *sf_c3_FLWSim_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("pre");
  mxArray *fallbackReason = mxCreateString("hasBreakpoints");
  mxArray *hiddenFallbackType = mxCreateString("late");
  mxArray *hiddenFallbackReason = mxCreateString("ir_function_calls");
  mxArray *incompatibleSymbol = mxCreateString("p_LeftToe_src");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c3_FLWSim_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c3_FLWSim_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c3_FLWSim(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"u\",},{M[8],M[0],T\"is_active_c3_FLWSim\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_FLWSim_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_FLWSimInstanceStruct *chartInstance = (SFc3_FLWSimInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _FLWSimMachineNumber_,
           3,
           1,
           1,
           0,
           4,
           0,
           0,
           0,
           0,
           9,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_FLWSimMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_FLWSimMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _FLWSimMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"x");
          _SFD_SET_DATA_PROPS(1,1,1,0,"t");
          _SFD_SET_DATA_PROPS(2,1,1,0,"GRF");
          _SFD_SET_DATA_PROPS(3,2,0,1,"u");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,0,2,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,1941);
        _SFD_CV_INIT_EML_IF(0,1,0,201,219,239,267);
        _SFD_CV_INIT_EML_IF(0,1,1,973,991,1382,1716);
        _SFD_CV_INIT_EML_RELATIONAL(0,1,0,976,991,-1,0);
        _SFD_CV_INIT_SCRIPT(0,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(0,0,"p_LeftToe",0,-1,331);
        _SFD_CV_INIT_SCRIPT_IF(0,0,41,66,112,327);
        _SFD_CV_INIT_SCRIPT(1,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(1,0,"p_RightToe",0,-1,335);
        _SFD_CV_INIT_SCRIPT_IF(1,0,42,67,114,331);
        _SFD_CV_INIT_SCRIPT(2,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(2,0,"Jp_LeftToe",0,-1,335);
        _SFD_CV_INIT_SCRIPT_IF(2,0,42,67,114,331);
        _SFD_CV_INIT_SCRIPT(3,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(3,0,"Jp_RightToe",0,-1,339);
        _SFD_CV_INIT_SCRIPT_IF(3,0,43,68,116,335);
        _SFD_CV_INIT_SCRIPT(4,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(4,0,"dJp_LeftToe",0,-1,367);
        _SFD_CV_INIT_SCRIPT_IF(4,0,48,73,126,363);
        _SFD_CV_INIT_SCRIPT(5,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(5,0,"dJp_RightToe",0,-1,371);
        _SFD_CV_INIT_SCRIPT_IF(5,0,49,74,128,367);
        _SFD_CV_INIT_SCRIPT(6,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(6,0,"InertiaMatrix",0,-1,347);
        _SFD_CV_INIT_SCRIPT_IF(6,0,45,70,120,343);
        _SFD_CV_INIT_SCRIPT(7,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(7,0,"CoriolisTerm",0,-1,371);
        _SFD_CV_INIT_SCRIPT_IF(7,0,49,74,128,367);
        _SFD_CV_INIT_SCRIPT(8,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(8,0,"GravityVector",0,-1,347);
        _SFD_CV_INIT_SCRIPT_IF(8,0,45,70,120,343);

        {
          unsigned int dimVector[1];
          dimVector[0]= 14U;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c3_d_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_c_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[1];
          dimVector[0]= 6U;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c3_b_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 4U;
          _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)
            c3_sf_marshallIn);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _FLWSimMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_FLWSimInstanceStruct *chartInstance = (SFc3_FLWSimInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, (void *)chartInstance->c3_x);
        _SFD_SET_DATA_VALUE_PTR(3U, (void *)chartInstance->c3_u);
        _SFD_SET_DATA_VALUE_PTR(1U, (void *)chartInstance->c3_t);
        _SFD_SET_DATA_VALUE_PTR(2U, (void *)chartInstance->c3_GRF);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "s3MM37qo4TO8C8qThs59IgG";
}

static void sf_opaque_initialize_c3_FLWSim(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc3_FLWSimInstanceStruct*) chartInstanceVar)->S,
    0);
  initialize_params_c3_FLWSim((SFc3_FLWSimInstanceStruct*) chartInstanceVar);
  initialize_c3_FLWSim((SFc3_FLWSimInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c3_FLWSim(void *chartInstanceVar)
{
  enable_c3_FLWSim((SFc3_FLWSimInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_FLWSim(void *chartInstanceVar)
{
  disable_c3_FLWSim((SFc3_FLWSimInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_FLWSim(void *chartInstanceVar)
{
  sf_gateway_c3_FLWSim((SFc3_FLWSimInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c3_FLWSim(SimStruct* S)
{
  return get_sim_state_c3_FLWSim((SFc3_FLWSimInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c3_FLWSim(SimStruct* S, const mxArray *st)
{
  set_sim_state_c3_FLWSim((SFc3_FLWSimInstanceStruct*)sf_get_chart_instance_ptr
    (S), st);
}

static void sf_opaque_terminate_c3_FLWSim(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_FLWSimInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_FLWSim_optimization_info();
    }

    finalize_c3_FLWSim((SFc3_FLWSimInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc3_FLWSim((SFc3_FLWSimInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_FLWSim(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_FLWSim((SFc3_FLWSimInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

static void mdlSetWorkWidths_c3_FLWSim(SimStruct *S)
{
  /* Set overwritable ports for inplace optimization */
  ssSetInputPortDirectFeedThrough(S, 0, 1);
  ssSetInputPortDirectFeedThrough(S, 1, 1);
  ssSetInputPortDirectFeedThrough(S, 2, 1);
  ssSetStatesModifiedOnlyInUpdate(S, 1);
  ssSetBlockIsPurelyCombinatorial_wrapper(S, 1);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_FLWSim_optimization_info(sim_mode_is_rtw_gen(S),
      sim_mode_is_modelref_sim(S), sim_mode_is_external(S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,3);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,3,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 3);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,3);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,3,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,3,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 3; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,3);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1282040929U));
  ssSetChecksum1(S,(2326811616U));
  ssSetChecksum2(S,(1834710550U));
  ssSetChecksum3(S,(193192513U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c3_FLWSim(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c3_FLWSim(SimStruct *S)
{
  SFc3_FLWSimInstanceStruct *chartInstance;
  chartInstance = (SFc3_FLWSimInstanceStruct *)utMalloc(sizeof
    (SFc3_FLWSimInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc3_FLWSimInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c3_FLWSim;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c3_FLWSim;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c3_FLWSim;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c3_FLWSim;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c3_FLWSim;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c3_FLWSim;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c3_FLWSim;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c3_FLWSim;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_FLWSim;
  chartInstance->chartInfo.mdlStart = mdlStart_c3_FLWSim;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c3_FLWSim;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
  mdl_start_c3_FLWSim(chartInstance);
}

void c3_FLWSim_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c3_FLWSim(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_FLWSim(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_FLWSim(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_FLWSim_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
