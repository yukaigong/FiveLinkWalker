/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 12:24:33 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t3;
  double t4;
  double t5;
  double t9;
  double t10;
  double t11;
  double t12;
  double t13;
  double t14;
  double t19;
  double t21;
  double t22;
  double t23;
  double t24;
  double t26;
  double t37;
  double t38;
  double t39;
  double t32;
  double t33;
  double t34;
  double t35;
  double t36;
  double t40;
  double t41;
  double t42;
  double t43;
  double t44;
  double t45;
  double t46;
  double t51;
  double t52;
  double t53;
  double t54;
  double t55;
  double t60;
  double t62;
  double t63;
  double t64;
  double t65;
  double t67;
  double t78;
  double t79;
  double t80;
  double t73;
  double t74;
  double t75;
  double t76;
  double t77;
  double t81;
  double t82;
  double t83;
  double t84;
  double t85;
  double t86;
  double t87;
  double t6;
  double t7;
  double t15;
  double t16;
  double t17;
  double t108;
  double t102;
  double t128;
  double t129;
  double t130;
  double t131;
  double t132;
  double t133;
  double t135;
  double t114;
  double t115;
  double t116;
  double t20;
  double t25;
  double t27;
  double t28;
  double t29;
  double t30;
  double t31;
  double t47;
  double t48;
  double t49;
  double t56;
  double t57;
  double t58;
  double t171;
  double t172;
  double t173;
  double t174;
  double t175;
  double t176;
  double t178;
  double t157;
  double t158;
  double t159;
  double t61;
  double t66;
  double t68;
  double t69;
  double t70;
  double t71;
  double t72;
  double t88;
  double t89;
  double t90;
  double t105;
  double t106;
  double t122;
  double t123;
  double t124;
  double t136;
  double t137;
  double t138;
  double t139;
  double t140;
  double t141;
  double t142;
  double t143;
  double t144;
  double t145;
  double t165;
  double t166;
  double t167;
  double t179;
  double t180;
  double t181;
  double t182;
  double t183;
  double t184;
  double t185;
  double t186;
  double t187;
  double t188;
  t3 = -1.*var3[1];
  t4 = 0. + t3;
  t5 = Sin(var1[2]);
  t9 = Cos(var1[3]);
  t10 = -1.*t9*t5;
  t11 = Cos(var1[2]);
  t12 = Sin(var1[3]);
  t13 = -1.*t11*t12;
  t14 = t10 + t13;
  t19 = Cos(var1[4]);
  t21 = t11*t9;
  t22 = -1.*t5*t12;
  t23 = t21 + t22;
  t24 = Sin(var1[4]);
  t26 = t19*t14;
  t37 = -1.*t11*t9;
  t38 = t5*t12;
  t39 = t37 + t38;
  t32 = -1.*t19;
  t33 = 1. + t32;
  t34 = -0.4*t33;
  t35 = 0. + t34;
  t36 = t35*t14;
  t40 = 0.4*t24;
  t41 = 0. + t40;
  t42 = t39*t41;
  t43 = t39*t24;
  t44 = t26 + t43;
  t45 = -0.64*t44;
  t46 = t36 + t42 + t45;
  t51 = Cos(var1[5]);
  t52 = -1.*t51*t5;
  t53 = Sin(var1[5]);
  t54 = -1.*t11*t53;
  t55 = t52 + t54;
  t60 = Cos(var1[6]);
  t62 = t11*t51;
  t63 = -1.*t5*t53;
  t64 = t62 + t63;
  t65 = Sin(var1[6]);
  t67 = t60*t55;
  t78 = -1.*t11*t51;
  t79 = t5*t53;
  t80 = t78 + t79;
  t73 = -1.*t60;
  t74 = 1. + t73;
  t75 = -0.4*t74;
  t76 = 0. + t75;
  t77 = t76*t55;
  t81 = 0.4*t65;
  t82 = 0. + t81;
  t83 = t80*t82;
  t84 = t80*t65;
  t85 = t67 + t84;
  t86 = -0.64*t85;
  t87 = t77 + t83 + t86;
  t6 = -0.24*var2[2]*t5;
  t7 = var2[1] + t6;
  t15 = -0.11*var2[2]*t14;
  t16 = -0.11*var2[3]*t14;
  t17 = var2[1] + t15 + t16;
  t108 = -1.*var3[0];
  t102 = -1.*var3[2];
  t128 = t35*t23;
  t129 = t14*t41;
  t130 = t19*t23;
  t131 = t14*t24;
  t132 = t130 + t131;
  t133 = -0.64*t132;
  t135 = t128 + t129 + t133;
  t114 = t9*t5;
  t115 = t11*t12;
  t116 = t114 + t115;
  t20 = 0.4*t19*t14;
  t25 = -0.4*t23*t24;
  t27 = -1.*t23*t24;
  t28 = t26 + t27;
  t29 = -0.64*t28;
  t30 = t20 + t25 + t29;
  t31 = var2[4]*t30;
  t47 = var2[2]*t46;
  t48 = var2[3]*t46;
  t49 = var2[1] + t31 + t47 + t48;
  t56 = -0.11*var2[2]*t55;
  t57 = -0.11*var2[5]*t55;
  t58 = var2[1] + t56 + t57;
  t171 = t76*t64;
  t172 = t55*t82;
  t173 = t60*t64;
  t174 = t55*t65;
  t175 = t173 + t174;
  t176 = -0.64*t175;
  t178 = t171 + t172 + t176;
  t157 = t51*t5;
  t158 = t11*t53;
  t159 = t157 + t158;
  t61 = 0.4*t60*t55;
  t66 = -0.4*t64*t65;
  t68 = -1.*t64*t65;
  t69 = t67 + t68;
  t70 = -0.64*t69;
  t71 = t61 + t66 + t70;
  t72 = var2[6]*t71;
  t88 = var2[2]*t87;
  t89 = var2[5]*t87;
  t90 = var2[1] + t72 + t88 + t89;
  t105 = 0.24*var2[2]*t11;
  t106 = var2[0] + t105;
  t122 = -0.11*var2[2]*t23;
  t123 = -0.11*var2[3]*t23;
  t124 = var2[0] + t122 + t123;
  t136 = var2[2]*t135;
  t137 = var2[3]*t135;
  t138 = 0.4*t19*t23;
  t139 = -0.4*t116*t24;
  t140 = -1.*t116*t24;
  t141 = t130 + t140;
  t142 = -0.64*t141;
  t143 = t138 + t139 + t142;
  t144 = var2[4]*t143;
  t145 = var2[0] + t136 + t137 + t144;
  t165 = -0.11*var2[2]*t64;
  t166 = -0.11*var2[5]*t64;
  t167 = var2[0] + t165 + t166;
  t179 = var2[2]*t178;
  t180 = var2[5]*t178;
  t181 = 0.4*t60*t64;
  t182 = -0.4*t159*t65;
  t183 = -1.*t159*t65;
  t184 = t173 + t183;
  t185 = -0.64*t184;
  t186 = t181 + t182 + t185;
  t187 = var2[6]*t186;
  t188 = var2[0] + t179 + t180 + t187;
  p_output1[0]=0. + 6.8*t17*t4 + 3.2*t4*t49 + 6.8*t4*t58 + 12.*t4*t7 + 3.2*t4*t90;
  p_output1[1]=0. + 12.*(-1.*t7*(t108 + 0.24*t5 + var1[0]) + t106*(t102 + 0.24*t11 + var1[1])) + 3.2*(-1.*t49*(0. + t108 - 0.64*(t116*t19 + t23*t24) + t116*t35 + t23*t41 + var1[0]) + t145*(0. + t102 + t128 + t129 + t133 + var1[1])) + 3.2*(-1.*t90*(0. + t108 - 0.64*(t159*t60 + t64*t65) + t159*t76 + t64*t82 + var1[0]) + t188*(0. + t102 + t171 + t172 + t176 + var1[1])) + 6.8*(-1.*t17*(t108 - 0.11*t116 + var1[0]) + t124*(t102 - 0.11*t23 + var1[1])) + 6.8*(-1.*t58*(t108 - 0.11*t159 + var1[0]) + t167*(t102 - 0.11*t64 + var1[1])) + 1.33*var2[2] + 0.47*(var2[2] + var2[3]) + 0.2*(0. + var2[2] + var2[3] + var2[4]) + 0.47*(var2[2] + var2[5]) + 0.2*(0. + var2[2] + var2[5] + var2[6]);
  p_output1[2]=0. - 12.*t106*t4 - 6.8*t124*t4 - 3.2*t145*t4 - 6.8*t167*t4 - 3.2*t188*t4;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "AMworld_about_pA_mex.hh"

namespace SymExpression
{

void AMworld_about_pA_mex_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
