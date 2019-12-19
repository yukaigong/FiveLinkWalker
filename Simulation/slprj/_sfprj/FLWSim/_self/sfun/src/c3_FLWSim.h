#ifndef __c3_FLWSim_h__
#define __c3_FLWSim_h__

/* Type Definitions */
#ifndef typedef_SFc3_FLWSimInstanceStruct
#define typedef_SFc3_FLWSimInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c3_sfEvent;
  boolean_T c3_doneDoubleBufferReInit;
  uint8_T c3_is_active_c3_FLWSim;
  void *c3_fEmlrtCtx;
  real_T (*c3_x)[14];
  real_T (*c3_u)[4];
  real_T *c3_t;
  real_T (*c3_GRF)[6];
} SFc3_FLWSimInstanceStruct;

#endif                                 /*typedef_SFc3_FLWSimInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c3_FLWSim_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_FLWSim_get_check_sum(mxArray *plhs[]);
extern void c3_FLWSim_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
