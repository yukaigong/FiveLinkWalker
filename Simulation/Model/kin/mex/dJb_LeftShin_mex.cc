/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:43 GMT-05:00
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
  double t4182;
  double t4174;
  double t4176;
  double t4185;
  double t4171;
  double t4181;
  double t4186;
  double t4191;
  double t4203;
  double t4204;
  double t4205;
  double t4206;
  double t4208;
  double t4210;
  double t4211;
  double t4193;
  double t4194;
  double t4217;
  double t4218;
  double t4219;
  double t4220;
  double t4197;
  double t4188;
  double t4235;
  double t4236;
  double t4237;
  double t4241;
  double t4242;
  double t4223;
  double t4224;
  double t4225;
  double t4198;
  double t4249;
  double t4250;
  double t4251;
  double t4252;
  double t4253;
  double t4254;
  double t4255;
  double t4256;
  double t4257;
  double t4258;
  double t4259;
  double t4262;
  double t4263;
  double t4264;
  double t4265;
  double t4266;
  double t4267;
  double t4268;
  double t4260;
  double t4283;
  double t4272;
  double t4273;
  double t4274;
  double t4276;
  double t4277;
  double t4278;
  double t4286;
  t4182 = Cos(var1[3]);
  t4174 = Cos(var1[4]);
  t4176 = Sin(var1[3]);
  t4185 = Sin(var1[4]);
  t4171 = Cos(var1[2]);
  t4181 = -1.*t4174*t4176;
  t4186 = -1.*t4182*t4185;
  t4191 = Sin(var1[2]);
  t4203 = t4181 + t4186;
  t4204 = t4171*t4203;
  t4205 = -1.*t4182*t4174;
  t4206 = t4176*t4185;
  t4208 = t4205 + t4206;
  t4210 = t4191*t4208;
  t4211 = t4204 + t4210;
  t4193 = t4182*t4174;
  t4194 = -1.*t4176*t4185;
  t4217 = t4191*t4203;
  t4218 = t4193 + t4194;
  t4219 = t4171*t4218;
  t4220 = t4217 + t4219;
  t4197 = 0. + t4193 + t4194;
  t4188 = 0. + t4181 + t4186;
  t4235 = -1.*t4191*t4203;
  t4236 = t4171*t4208;
  t4237 = t4235 + t4236;
  t4241 = -1.*t4191*t4218;
  t4242 = t4204 + t4241;
  t4223 = t4174*t4176;
  t4224 = t4182*t4185;
  t4225 = 0. + t4223 + t4224;
  t4198 = -1.*t4191*t4197;
  t4249 = -1.*t4174;
  t4250 = 1. + t4249;
  t4251 = -0.4*t4250;
  t4252 = -0.64*t4174;
  t4253 = 0. + t4251 + t4252;
  t4254 = t4182*t4253;
  t4255 = -0.24*t4185;
  t4256 = 0. + t4255;
  t4257 = -1.*t4176*t4256;
  t4258 = 0. + t4254 + t4257;
  t4259 = t4258*t4203;
  t4262 = t4253*t4176;
  t4263 = t4182*t4256;
  t4264 = 0. + t4262 + t4263;
  t4265 = t4264*t4218;
  t4266 = -1.*t4253*t4176;
  t4267 = -1.*t4182*t4256;
  t4268 = t4266 + t4267;
  t4260 = t4254 + t4257;
  t4283 = -1.*t4264*t4203;
  t4272 = 0.24*t4174*t4176;
  t4273 = 0.24*t4182*t4185;
  t4274 = t4272 + t4273;
  t4276 = -0.24*t4182*t4174;
  t4277 = 0.24*t4176*t4185;
  t4278 = t4276 + t4277;
  t4286 = -1.*t4258*t4208;
  p_output1[0]=(t4171*t4188 + t4198)*var2[2] + t4211*var2[3] + t4211*var2[4];
  p_output1[1]=0;
  p_output1[2]=(t4171*t4197 - 1.*t4191*t4225)*var2[2] + t4220*var2[3] + t4220*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t4188*t4191 - 1.*t4171*t4197)*var2[2] + t4237*var2[3] + t4237*var2[4];
  p_output1[7]=0;
  p_output1[8]=(t4198 - 1.*t4171*t4225)*var2[2] + t4242*var2[3] + t4242*var2[4];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(t4259 + t4225*t4260 + t4265 + t4197*t4268)*var2[3] + (t4259 + t4265 + t4197*t4274 + t4225*t4278)*var2[4];
  p_output1[13]=0;
  p_output1[14]=(-1.*t4197*t4260 - 1.*t4188*t4268 + t4283 + t4286)*var2[3] + (-1.*t4188*t4274 - 1.*t4197*t4278 + t4283 + t4286)*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(0. - 1.*t4185*t4253 + t4174*t4256)*var2[4];
  p_output1[19]=0;
  p_output1[20]=(0.24*Power(t4174,2) + 0.24*Power(t4185,2) + t4174*t4253 + t4185*t4256)*var2[4];
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

#include "dJb_LeftShin_mex.hh"

namespace SymExpression
{

void dJb_LeftShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
