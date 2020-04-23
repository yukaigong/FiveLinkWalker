/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:19 GMT-05:00
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
  double t2547;
  double t2531;
  double t2536;
  double t2550;
  double t2527;
  double t2543;
  double t2551;
  double t2552;
  double t2555;
  double t2557;
  double t2558;
  double t2559;
  double t2562;
  double t2575;
  double t2576;
  double t2577;
  double t2569;
  double t2570;
  double t2571;
  double t2573;
  double t2574;
  double t2578;
  double t2579;
  double t2580;
  double t2581;
  double t2582;
  double t2583;
  double t2584;
  double t2590;
  double t2597;
  double t2598;
  double t2599;
  double t2596;
  double t2600;
  double t2601;
  double t2602;
  double t2603;
  double t2604;
  double t2554;
  double t2561;
  double t2563;
  double t2565;
  double t2566;
  double t2567;
  double t2568;
  double t2585;
  double t2586;
  double t2587;
  double t2588;
  double t2589;
  double t2591;
  double t2592;
  double t2593;
  double t2594;
  double t2595;
  double t2605;
  double t2606;
  double t2607;
  t2547 = Cos(var1[2]);
  t2531 = Cos(var1[3]);
  t2536 = Sin(var1[2]);
  t2550 = Sin(var1[3]);
  t2527 = Cos(var1[4]);
  t2543 = -1.*t2531*t2536;
  t2551 = -1.*t2547*t2550;
  t2552 = t2543 + t2551;
  t2555 = t2547*t2531;
  t2557 = -1.*t2536*t2550;
  t2558 = t2555 + t2557;
  t2559 = Sin(var1[4]);
  t2562 = t2527*t2552;
  t2575 = -1.*t2547*t2531;
  t2576 = t2536*t2550;
  t2577 = t2575 + t2576;
  t2569 = -1.*t2527;
  t2570 = 1. + t2569;
  t2571 = -0.4*t2570;
  t2573 = 0. + t2571;
  t2574 = t2573*t2552;
  t2578 = 0.4*t2559;
  t2579 = 0. + t2578;
  t2580 = t2577*t2579;
  t2581 = t2577*t2559;
  t2582 = t2562 + t2581;
  t2583 = -0.4*t2582;
  t2584 = t2574 + t2580 + t2583;
  t2590 = t2527*t2577;
  t2597 = t2531*t2536;
  t2598 = t2547*t2550;
  t2599 = t2597 + t2598;
  t2596 = t2573*t2577;
  t2600 = t2599*t2579;
  t2601 = t2599*t2559;
  t2602 = t2590 + t2601;
  t2603 = -0.4*t2602;
  t2604 = t2596 + t2600 + t2603;
  t2554 = 0.4*t2527*t2552;
  t2561 = -0.4*t2558*t2559;
  t2563 = -1.*t2558*t2559;
  t2565 = t2562 + t2563;
  t2566 = -0.4*t2565;
  t2567 = t2554 + t2561 + t2566;
  t2568 = var2[4]*t2567;
  t2585 = var2[2]*t2584;
  t2586 = var2[3]*t2584;
  t2587 = t2568 + t2585 + t2586;
  t2588 = 0.4*t2527*t2577;
  t2589 = -0.4*t2552*t2559;
  t2591 = -1.*t2552*t2559;
  t2592 = t2590 + t2591;
  t2593 = -0.4*t2592;
  t2594 = t2588 + t2589 + t2593;
  t2595 = var2[4]*t2594;
  t2605 = var2[2]*t2604;
  t2606 = var2[3]*t2604;
  t2607 = t2595 + t2605 + t2606;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t2587;
  p_output1[7]=0;
  p_output1[8]=t2607;
  p_output1[9]=t2587;
  p_output1[10]=0;
  p_output1[11]=t2607;
  p_output1[12]=t2567*var2[2] + t2567*var2[3] + (t2561 - 0.4*t2527*t2599 - 0.4*(t2563 - 1.*t2527*t2599))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t2594*var2[2] + t2594*var2[3] + (-0.4*t2527*t2558 + t2589 - 0.4*(-1.*t2527*t2558 + t2591))*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJp_LeftKnee_mex.hh"

namespace SymExpression
{

void dJp_LeftKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
