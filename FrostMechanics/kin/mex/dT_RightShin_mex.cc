/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:26:29 GMT-05:00
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
  double t5152;
  double t5145;
  double t5146;
  double t5156;
  double t5136;
  double t5151;
  double t5157;
  double t5158;
  double t5159;
  double t5160;
  double t5161;
  double t5162;
  double t5163;
  double t5166;
  double t5167;
  double t5178;
  double t5181;
  double t5182;
  double t5183;
  double t5184;
  double t5185;
  double t5189;
  double t5190;
  double t5191;
  double t5170;
  double t5171;
  double t5172;
  double t5199;
  double t5200;
  double t5204;
  double t5205;
  double t5206;
  double t5207;
  double t5208;
  double t5209;
  double t5210;
  double t5211;
  double t5212;
  double t5213;
  double t5194;
  double t5195;
  double t5227;
  double t5228;
  double t5229;
  double t5230;
  t5152 = Cos(var1[2]);
  t5145 = Cos(var1[5]);
  t5146 = Sin(var1[2]);
  t5156 = Sin(var1[5]);
  t5136 = Cos(var1[6]);
  t5151 = -1.*t5145*t5146;
  t5157 = -1.*t5152*t5156;
  t5158 = t5151 + t5157;
  t5159 = t5136*t5158;
  t5160 = t5152*t5145;
  t5161 = -1.*t5146*t5156;
  t5162 = t5160 + t5161;
  t5163 = Sin(var1[6]);
  t5166 = -1.*t5162*t5163;
  t5167 = t5159 + t5166;
  t5178 = -1.*t5158*t5163;
  t5181 = -1.*t5152*t5145;
  t5182 = t5146*t5156;
  t5183 = t5181 + t5182;
  t5184 = t5136*t5183;
  t5185 = t5184 + t5178;
  t5189 = t5136*t5162;
  t5190 = t5158*t5163;
  t5191 = t5189 + t5190;
  t5170 = t5145*t5146;
  t5171 = t5152*t5156;
  t5172 = t5170 + t5171;
  t5199 = t5183*t5163;
  t5200 = t5159 + t5199;
  t5204 = -1.*t5136;
  t5205 = 1. + t5204;
  t5206 = -0.4*t5205;
  t5207 = 0. + t5206;
  t5208 = t5207*t5162;
  t5209 = 0.4*t5163;
  t5210 = 0. + t5209;
  t5211 = t5158*t5210;
  t5212 = -0.64*t5191;
  t5213 = t5208 + t5211 + t5212;
  t5194 = -1.*t5172*t5163;
  t5195 = t5189 + t5194;
  t5227 = t5207*t5158;
  t5228 = t5183*t5210;
  t5229 = -0.64*t5200;
  t5230 = t5227 + t5228 + t5229;
  p_output1[0]=t5167*var2[2] + t5167*var2[5] + (t5166 - 1.*t5136*t5172)*var2[6];
  p_output1[1]=0;
  p_output1[2]=t5185*var2[2] + t5185*var2[5] + (-1.*t5136*t5162 + t5178)*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t5191*var2[2] + t5191*var2[5] + t5195*var2[6];
  p_output1[9]=0;
  p_output1[10]=t5200*var2[2] + t5200*var2[5] + t5167*var2[6];
  p_output1[11]=0;
  p_output1[12]=var2[0] + t5213*var2[2] + t5213*var2[5] + (0.4*t5136*t5162 - 0.4*t5163*t5172 - 0.64*t5195)*var2[6];
  p_output1[13]=0;
  p_output1[14]=var2[1] + t5230*var2[2] + t5230*var2[5] + (0.4*t5136*t5158 - 0.4*t5162*t5163 - 0.64*t5167)*var2[6];
  p_output1[15]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dT_RightShin_mex.hh"

namespace SymExpression
{

void dT_RightShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
