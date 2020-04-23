/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:29 GMT-05:00
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
  double t983;
  double t891;
  double t966;
  double t1006;
  double t1040;
  double t890;
  double t1050;
  double t1066;
  double t1069;
  double t974;
  double t1016;
  double t1030;
  double t1077;
  double t1093;
  double t1095;
  double t1075;
  double t1134;
  double t1147;
  double t1178;
  double t1179;
  double t1183;
  double t1203;
  double t1208;
  double t1237;
  double t1242;
  double t1262;
  double t1201;
  double t1210;
  double t1234;
  t983 = Cos(var1[3]);
  t891 = Cos(var1[4]);
  t966 = Sin(var1[3]);
  t1006 = Sin(var1[4]);
  t1040 = Cos(var1[2]);
  t890 = Sin(var1[2]);
  t1050 = t983*t891;
  t1066 = -1.*t966*t1006;
  t1069 = 0. + t1050 + t1066;
  t974 = -1.*t891*t966;
  t1016 = -1.*t983*t1006;
  t1030 = 0. + t974 + t1016;
  t1077 = t891*t966;
  t1093 = t983*t1006;
  t1095 = 0. + t1077 + t1093;
  t1075 = t1040*t1069;
  t1134 = -1.*t891;
  t1147 = 1. + t1134;
  t1178 = -0.4*t1147;
  t1179 = -0.8*t891;
  t1183 = 0. + t1178 + t1179;
  t1203 = -0.4*t1006;
  t1208 = 0. + t1203;
  t1237 = t983*t1183;
  t1242 = -1.*t966*t1208;
  t1262 = 0. + t1237 + t1242;
  t1201 = t1183*t966;
  t1210 = t983*t1208;
  t1234 = 0. + t1201 + t1210;
  p_output1[0]=0. + t1075 + t1030*t890;
  p_output1[1]=0.;
  p_output1[2]=0. + t1040*t1095 + t1069*t890;
  p_output1[3]=0.;
  p_output1[4]=0.;
  p_output1[5]=0.;
  p_output1[6]=0. + t1030*t1040 - 1.*t1069*t890;
  p_output1[7]=0.;
  p_output1[8]=0. + t1075 - 1.*t1095*t890;
  p_output1[9]=0.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=0. + t1095*t1234 + t1069*t1262;
  p_output1[13]=0.;
  p_output1[14]=0. - 1.*t1069*t1234 - 1.*t1030*t1262;
  p_output1[15]=0.;
  p_output1[16]=1.;
  p_output1[17]=0.;
  p_output1[18]=0. + t1006*t1208 + t1183*t891;
  p_output1[19]=0.;
  p_output1[20]=0. + t1006*t1183 - 1.*t1208*t891;
  p_output1[21]=0.;
  p_output1[22]=1.;
  p_output1[23]=0.;
  p_output1[24]=-0.4;
  p_output1[25]=0.;
  p_output1[26]=0.;
  p_output1[27]=0.;
  p_output1[28]=1.;
  p_output1[29]=0.;
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

#include "Jb_LeftToe_mex.hh"

namespace SymExpression
{

void Jb_LeftToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
