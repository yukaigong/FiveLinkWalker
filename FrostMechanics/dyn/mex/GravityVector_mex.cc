/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:27:16 GMT-05:00
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
  double t268;
  double t367;
  double t522;
  double t552;
  double t554;
  double t590;
  double t633;
  double t981;
  double t1624;
  double t1625;
  double t1627;
  double t1630;
  double t1939;
  double t2010;
  double t2165;
  double t2166;
  double t2173;
  double t2246;
  double t2695;
  double t2719;
  double t2870;
  double t3093;
  double t977;
  double t993;
  double t1037;
  double t1245;
  double t1688;
  double t1805;
  double t1813;
  double t1823;
  double t1884;
  double t1913;
  double t1923;
  double t3987;
  double t3988;
  double t3989;
  double t2245;
  double t2589;
  double t2605;
  double t2658;
  double t3097;
  double t3243;
  double t3254;
  double t3403;
  double t3555;
  double t3808;
  double t3982;
  double t4169;
  double t5045;
  double t5131;
  t268 = Sin(var1[2]);
  t367 = Cos(var1[3]);
  t522 = -1.*t367*t268;
  t552 = Cos(var1[2]);
  t554 = Sin(var1[3]);
  t590 = -1.*t552*t554;
  t633 = t522 + t590;
  t981 = Cos(var1[4]);
  t1624 = -1.*t552*t367;
  t1625 = t268*t554;
  t1627 = t1624 + t1625;
  t1630 = Sin(var1[4]);
  t1939 = Cos(var1[5]);
  t2010 = -1.*t1939*t268;
  t2165 = Sin(var1[5]);
  t2166 = -1.*t552*t2165;
  t2173 = t2010 + t2166;
  t2246 = Cos(var1[6]);
  t2695 = -1.*t552*t1939;
  t2719 = t268*t2165;
  t2870 = t2695 + t2719;
  t3093 = Sin(var1[6]);
  t977 = -7.33788*t633;
  t993 = -1.*t981;
  t1037 = 1. + t993;
  t1245 = -0.4*t1037*t633;
  t1688 = 0.4*t1627*t1630;
  t1805 = t981*t633;
  t1813 = t1627*t1630;
  t1823 = t1805 + t1813;
  t1884 = -0.64*t1823;
  t1913 = t1245 + t1688 + t1884;
  t1923 = 31.392000000000003*t1913;
  t3987 = t552*t367;
  t3988 = -1.*t268*t554;
  t3989 = t3987 + t3988;
  t2245 = -7.33788*t2173;
  t2589 = -1.*t2246;
  t2605 = 1. + t2589;
  t2658 = -0.4*t2605*t2173;
  t3097 = 0.4*t2870*t3093;
  t3243 = t2246*t2173;
  t3254 = t2870*t3093;
  t3403 = t3243 + t3254;
  t3555 = -0.64*t3403;
  t3808 = t2658 + t3097 + t3555;
  t3982 = 31.392000000000003*t3808;
  t4169 = t552*t1939;
  t5045 = -1.*t268*t2165;
  t5131 = t4169 + t5045;
  p_output1[0]=0;
  p_output1[1]=313.92;
  p_output1[2]=t1923 + t2245 - 28.252799999999997*t268 + t3982 + t977;
  p_output1[3]=t1923 + t977;
  p_output1[4]=31.392000000000003*(-0.4*t1630*t3989 - 0.64*(t1805 - 1.*t1630*t3989) + 0.4*t633*t981);
  p_output1[5]=t2245 + t3982;
  p_output1[6]=31.392000000000003*(0.4*t2173*t2246 - 0.4*t3093*t5131 - 0.64*(t3243 - 1.*t3093*t5131));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "GravityVector_mex.hh"

namespace SymExpression
{

void GravityVector_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
