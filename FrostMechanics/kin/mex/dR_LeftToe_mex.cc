/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:38 GMT-05:00
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
  double t2433;
  double t2425;
  double t2426;
  double t2439;
  double t2169;
  double t2432;
  double t2440;
  double t2441;
  double t2442;
  double t2443;
  double t2444;
  double t2445;
  double t2446;
  double t2447;
  double t2448;
  double t2539;
  double t2548;
  double t2551;
  double t2566;
  double t2571;
  double t2574;
  double t2616;
  double t2620;
  double t2623;
  double t2457;
  double t2458;
  double t2476;
  double t2686;
  double t2698;
  t2433 = Cos(var1[2]);
  t2425 = Cos(var1[3]);
  t2426 = Sin(var1[2]);
  t2439 = Sin(var1[3]);
  t2169 = Cos(var1[4]);
  t2432 = -1.*t2425*t2426;
  t2440 = -1.*t2433*t2439;
  t2441 = t2432 + t2440;
  t2442 = t2169*t2441;
  t2443 = t2433*t2425;
  t2444 = -1.*t2426*t2439;
  t2445 = t2443 + t2444;
  t2446 = Sin(var1[4]);
  t2447 = -1.*t2445*t2446;
  t2448 = t2442 + t2447;
  t2539 = -1.*t2441*t2446;
  t2548 = -1.*t2433*t2425;
  t2551 = t2426*t2439;
  t2566 = t2548 + t2551;
  t2571 = t2169*t2566;
  t2574 = t2571 + t2539;
  t2616 = t2169*t2445;
  t2620 = t2441*t2446;
  t2623 = t2616 + t2620;
  t2457 = t2425*t2426;
  t2458 = t2433*t2439;
  t2476 = t2457 + t2458;
  t2686 = t2566*t2446;
  t2698 = t2442 + t2686;
  p_output1[0]=t2448*var2[2] + t2448*var2[3] + (t2447 - 1.*t2169*t2476)*var2[4];
  p_output1[1]=0;
  p_output1[2]=t2574*var2[2] + t2574*var2[3] + (-1.*t2169*t2445 + t2539)*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t2623*var2[2] + t2623*var2[3] + (-1.*t2446*t2476 + t2616)*var2[4];
  p_output1[7]=0;
  p_output1[8]=t2698*var2[2] + t2698*var2[3] + t2448*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dR_LeftToe_mex.hh"

namespace SymExpression
{

void dR_LeftToe_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
