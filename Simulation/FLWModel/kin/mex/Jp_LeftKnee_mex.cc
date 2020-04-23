/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:18 GMT-05:00
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
  double t2503;
  double t2506;
  double t2502;
  double t2507;
  double t2490;
  double t2505;
  double t2510;
  double t2511;
  double t2513;
  double t2514;
  double t2515;
  double t2516;
  double t2491;
  double t2495;
  double t2500;
  double t2501;
  double t2517;
  double t2520;
  double t2528;
  double t2529;
  double t2530;
  double t2512;
  double t2521;
  double t2522;
  double t2523;
  double t2524;
  double t2525;
  double t2526;
  double t2527;
  double t2531;
  double t2532;
  double t2533;
  double t2534;
  double t2535;
  double t2536;
  double t2538;
  double t2539;
  double t2540;
  t2503 = Cos(var1[3]);
  t2506 = Sin(var1[2]);
  t2502 = Cos(var1[2]);
  t2507 = Sin(var1[3]);
  t2490 = Cos(var1[4]);
  t2505 = t2502*t2503;
  t2510 = -1.*t2506*t2507;
  t2511 = t2505 + t2510;
  t2513 = -1.*t2503*t2506;
  t2514 = -1.*t2502*t2507;
  t2515 = t2513 + t2514;
  t2516 = Sin(var1[4]);
  t2491 = -1.*t2490;
  t2495 = 1. + t2491;
  t2500 = -0.4*t2495;
  t2501 = 0. + t2500;
  t2517 = 0.4*t2516;
  t2520 = 0. + t2517;
  t2528 = -1.*t2502*t2503;
  t2529 = t2506*t2507;
  t2530 = t2528 + t2529;
  t2512 = t2501*t2511;
  t2521 = t2515*t2520;
  t2522 = t2490*t2511;
  t2523 = t2515*t2516;
  t2524 = t2522 + t2523;
  t2525 = -0.4*t2524;
  t2526 = t2512 + t2521 + t2525;
  t2527 = t2501*t2515;
  t2531 = t2530*t2520;
  t2532 = t2490*t2515;
  t2533 = t2530*t2516;
  t2534 = t2532 + t2533;
  t2535 = -0.4*t2534;
  t2536 = t2527 + t2531 + t2535;
  t2538 = t2503*t2506;
  t2539 = t2502*t2507;
  t2540 = t2538 + t2539;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t2526;
  p_output1[7]=0;
  p_output1[8]=t2536;
  p_output1[9]=t2526;
  p_output1[10]=0;
  p_output1[11]=t2536;
  p_output1[12]=0.4*t2490*t2511 - 0.4*t2516*t2540 - 0.4*(t2522 - 1.*t2516*t2540);
  p_output1[13]=0;
  p_output1[14]=0.4*t2490*t2515 - 0.4*t2511*t2516 - 0.4*(-1.*t2511*t2516 + t2532);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jp_LeftKnee_mex.hh"

namespace SymExpression
{

void Jp_LeftKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
