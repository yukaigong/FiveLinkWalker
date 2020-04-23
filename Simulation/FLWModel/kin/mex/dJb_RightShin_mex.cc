/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:22 GMT-05:00
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
  double t2371;
  double t2363;
  double t2365;
  double t2374;
  double t2360;
  double t2370;
  double t2375;
  double t2380;
  double t2392;
  double t2393;
  double t2394;
  double t2395;
  double t2397;
  double t2399;
  double t2400;
  double t2382;
  double t2383;
  double t2406;
  double t2407;
  double t2408;
  double t2409;
  double t2386;
  double t2377;
  double t2424;
  double t2425;
  double t2426;
  double t2430;
  double t2431;
  double t2412;
  double t2413;
  double t2414;
  double t2387;
  double t2438;
  double t2439;
  double t2440;
  double t2441;
  double t2442;
  double t2443;
  double t2444;
  double t2445;
  double t2446;
  double t2447;
  double t2448;
  double t2451;
  double t2452;
  double t2453;
  double t2454;
  double t2455;
  double t2456;
  double t2457;
  double t2449;
  double t2472;
  double t2461;
  double t2462;
  double t2463;
  double t2465;
  double t2466;
  double t2467;
  double t2475;
  t2371 = Cos(var1[5]);
  t2363 = Cos(var1[6]);
  t2365 = Sin(var1[5]);
  t2374 = Sin(var1[6]);
  t2360 = Cos(var1[2]);
  t2370 = -1.*t2363*t2365;
  t2375 = -1.*t2371*t2374;
  t2380 = Sin(var1[2]);
  t2392 = t2370 + t2375;
  t2393 = t2360*t2392;
  t2394 = -1.*t2371*t2363;
  t2395 = t2365*t2374;
  t2397 = t2394 + t2395;
  t2399 = t2380*t2397;
  t2400 = t2393 + t2399;
  t2382 = t2371*t2363;
  t2383 = -1.*t2365*t2374;
  t2406 = t2380*t2392;
  t2407 = t2382 + t2383;
  t2408 = t2360*t2407;
  t2409 = t2406 + t2408;
  t2386 = 0. + t2382 + t2383;
  t2377 = 0. + t2370 + t2375;
  t2424 = -1.*t2380*t2392;
  t2425 = t2360*t2397;
  t2426 = t2424 + t2425;
  t2430 = -1.*t2380*t2407;
  t2431 = t2393 + t2430;
  t2412 = t2363*t2365;
  t2413 = t2371*t2374;
  t2414 = 0. + t2412 + t2413;
  t2387 = -1.*t2380*t2386;
  t2438 = -1.*t2363;
  t2439 = 1. + t2438;
  t2440 = -0.4*t2439;
  t2441 = -0.64*t2363;
  t2442 = 0. + t2440 + t2441;
  t2443 = t2371*t2442;
  t2444 = -0.24*t2374;
  t2445 = 0. + t2444;
  t2446 = -1.*t2365*t2445;
  t2447 = 0. + t2443 + t2446;
  t2448 = t2447*t2392;
  t2451 = t2442*t2365;
  t2452 = t2371*t2445;
  t2453 = 0. + t2451 + t2452;
  t2454 = t2453*t2407;
  t2455 = -1.*t2442*t2365;
  t2456 = -1.*t2371*t2445;
  t2457 = t2455 + t2456;
  t2449 = t2443 + t2446;
  t2472 = -1.*t2453*t2392;
  t2461 = 0.24*t2363*t2365;
  t2462 = 0.24*t2371*t2374;
  t2463 = t2461 + t2462;
  t2465 = -0.24*t2371*t2363;
  t2466 = 0.24*t2365*t2374;
  t2467 = t2465 + t2466;
  t2475 = -1.*t2447*t2397;
  p_output1[0]=(t2360*t2377 + t2387)*var2[2] + t2400*var2[5] + t2400*var2[6];
  p_output1[1]=0;
  p_output1[2]=(t2360*t2386 - 1.*t2380*t2414)*var2[2] + t2409*var2[5] + t2409*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t2377*t2380 - 1.*t2360*t2386)*var2[2] + t2426*var2[5] + t2426*var2[6];
  p_output1[7]=0;
  p_output1[8]=(t2387 - 1.*t2360*t2414)*var2[2] + t2431*var2[5] + t2431*var2[6];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(t2448 + t2414*t2449 + t2454 + t2386*t2457)*var2[5] + (t2448 + t2454 + t2386*t2463 + t2414*t2467)*var2[6];
  p_output1[13]=0;
  p_output1[14]=(-1.*t2386*t2449 - 1.*t2377*t2457 + t2472 + t2475)*var2[5] + (-1.*t2377*t2463 - 1.*t2386*t2467 + t2472 + t2475)*var2[6];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  p_output1[30]=(0. - 1.*t2374*t2442 + t2363*t2445)*var2[6];
  p_output1[31]=0;
  p_output1[32]=(0.24*Power(t2363,2) + 0.24*Power(t2374,2) + t2363*t2442 + t2374*t2445)*var2[6];
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJb_RightShin_mex.hh"

namespace SymExpression
{

void dJb_RightShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
