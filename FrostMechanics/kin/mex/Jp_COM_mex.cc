/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 22:18:18 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t27;
  double t54;
  double t13;
  double t55;
  double t6;
  double t53;
  double t67;
  double t82;
  double t84;
  double t85;
  double t86;
  double t87;
  double t94;
  double t117;
  double t118;
  double t119;
  double t132;
  double t134;
  double t131;
  double t133;
  double t135;
  double t136;
  double t138;
  double t139;
  double t140;
  double t144;
  double t146;
  double t156;
  double t157;
  double t158;
  double t113;
  double t114;
  double t115;
  double t116;
  double t120;
  double t121;
  double t122;
  double t123;
  double t124;
  double t125;
  double t152;
  double t153;
  double t154;
  double t155;
  double t159;
  double t160;
  double t161;
  double t162;
  double t163;
  double t164;
  double t173;
  double t181;
  double t182;
  double t183;
  double t194;
  double t202;
  double t203;
  double t204;
  double t179;
  double t180;
  double t184;
  double t185;
  double t186;
  double t187;
  double t188;
  double t189;
  double t200;
  double t201;
  double t205;
  double t206;
  double t207;
  double t208;
  double t209;
  double t210;
  t27 = Cos(var1[3]);
  t54 = Sin(var1[2]);
  t13 = Cos(var1[2]);
  t55 = Sin(var1[3]);
  t6 = Cos(var1[4]);
  t53 = t13*t27;
  t67 = -1.*t54*t55;
  t82 = t53 + t67;
  t84 = t27*t54;
  t85 = t13*t55;
  t86 = t84 + t85;
  t87 = Sin(var1[4]);
  t94 = t6*t82;
  t117 = -1.*t27*t54;
  t118 = -1.*t13*t55;
  t119 = t117 + t118;
  t132 = Cos(var1[5]);
  t134 = Sin(var1[5]);
  t131 = Cos(var1[6]);
  t133 = t13*t132;
  t135 = -1.*t54*t134;
  t136 = t133 + t135;
  t138 = t132*t54;
  t139 = t13*t134;
  t140 = t138 + t139;
  t144 = Sin(var1[6]);
  t146 = t131*t136;
  t156 = -1.*t132*t54;
  t157 = -1.*t13*t134;
  t158 = t156 + t157;
  t113 = -0.748*t82;
  t114 = -1.*t6;
  t115 = 1. + t114;
  t116 = -0.4*t115*t82;
  t120 = 0.4*t119*t87;
  t121 = t119*t87;
  t122 = t94 + t121;
  t123 = -0.64*t122;
  t124 = t116 + t120 + t123;
  t125 = 3.2*t124;
  t152 = -0.748*t136;
  t153 = -1.*t131;
  t154 = 1. + t153;
  t155 = -0.4*t154*t136;
  t159 = 0.4*t158*t144;
  t160 = t158*t144;
  t161 = t146 + t160;
  t162 = -0.64*t161;
  t163 = t155 + t159 + t162;
  t164 = 3.2*t163;
  t173 = t6*t119;
  t181 = -1.*t13*t27;
  t182 = t54*t55;
  t183 = t181 + t182;
  t194 = t131*t158;
  t202 = -1.*t13*t132;
  t203 = t54*t134;
  t204 = t202 + t203;
  t179 = -0.748*t119;
  t180 = -0.4*t115*t119;
  t184 = 0.4*t183*t87;
  t185 = t183*t87;
  t186 = t173 + t185;
  t187 = -0.64*t186;
  t188 = t180 + t184 + t187;
  t189 = 3.2*t188;
  t200 = -0.748*t158;
  t201 = -0.4*t154*t158;
  t205 = 0.4*t204*t144;
  t206 = t204*t144;
  t207 = t194 + t206;
  t208 = -0.64*t207;
  t209 = t201 + t205 + t208;
  t210 = 3.2*t209;
  p_output1[0]=var2[0] + 0.03125*(t113 + t125 + 2.88*t13 + t152 + t164)*var2[2] + 0.03125*(t113 + t125)*var2[3] + 0.1*(0.4*t6*t82 - 0.4*t86*t87 - 0.64*(-1.*t86*t87 + t94))*var2[4] + 0.03125*(t152 + t164)*var2[5] + 0.1*(0.4*t131*t136 - 0.4*t140*t144 - 0.64*(-1.*t140*t144 + t146))*var2[6];
  p_output1[1]=0;
  p_output1[2]=var2[1] + 0.03125*(t179 + t189 + t200 + t210 - 2.88*t54)*var2[2] + 0.03125*(t179 + t189)*var2[3] + 0.1*(0.4*t119*t6 - 0.4*t82*t87 - 0.64*(t173 - 1.*t82*t87))*var2[4] + 0.03125*(t200 + t210)*var2[5] + 0.1*(-0.4*t136*t144 + 0.4*t131*t158 - 0.64*(-1.*t136*t144 + t194))*var2[6];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jp_COM_mex.hh"

namespace SymExpression
{

void Jp_COM_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
