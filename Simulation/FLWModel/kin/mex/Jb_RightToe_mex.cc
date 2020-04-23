/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:45 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t3203;
  double t3181;
  double t3185;
  double t3205;
  double t3215;
  double t2030;
  double t3216;
  double t3217;
  double t3223;
  double t3197;
  double t3209;
  double t3210;
  double t3246;
  double t3247;
  double t3250;
  double t3224;
  double t3291;
  double t3298;
  double t3305;
  double t3310;
  double t3311;
  double t3315;
  double t3316;
  double t3337;
  double t3349;
  double t3352;
  double t3312;
  double t3320;
  double t3335;
  t3203 = Cos(var1[5]);
  t3181 = Cos(var1[6]);
  t3185 = Sin(var1[5]);
  t3205 = Sin(var1[6]);
  t3215 = Cos(var1[2]);
  t2030 = Sin(var1[2]);
  t3216 = t3203*t3181;
  t3217 = -1.*t3185*t3205;
  t3223 = 0. + t3216 + t3217;
  t3197 = -1.*t3181*t3185;
  t3209 = -1.*t3203*t3205;
  t3210 = 0. + t3197 + t3209;
  t3246 = t3181*t3185;
  t3247 = t3203*t3205;
  t3250 = 0. + t3246 + t3247;
  t3224 = t3215*t3223;
  t3291 = -1.*t3181;
  t3298 = 1. + t3291;
  t3305 = -0.4*t3298;
  t3310 = -0.8*t3181;
  t3311 = 0. + t3305 + t3310;
  t3315 = -0.4*t3205;
  t3316 = 0. + t3315;
  t3337 = t3203*t3311;
  t3349 = -1.*t3185*t3316;
  t3352 = 0. + t3337 + t3349;
  t3312 = t3311*t3185;
  t3320 = t3203*t3316;
  t3335 = 0. + t3312 + t3320;
  p_output1[0]=0. + t2030*t3210 + t3224;
  p_output1[1]=0.;
  p_output1[2]=0. + t2030*t3223 + t3215*t3250;
  p_output1[3]=0.;
  p_output1[4]=0.;
  p_output1[5]=0.;
  p_output1[6]=0. + t3210*t3215 - 1.*t2030*t3223;
  p_output1[7]=0.;
  p_output1[8]=0. + t3224 - 1.*t2030*t3250;
  p_output1[9]=0.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=0. + t3250*t3335 + t3223*t3352;
  p_output1[13]=0.;
  p_output1[14]=0. - 1.*t3223*t3335 - 1.*t3210*t3352;
  p_output1[15]=0.;
  p_output1[16]=1.;
  p_output1[17]=0.;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0. + t3181*t3311 + t3205*t3316;
  p_output1[31]=0.;
  p_output1[32]=0. + t3205*t3311 - 1.*t3181*t3316;
  p_output1[33]=0.;
  p_output1[34]=1.;
  p_output1[35]=0.;
  p_output1[36]=-0.4;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=0.;
  p_output1[40]=1.;
  p_output1[41]=0.;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jb_RightToe_mex.hh"

namespace SymExpression
{

void Jb_RightToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
