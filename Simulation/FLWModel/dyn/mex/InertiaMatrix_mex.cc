/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:27:15 GMT-05:00
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
  double t31;
  double t26;
  double t34;
  double t41;
  double t502;
  double t548;
  double t641;
  double t642;
  double t643;
  double t757;
  double t759;
  double t783;
  double t785;
  double t792;
  double t821;
  double t826;
  double t330;
  double t347;
  double t416;
  double t36;
  double t42;
  double t75;
  double t503;
  double t625;
  double t627;
  double t635;
  double t654;
  double t659;
  double t687;
  double t688;
  double t689;
  double t700;
  double t711;
  double t723;
  double t778;
  double t779;
  double t780;
  double t758;
  double t763;
  double t764;
  double t784;
  double t786;
  double t790;
  double t791;
  double t851;
  double t854;
  double t857;
  double t858;
  double t859;
  double t860;
  double t861;
  double t865;
  double t1501;
  double t1502;
  double t1503;
  double t1504;
  double t1505;
  double t1506;
  double t1511;
  double t1520;
  double t1524;
  double t1533;
  double t1534;
  double t1922;
  double t1999;
  double t2007;
  double t2008;
  double t2018;
  double t2092;
  double t2110;
  double t2152;
  double t2419;
  double t2423;
  double t2454;
  double t908;
  double t910;
  double t976;
  double t988;
  double t1001;
  double t1004;
  double t1012;
  double t1023;
  double t1068;
  double t1157;
  double t1176;
  double t1277;
  double t1289;
  double t1329;
  double t1365;
  double t1366;
  double t1386;
  double t1389;
  double t1393;
  double t1467;
  double t1468;
  double t1469;
  double t1472;
  double t1478;
  double t1479;
  double t29;
  double t30;
  double t32;
  double t33;
  double t434;
  double t468;
  double t781;
  double t782;
  double t1486;
  double t1489;
  double t1490;
  double t1495;
  double t1498;
  double t1521;
  double t1540;
  double t1541;
  double t1636;
  double t1640;
  double t1642;
  double t1762;
  double t1767;
  double t1791;
  double t1835;
  double t1850;
  double t2417;
  double t2459;
  double t2460;
  double t2499;
  double t2521;
  double t2543;
  double t2896;
  double t2899;
  double t2911;
  double t2752;
  double t2779;
  double t2876;
  double t2881;
  double t3067;
  double t3068;
  double t3069;
  double t3000;
  double t3004;
  double t3059;
  double t3061;
  double t1485;
  double t1500;
  double t1629;
  double t1695;
  double t1874;
  double t2473;
  double t2568;
  double t2665;
  double t3202;
  double t3206;
  double t3207;
  double t3208;
  double t3229;
  double t3230;
  double t3232;
  double t3242;
  double t2710;
  double t2893;
  double t2916;
  double t2917;
  double t3249;
  double t3263;
  double t3268;
  double t3275;
  double t3744;
  double t3773;
  double t3811;
  double t3817;
  double t2921;
  double t3340;
  double t3821;
  double t3864;
  double t4194;
  double t4213;
  double t2993;
  double t3065;
  double t3070;
  double t3071;
  double t3345;
  double t3382;
  double t3401;
  double t3461;
  double t3878;
  double t3881;
  double t3936;
  double t4003;
  double t3072;
  double t3464;
  double t4007;
  double t4060;
  double t4426;
  double t4461;
  t31 = Sin(var1[2]);
  t26 = Cos(var1[2]);
  t34 = Cos(var1[3]);
  t41 = Sin(var1[3]);
  t502 = Cos(var1[4]);
  t548 = Sin(var1[4]);
  t641 = t34*t502;
  t642 = -1.*t41*t548;
  t643 = t641 + t642;
  t757 = Cos(var1[5]);
  t759 = Sin(var1[5]);
  t783 = Cos(var1[6]);
  t785 = Sin(var1[6]);
  t792 = t757*t783;
  t821 = -1.*t759*t785;
  t826 = t792 + t821;
  t330 = t26*t34;
  t347 = -1.*t31*t41;
  t416 = t330 + t347;
  t36 = t34*t31;
  t42 = t26*t41;
  t75 = t36 + t42;
  t503 = -1.*t502*t41;
  t625 = -1.*t34*t548;
  t627 = t503 + t625;
  t635 = t31*t627;
  t654 = t26*t643;
  t659 = t635 + t654;
  t687 = t502*t41;
  t688 = t34*t548;
  t689 = t687 + t688;
  t700 = t26*t689;
  t711 = t31*t643;
  t723 = t700 + t711;
  t778 = t26*t757;
  t779 = -1.*t31*t759;
  t780 = t778 + t779;
  t758 = t757*t31;
  t763 = t26*t759;
  t764 = t758 + t763;
  t784 = -1.*t783*t759;
  t786 = -1.*t757*t785;
  t790 = t784 + t786;
  t791 = t31*t790;
  t851 = t26*t826;
  t854 = t791 + t851;
  t857 = t783*t759;
  t858 = t757*t785;
  t859 = t857 + t858;
  t860 = t26*t859;
  t861 = t31*t826;
  t865 = t860 + t861;
  t1501 = -1.*t502;
  t1502 = 1. + t1501;
  t1503 = -0.4*t1502;
  t1504 = -0.64*t502;
  t1505 = t1503 + t1504;
  t1506 = t1505*t41;
  t1511 = -0.24*t34*t548;
  t1520 = t1506 + t1511;
  t1524 = t34*t1505;
  t1533 = 0.24*t41*t548;
  t1534 = t1524 + t1533;
  t1922 = -1.*t783;
  t1999 = 1. + t1922;
  t2007 = -0.4*t1999;
  t2008 = -0.64*t783;
  t2018 = t2007 + t2008;
  t2092 = t2018*t759;
  t2110 = -0.24*t757*t785;
  t2152 = t2092 + t2110;
  t2419 = t757*t2018;
  t2423 = 0.24*t759*t785;
  t2454 = t2419 + t2423;
  t908 = -1.*t34*t31;
  t910 = -1.*t26*t41;
  t976 = t908 + t910;
  t988 = 6.8*t976*t416;
  t1001 = 6.8*t75*t416;
  t1004 = t26*t627;
  t1012 = -1.*t31*t643;
  t1023 = t1004 + t1012;
  t1068 = 3.2*t659*t1023;
  t1157 = -1.*t31*t689;
  t1176 = t1157 + t654;
  t1277 = 3.2*t1176*t723;
  t1289 = -1.*t757*t31;
  t1329 = -1.*t26*t759;
  t1365 = t1289 + t1329;
  t1366 = 6.8*t1365*t780;
  t1386 = 6.8*t764*t780;
  t1389 = t26*t790;
  t1393 = -1.*t31*t826;
  t1467 = t1389 + t1393;
  t1468 = 3.2*t854*t1467;
  t1469 = -1.*t31*t859;
  t1472 = t1469 + t851;
  t1478 = 3.2*t1472*t865;
  t1479 = t988 + t1001 + t1068 + t1277 + t1366 + t1386 + t1468 + t1478;
  t29 = Power(t26,2);
  t30 = 12.*t29;
  t32 = Power(t31,2);
  t33 = 12.*t32;
  t434 = Power(t416,2);
  t468 = 6.8*t434;
  t781 = Power(t780,2);
  t782 = 6.8*t781;
  t1486 = Power(t34,2);
  t1489 = -0.11*t1486;
  t1490 = Power(t41,2);
  t1495 = -0.11*t1490;
  t1498 = t1489 + t1495;
  t1521 = -1.*t1520*t643;
  t1540 = -1.*t627*t1534;
  t1541 = t1521 + t1540;
  t1636 = t1520*t689;
  t1640 = t643*t1534;
  t1642 = t1636 + t1640;
  t1762 = Power(t757,2);
  t1767 = -0.11*t1762;
  t1791 = Power(t759,2);
  t1835 = -0.11*t1791;
  t1850 = t1767 + t1835;
  t2417 = -1.*t2152*t826;
  t2459 = -1.*t790*t2454;
  t2460 = t2417 + t2459;
  t2499 = t2152*t859;
  t2521 = t826*t2454;
  t2543 = t2499 + t2521;
  t2896 = t1505*t548;
  t2899 = 0.24*t502*t548;
  t2911 = t2896 + t2899;
  t2752 = t1505*t502;
  t2779 = Power(t548,2);
  t2876 = -0.24*t2779;
  t2881 = t2752 + t2876;
  t3067 = t2018*t785;
  t3068 = 0.24*t783*t785;
  t3069 = t3067 + t3068;
  t3000 = t2018*t783;
  t3004 = Power(t785,2);
  t3059 = -0.24*t3004;
  t3061 = t3000 + t3059;
  t1485 = 2.88*t26;
  t1500 = 6.8*t416*t1498;
  t1629 = 3.2*t723*t1541;
  t1695 = 3.2*t659*t1642;
  t1874 = 6.8*t780*t1850;
  t2473 = 3.2*t865*t2460;
  t2568 = 3.2*t854*t2543;
  t2665 = t1485 + t1500 + t1629 + t1695 + t1874 + t2473 + t2568;
  t3202 = -2.88*t31;
  t3206 = 6.8*t976*t1498;
  t3207 = 3.2*t1176*t1541;
  t3208 = 3.2*t1023*t1642;
  t3229 = 6.8*t1365*t1850;
  t3230 = 3.2*t1472*t2460;
  t3232 = 3.2*t1467*t2543;
  t3242 = t3202 + t3206 + t3207 + t3208 + t3229 + t3230 + t3232;
  t2710 = -0.748*t416;
  t2893 = 3.2*t2881*t659;
  t2916 = 3.2*t2911*t723;
  t2917 = t2710 + t2893 + t2916;
  t3249 = -0.748*t976;
  t3263 = 3.2*t2911*t1176;
  t3268 = 3.2*t2881*t1023;
  t3275 = t3249 + t3263 + t3268;
  t3744 = -0.748*t1498;
  t3773 = 3.2*t2911*t1541;
  t3811 = 3.2*t2881*t1642;
  t3817 = 0.67 + t3744 + t3773 + t3811;
  t2921 = -0.768*t659;
  t3340 = -0.768*t1023;
  t3821 = -0.768*t1642;
  t3864 = 0.2 + t3821;
  t4194 = -0.768*t2881;
  t4213 = 0.2 + t4194;
  t2993 = -0.748*t780;
  t3065 = 3.2*t3061*t854;
  t3070 = 3.2*t3069*t865;
  t3071 = t2993 + t3065 + t3070;
  t3345 = -0.748*t1365;
  t3382 = 3.2*t3069*t1472;
  t3401 = 3.2*t3061*t1467;
  t3461 = t3345 + t3382 + t3401;
  t3878 = -0.748*t1850;
  t3881 = 3.2*t3069*t2460;
  t3936 = 3.2*t3061*t2543;
  t4003 = 0.67 + t3878 + t3881 + t3936;
  t3072 = -0.768*t854;
  t3464 = -0.768*t1467;
  t4007 = -0.768*t2543;
  t4060 = 0.2 + t4007;
  t4426 = -0.768*t3061;
  t4461 = 0.2 + t4426;
  p_output1[0]=t30 + t33 + t468 + 3.2*Power(t659,2) + 3.2*Power(t723,2) + 6.8*Power(t75,2) + 6.8*Power(t764,2) + t782 + 3.2*Power(t854,2) + 3.2*Power(t865,2);
  p_output1[1]=t1479;
  p_output1[2]=t2665;
  p_output1[3]=t2917;
  p_output1[4]=t2921;
  p_output1[5]=t3071;
  p_output1[6]=t3072;
  p_output1[7]=t1479;
  p_output1[8]=3.2*Power(t1023,2) + 3.2*Power(t1176,2) + 6.8*Power(t1365,2) + 3.2*Power(t1467,2) + 3.2*Power(t1472,2) + t30 + t33 + t468 + t782 + 6.8*Power(t976,2);
  p_output1[9]=t3242;
  p_output1[10]=t3275;
  p_output1[11]=t3340;
  p_output1[12]=t3461;
  p_output1[13]=t3464;
  p_output1[14]=t2665;
  p_output1[15]=t3242;
  p_output1[16]=3.3612 + 6.8*Power(t1498,2) + 3.2*Power(t1541,2) + 3.2*Power(t1642,2) + 6.8*Power(t1850,2) + 3.2*Power(t2460,2) + 3.2*Power(t2543,2);
  p_output1[17]=t3817;
  p_output1[18]=t3864;
  p_output1[19]=t4003;
  p_output1[20]=t4060;
  p_output1[21]=t2917;
  p_output1[22]=t3275;
  p_output1[23]=t3817;
  p_output1[24]=0.75228 + 3.2*Power(t2881,2) + 3.2*Power(t2911,2);
  p_output1[25]=t4213;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=t2921;
  p_output1[29]=t3340;
  p_output1[30]=t3864;
  p_output1[31]=t4213;
  p_output1[32]=0.38432;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t3071;
  p_output1[36]=t3461;
  p_output1[37]=t4003;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0.75228 + 3.2*Power(t3061,2) + 3.2*Power(t3069,2);
  p_output1[41]=t4461;
  p_output1[42]=t3072;
  p_output1[43]=t3464;
  p_output1[44]=t4060;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=t4461;
  p_output1[48]=0.38432;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "InertiaMatrix_mex.hh"

namespace SymExpression
{

void InertiaMatrix_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
