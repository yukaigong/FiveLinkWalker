/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:26:24 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_RightShin_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t4974;
  double t4963;
  double t4969;
  double t4976;
  double t4959;
  double t4972;
  double t4980;
  double t4985;
  double t4994;
  double t4996;
  double t4997;
  double t4998;
  double t4999;
  double t5000;
  double t5001;
  double t4986;
  double t4987;
  double t5006;
  double t5008;
  double t5009;
  double t5010;
  double t4989;
  double t4981;
  double t5035;
  double t5039;
  double t5040;
  double t5045;
  double t5046;
  double t5015;
  double t5016;
  double t5017;
  double t4991;
  double t5055;
  double t5057;
  double t5058;
  double t5059;
  double t5060;
  double t5061;
  double t5062;
  double t5063;
  double t5064;
  double t5065;
  double t5066;
  double t5069;
  double t5070;
  double t5071;
  double t5072;
  double t5073;
  double t5074;
  double t5075;
  double t5067;
  double t5090;
  double t5079;
  double t5080;
  double t5081;
  double t5083;
  double t5084;
  double t5085;
  double t5093;
  t4974 = Cos(var1[5]);
  t4963 = Cos(var1[6]);
  t4969 = Sin(var1[5]);
  t4976 = Sin(var1[6]);
  t4959 = Cos(var1[2]);
  t4972 = -1.*t4963*t4969;
  t4980 = -1.*t4974*t4976;
  t4985 = Sin(var1[2]);
  t4994 = t4972 + t4980;
  t4996 = t4959*t4994;
  t4997 = -1.*t4974*t4963;
  t4998 = t4969*t4976;
  t4999 = t4997 + t4998;
  t5000 = t4985*t4999;
  t5001 = t4996 + t5000;
  t4986 = t4974*t4963;
  t4987 = -1.*t4969*t4976;
  t5006 = t4985*t4994;
  t5008 = t4986 + t4987;
  t5009 = t4959*t5008;
  t5010 = t5006 + t5009;
  t4989 = 0. + t4986 + t4987;
  t4981 = 0. + t4972 + t4980;
  t5035 = -1.*t4985*t4994;
  t5039 = t4959*t4999;
  t5040 = t5035 + t5039;
  t5045 = -1.*t4985*t5008;
  t5046 = t4996 + t5045;
  t5015 = t4963*t4969;
  t5016 = t4974*t4976;
  t5017 = 0. + t5015 + t5016;
  t4991 = -1.*t4985*t4989;
  t5055 = -1.*t4963;
  t5057 = 1. + t5055;
  t5058 = -0.4*t5057;
  t5059 = -0.64*t4963;
  t5060 = 0. + t5058 + t5059;
  t5061 = t4974*t5060;
  t5062 = -0.24*t4976;
  t5063 = 0. + t5062;
  t5064 = -1.*t4969*t5063;
  t5065 = 0. + t5061 + t5064;
  t5066 = t5065*t4994;
  t5069 = t5060*t4969;
  t5070 = t4974*t5063;
  t5071 = 0. + t5069 + t5070;
  t5072 = t5071*t5008;
  t5073 = -1.*t5060*t4969;
  t5074 = -1.*t4974*t5063;
  t5075 = t5073 + t5074;
  t5067 = t5061 + t5064;
  t5090 = -1.*t5071*t4994;
  t5079 = 0.24*t4963*t4969;
  t5080 = 0.24*t4974*t4976;
  t5081 = t5079 + t5080;
  t5083 = -0.24*t4974*t4963;
  t5084 = 0.24*t4969*t4976;
  t5085 = t5083 + t5084;
  t5093 = -1.*t5065*t4999;
  p_output1[0]=(t4959*t4981 + t4991)*var2[2] + t5001*var2[5] + t5001*var2[6];
  p_output1[1]=0;
  p_output1[2]=(t4959*t4989 - 1.*t4985*t5017)*var2[2] + t5010*var2[5] + t5010*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t4981*t4985 - 1.*t4959*t4989)*var2[2] + t5040*var2[5] + t5040*var2[6];
  p_output1[7]=0;
  p_output1[8]=(t4991 - 1.*t4959*t5017)*var2[2] + t5046*var2[5] + t5046*var2[6];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(t5066 + t5017*t5067 + t5072 + t4989*t5075)*var2[5] + (t5066 + t5072 + t4989*t5081 + t5017*t5085)*var2[6];
  p_output1[13]=0;
  p_output1[14]=(-1.*t4989*t5067 - 1.*t4981*t5075 + t5090 + t5093)*var2[5] + (-1.*t4981*t5081 - 1.*t4989*t5085 + t5090 + t5093)*var2[6];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=(0. - 1.*t4976*t5060 + t4963*t5063)*var2[6];
  p_output1[31]=0;
  p_output1[32]=(0.24*Power(t4963,2) + 0.24*Power(t4976,2) + t4963*t5060 + t4976*t5063)*var2[6];
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



void dJb_RightShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
