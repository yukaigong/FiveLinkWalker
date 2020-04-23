/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:22 GMT-05:00
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
  double t2641;
  double t2635;
  double t2637;
  double t2644;
  double t2634;
  double t2640;
  double t2645;
  double t2650;
  double t2660;
  double t2661;
  double t2662;
  double t2664;
  double t2665;
  double t2667;
  double t2668;
  double t2652;
  double t2653;
  double t2672;
  double t2673;
  double t2674;
  double t2675;
  double t2654;
  double t2647;
  double t2690;
  double t2691;
  double t2692;
  double t2696;
  double t2697;
  double t2678;
  double t2679;
  double t2680;
  double t2655;
  double t2704;
  double t2705;
  double t2706;
  double t2707;
  double t2708;
  double t2709;
  double t2710;
  double t2711;
  double t2712;
  double t2713;
  double t2714;
  double t2722;
  double t2723;
  t2641 = Cos(var1[3]);
  t2635 = Cos(var1[4]);
  t2637 = Sin(var1[3]);
  t2644 = Sin(var1[4]);
  t2634 = Cos(var1[2]);
  t2640 = -1.*t2635*t2637;
  t2645 = -1.*t2641*t2644;
  t2650 = Sin(var1[2]);
  t2660 = t2640 + t2645;
  t2661 = t2634*t2660;
  t2662 = -1.*t2641*t2635;
  t2664 = t2637*t2644;
  t2665 = t2662 + t2664;
  t2667 = t2650*t2665;
  t2668 = t2661 + t2667;
  t2652 = t2641*t2635;
  t2653 = -1.*t2637*t2644;
  t2672 = t2650*t2660;
  t2673 = t2652 + t2653;
  t2674 = t2634*t2673;
  t2675 = t2672 + t2674;
  t2654 = 0. + t2652 + t2653;
  t2647 = 0. + t2640 + t2645;
  t2690 = -1.*t2650*t2660;
  t2691 = t2634*t2665;
  t2692 = t2690 + t2691;
  t2696 = -1.*t2650*t2673;
  t2697 = t2661 + t2696;
  t2678 = t2635*t2637;
  t2679 = t2641*t2644;
  t2680 = 0. + t2678 + t2679;
  t2655 = -1.*t2650*t2654;
  t2704 = -1.*t2635;
  t2705 = 1. + t2704;
  t2706 = -0.4*t2705;
  t2707 = -0.4*t2635;
  t2708 = 0. + t2706 + t2707;
  t2709 = t2641*t2708;
  t2710 = 0. + t2709;
  t2711 = t2710*t2660;
  t2712 = t2708*t2637;
  t2713 = 0. + t2712;
  t2714 = t2713*t2673;
  t2722 = -1.*t2713*t2660;
  t2723 = -1.*t2710*t2665;
  p_output1[0]=(t2634*t2647 + t2655)*var2[2] + t2668*var2[3] + t2668*var2[4];
  p_output1[1]=0;
  p_output1[2]=(t2634*t2654 - 1.*t2650*t2680)*var2[2] + t2675*var2[3] + t2675*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t2647*t2650 - 1.*t2634*t2654)*var2[2] + t2692*var2[3] + t2692*var2[4];
  p_output1[7]=0;
  p_output1[8]=(t2655 - 1.*t2634*t2680)*var2[2] + t2697*var2[3] + t2697*var2[4];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-1.*t2637*t2654*t2708 + t2641*t2680*t2708 + t2711 + t2714)*var2[3] + (0. + t2711 + t2714)*var2[4];
  p_output1[13]=0;
  p_output1[14]=(t2637*t2647*t2708 - 1.*t2641*t2654*t2708 + t2722 + t2723)*var2[3] + (0. + t2722 + t2723)*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(0. - 1.*t2644*t2708)*var2[4];
  p_output1[19]=0;
  p_output1[20]=(0. + t2635*t2708)*var2[4];
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
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

#include "dJb_LeftKnee_mex.hh"

namespace SymExpression
{

void dJb_LeftKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
