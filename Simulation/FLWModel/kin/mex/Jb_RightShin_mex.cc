/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:21 GMT-05:00
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
  double t2325;
  double t2316;
  double t2322;
  double t2326;
  double t2333;
  double t2315;
  double t2334;
  double t2337;
  double t2338;
  double t2323;
  double t2328;
  double t2329;
  double t2341;
  double t2342;
  double t2343;
  double t2339;
  double t2354;
  double t2355;
  double t2356;
  double t2357;
  double t2358;
  double t2360;
  double t2362;
  double t2366;
  double t2367;
  double t2368;
  double t2359;
  double t2363;
  double t2364;
  t2325 = Cos(var1[5]);
  t2316 = Cos(var1[6]);
  t2322 = Sin(var1[5]);
  t2326 = Sin(var1[6]);
  t2333 = Cos(var1[2]);
  t2315 = Sin(var1[2]);
  t2334 = t2325*t2316;
  t2337 = -1.*t2322*t2326;
  t2338 = 0. + t2334 + t2337;
  t2323 = -1.*t2316*t2322;
  t2328 = -1.*t2325*t2326;
  t2329 = 0. + t2323 + t2328;
  t2341 = t2316*t2322;
  t2342 = t2325*t2326;
  t2343 = 0. + t2341 + t2342;
  t2339 = t2333*t2338;
  t2354 = -1.*t2316;
  t2355 = 1. + t2354;
  t2356 = -0.4*t2355;
  t2357 = -0.64*t2316;
  t2358 = 0. + t2356 + t2357;
  t2360 = -0.24*t2326;
  t2362 = 0. + t2360;
  t2366 = t2325*t2358;
  t2367 = -1.*t2322*t2362;
  t2368 = 0. + t2366 + t2367;
  t2359 = t2358*t2322;
  t2363 = t2325*t2362;
  t2364 = 0. + t2359 + t2363;
  p_output1[0]=0. + t2315*t2329 + t2339;
  p_output1[1]=0.;
  p_output1[2]=0. + t2315*t2338 + t2333*t2343;
  p_output1[3]=0.;
  p_output1[4]=0.;
  p_output1[5]=0.;
  p_output1[6]=0. + t2329*t2333 - 1.*t2315*t2338;
  p_output1[7]=0.;
  p_output1[8]=0. + t2339 - 1.*t2315*t2343;
  p_output1[9]=0.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=0. + t2343*t2364 + t2338*t2368;
  p_output1[13]=0.;
  p_output1[14]=0. - 1.*t2338*t2364 - 1.*t2329*t2368;
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
  p_output1[30]=0. + t2316*t2358 + t2326*t2362;
  p_output1[31]=0.;
  p_output1[32]=0. + t2326*t2358 - 1.*t2316*t2362;
  p_output1[33]=0.;
  p_output1[34]=1.;
  p_output1[35]=0.;
  p_output1[36]=-0.24;
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

#include "Jb_RightShin_mex.hh"

namespace SymExpression
{

void Jb_RightShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
