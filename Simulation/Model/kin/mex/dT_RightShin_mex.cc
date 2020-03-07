/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:28 GMT-05:00
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
  double t2574;
  double t2567;
  double t2568;
  double t2578;
  double t2558;
  double t2573;
  double t2579;
  double t2580;
  double t2581;
  double t2582;
  double t2583;
  double t2584;
  double t2585;
  double t2588;
  double t2589;
  double t2600;
  double t2603;
  double t2604;
  double t2605;
  double t2606;
  double t2607;
  double t2611;
  double t2612;
  double t2613;
  double t2592;
  double t2593;
  double t2594;
  double t2621;
  double t2622;
  double t2626;
  double t2627;
  double t2628;
  double t2629;
  double t2630;
  double t2631;
  double t2632;
  double t2633;
  double t2634;
  double t2635;
  double t2616;
  double t2617;
  double t2649;
  double t2650;
  double t2651;
  double t2652;
  t2574 = Cos(var1[2]);
  t2567 = Cos(var1[5]);
  t2568 = Sin(var1[2]);
  t2578 = Sin(var1[5]);
  t2558 = Cos(var1[6]);
  t2573 = -1.*t2567*t2568;
  t2579 = -1.*t2574*t2578;
  t2580 = t2573 + t2579;
  t2581 = t2558*t2580;
  t2582 = t2574*t2567;
  t2583 = -1.*t2568*t2578;
  t2584 = t2582 + t2583;
  t2585 = Sin(var1[6]);
  t2588 = -1.*t2584*t2585;
  t2589 = t2581 + t2588;
  t2600 = -1.*t2580*t2585;
  t2603 = -1.*t2574*t2567;
  t2604 = t2568*t2578;
  t2605 = t2603 + t2604;
  t2606 = t2558*t2605;
  t2607 = t2606 + t2600;
  t2611 = t2558*t2584;
  t2612 = t2580*t2585;
  t2613 = t2611 + t2612;
  t2592 = t2567*t2568;
  t2593 = t2574*t2578;
  t2594 = t2592 + t2593;
  t2621 = t2605*t2585;
  t2622 = t2581 + t2621;
  t2626 = -1.*t2558;
  t2627 = 1. + t2626;
  t2628 = -0.4*t2627;
  t2629 = 0. + t2628;
  t2630 = t2629*t2584;
  t2631 = 0.4*t2585;
  t2632 = 0. + t2631;
  t2633 = t2580*t2632;
  t2634 = -0.64*t2613;
  t2635 = t2630 + t2633 + t2634;
  t2616 = -1.*t2594*t2585;
  t2617 = t2611 + t2616;
  t2649 = t2629*t2580;
  t2650 = t2605*t2632;
  t2651 = -0.64*t2622;
  t2652 = t2649 + t2650 + t2651;
  p_output1[0]=t2589*var2[2] + t2589*var2[5] + (t2588 - 1.*t2558*t2594)*var2[6];
  p_output1[1]=0;
  p_output1[2]=t2607*var2[2] + t2607*var2[5] + (-1.*t2558*t2584 + t2600)*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t2613*var2[2] + t2613*var2[5] + t2617*var2[6];
  p_output1[9]=0;
  p_output1[10]=t2622*var2[2] + t2622*var2[5] + t2589*var2[6];
  p_output1[11]=0;
  p_output1[12]=var2[0] + t2635*var2[2] + t2635*var2[5] + (0.4*t2558*t2584 - 0.4*t2585*t2594 - 0.64*t2617)*var2[6];
  p_output1[13]=0;
  p_output1[14]=var2[1] + t2652*var2[2] + t2652*var2[5] + (0.4*t2558*t2580 - 0.4*t2584*t2585 - 0.64*t2589)*var2[6];
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
