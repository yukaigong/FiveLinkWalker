/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:44 GMT-05:00
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
  double t2960;
  double t1301;
  double t2682;
  double t2967;
  double t1295;
  double t2942;
  double t2969;
  double t2976;
  double t2983;
  double t2987;
  double t2988;
  double t2989;
  double t2998;
  double t3083;
  double t3084;
  double t3085;
  double t3015;
  double t3019;
  double t3020;
  double t3060;
  double t3079;
  double t3086;
  double t3087;
  double t3088;
  double t3089;
  double t3090;
  double t3165;
  double t3175;
  double t3189;
  double t3209;
  double t3210;
  double t3211;
  double t3205;
  double t3212;
  double t3213;
  double t3214;
  double t3215;
  double t3216;
  double t2980;
  double t2994;
  double t3002;
  double t3003;
  double t3007;
  double t3013;
  double t3014;
  double t3178;
  double t3181;
  double t3185;
  double t3187;
  double t3188;
  double t3190;
  double t3193;
  double t3197;
  double t3203;
  double t3204;
  double t3217;
  double t3218;
  double t3222;
  t2960 = Cos(var1[2]);
  t1301 = Cos(var1[5]);
  t2682 = Sin(var1[2]);
  t2967 = Sin(var1[5]);
  t1295 = Cos(var1[6]);
  t2942 = -1.*t1301*t2682;
  t2969 = -1.*t2960*t2967;
  t2976 = t2942 + t2969;
  t2983 = t2960*t1301;
  t2987 = -1.*t2682*t2967;
  t2988 = t2983 + t2987;
  t2989 = Sin(var1[6]);
  t2998 = t1295*t2976;
  t3083 = -1.*t2960*t1301;
  t3084 = t2682*t2967;
  t3085 = t3083 + t3084;
  t3015 = -1.*t1295;
  t3019 = 1. + t3015;
  t3020 = -0.4*t3019;
  t3060 = 0. + t3020;
  t3079 = t3060*t2976;
  t3086 = 0.4*t2989;
  t3087 = 0. + t3086;
  t3088 = t3085*t3087;
  t3089 = t3085*t2989;
  t3090 = t2998 + t3089;
  t3165 = -0.8*t3090;
  t3175 = t3079 + t3088 + t3165;
  t3189 = t1295*t3085;
  t3209 = t1301*t2682;
  t3210 = t2960*t2967;
  t3211 = t3209 + t3210;
  t3205 = t3060*t3085;
  t3212 = t3211*t3087;
  t3213 = t3211*t2989;
  t3214 = t3189 + t3213;
  t3215 = -0.8*t3214;
  t3216 = t3205 + t3212 + t3215;
  t2980 = 0.4*t1295*t2976;
  t2994 = -0.4*t2988*t2989;
  t3002 = -1.*t2988*t2989;
  t3003 = t2998 + t3002;
  t3007 = -0.8*t3003;
  t3013 = t2980 + t2994 + t3007;
  t3014 = var2[6]*t3013;
  t3178 = var2[2]*t3175;
  t3181 = var2[5]*t3175;
  t3185 = t3014 + t3178 + t3181;
  t3187 = 0.4*t1295*t3085;
  t3188 = -0.4*t2976*t2989;
  t3190 = -1.*t2976*t2989;
  t3193 = t3189 + t3190;
  t3197 = -0.8*t3193;
  t3203 = t3187 + t3188 + t3197;
  t3204 = var2[6]*t3203;
  t3217 = var2[2]*t3216;
  t3218 = var2[5]*t3216;
  t3222 = t3204 + t3217 + t3218;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t3185;
  p_output1[7]=0;
  p_output1[8]=t3222;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t3185;
  p_output1[16]=0;
  p_output1[17]=t3222;
  p_output1[18]=t3013*var2[2] + t3013*var2[5] + (t2994 - 0.4*t1295*t3211 - 0.8*(t3002 - 1.*t1295*t3211))*var2[6];
  p_output1[19]=0;
  p_output1[20]=t3203*var2[2] + t3203*var2[5] + (-0.4*t1295*t2988 + t3188 - 0.8*(-1.*t1295*t2988 + t3190))*var2[6];
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

#include "dJp_RightToe_mex.hh"

namespace SymExpression
{

void dJp_RightToe_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
