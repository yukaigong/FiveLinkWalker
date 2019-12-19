/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:27 GMT-05:00
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
  double t730;
  double t702;
  double t712;
  double t736;
  double t695;
  double t721;
  double t737;
  double t738;
  double t743;
  double t745;
  double t746;
  double t747;
  double t750;
  double t817;
  double t820;
  double t878;
  double t761;
  double t762;
  double t770;
  double t804;
  double t810;
  double t879;
  double t880;
  double t884;
  double t885;
  double t886;
  double t887;
  double t888;
  double t897;
  double t1006;
  double t1016;
  double t1028;
  double t983;
  double t1030;
  double t1031;
  double t1033;
  double t1034;
  double t1040;
  double t740;
  double t749;
  double t752;
  double t754;
  double t755;
  double t756;
  double t760;
  double t889;
  double t890;
  double t891;
  double t892;
  double t893;
  double t898;
  double t899;
  double t966;
  double t974;
  double t982;
  double t1050;
  double t1051;
  double t1054;
  t730 = Cos(var1[2]);
  t702 = Cos(var1[3]);
  t712 = Sin(var1[2]);
  t736 = Sin(var1[3]);
  t695 = Cos(var1[4]);
  t721 = -1.*t702*t712;
  t737 = -1.*t730*t736;
  t738 = t721 + t737;
  t743 = t730*t702;
  t745 = -1.*t712*t736;
  t746 = t743 + t745;
  t747 = Sin(var1[4]);
  t750 = t695*t738;
  t817 = -1.*t730*t702;
  t820 = t712*t736;
  t878 = t817 + t820;
  t761 = -1.*t695;
  t762 = 1. + t761;
  t770 = -0.4*t762;
  t804 = 0. + t770;
  t810 = t804*t738;
  t879 = 0.4*t747;
  t880 = 0. + t879;
  t884 = t878*t880;
  t885 = t878*t747;
  t886 = t750 + t885;
  t887 = -0.8*t886;
  t888 = t810 + t884 + t887;
  t897 = t695*t878;
  t1006 = t702*t712;
  t1016 = t730*t736;
  t1028 = t1006 + t1016;
  t983 = t804*t878;
  t1030 = t1028*t880;
  t1031 = t1028*t747;
  t1033 = t897 + t1031;
  t1034 = -0.8*t1033;
  t1040 = t983 + t1030 + t1034;
  t740 = 0.4*t695*t738;
  t749 = -0.4*t746*t747;
  t752 = -1.*t746*t747;
  t754 = t750 + t752;
  t755 = -0.8*t754;
  t756 = t740 + t749 + t755;
  t760 = var2[4]*t756;
  t889 = var2[2]*t888;
  t890 = var2[3]*t888;
  t891 = t760 + t889 + t890;
  t892 = 0.4*t695*t878;
  t893 = -0.4*t738*t747;
  t898 = -1.*t738*t747;
  t899 = t897 + t898;
  t966 = -0.8*t899;
  t974 = t892 + t893 + t966;
  t982 = var2[4]*t974;
  t1050 = var2[2]*t1040;
  t1051 = var2[3]*t1040;
  t1054 = t982 + t1050 + t1051;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t891;
  p_output1[7]=0;
  p_output1[8]=t1054;
  p_output1[9]=t891;
  p_output1[10]=0;
  p_output1[11]=t1054;
  p_output1[12]=t756*var2[2] + t756*var2[3] + (-0.4*t1028*t695 + t749 - 0.8*(-1.*t1028*t695 + t752))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t974*var2[2] + t974*var2[3] + (-0.4*t695*t746 + t893 - 0.8*(-1.*t695*t746 + t898))*var2[4];
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

#include "dJp_LeftToe_mex.hh"

namespace SymExpression
{

void dJp_LeftToe_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
