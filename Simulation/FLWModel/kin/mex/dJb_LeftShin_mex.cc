/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:31 GMT-05:00
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
  double t1596;
  double t1588;
  double t1590;
  double t1599;
  double t1585;
  double t1595;
  double t1600;
  double t1605;
  double t1617;
  double t1618;
  double t1619;
  double t1620;
  double t1622;
  double t1624;
  double t1625;
  double t1607;
  double t1608;
  double t1631;
  double t1632;
  double t1633;
  double t1634;
  double t1611;
  double t1602;
  double t1649;
  double t1650;
  double t1651;
  double t1655;
  double t1656;
  double t1637;
  double t1638;
  double t1639;
  double t1612;
  double t1663;
  double t1664;
  double t1665;
  double t1666;
  double t1667;
  double t1668;
  double t1669;
  double t1670;
  double t1671;
  double t1672;
  double t1673;
  double t1676;
  double t1677;
  double t1678;
  double t1679;
  double t1680;
  double t1681;
  double t1682;
  double t1674;
  double t1697;
  double t1686;
  double t1687;
  double t1688;
  double t1690;
  double t1691;
  double t1692;
  double t1700;
  t1596 = Cos(var1[3]);
  t1588 = Cos(var1[4]);
  t1590 = Sin(var1[3]);
  t1599 = Sin(var1[4]);
  t1585 = Cos(var1[2]);
  t1595 = -1.*t1588*t1590;
  t1600 = -1.*t1596*t1599;
  t1605 = Sin(var1[2]);
  t1617 = t1595 + t1600;
  t1618 = t1585*t1617;
  t1619 = -1.*t1596*t1588;
  t1620 = t1590*t1599;
  t1622 = t1619 + t1620;
  t1624 = t1605*t1622;
  t1625 = t1618 + t1624;
  t1607 = t1596*t1588;
  t1608 = -1.*t1590*t1599;
  t1631 = t1605*t1617;
  t1632 = t1607 + t1608;
  t1633 = t1585*t1632;
  t1634 = t1631 + t1633;
  t1611 = 0. + t1607 + t1608;
  t1602 = 0. + t1595 + t1600;
  t1649 = -1.*t1605*t1617;
  t1650 = t1585*t1622;
  t1651 = t1649 + t1650;
  t1655 = -1.*t1605*t1632;
  t1656 = t1618 + t1655;
  t1637 = t1588*t1590;
  t1638 = t1596*t1599;
  t1639 = 0. + t1637 + t1638;
  t1612 = -1.*t1605*t1611;
  t1663 = -1.*t1588;
  t1664 = 1. + t1663;
  t1665 = -0.4*t1664;
  t1666 = -0.64*t1588;
  t1667 = 0. + t1665 + t1666;
  t1668 = t1596*t1667;
  t1669 = -0.24*t1599;
  t1670 = 0. + t1669;
  t1671 = -1.*t1590*t1670;
  t1672 = 0. + t1668 + t1671;
  t1673 = t1672*t1617;
  t1676 = t1667*t1590;
  t1677 = t1596*t1670;
  t1678 = 0. + t1676 + t1677;
  t1679 = t1678*t1632;
  t1680 = -1.*t1667*t1590;
  t1681 = -1.*t1596*t1670;
  t1682 = t1680 + t1681;
  t1674 = t1668 + t1671;
  t1697 = -1.*t1678*t1617;
  t1686 = 0.24*t1588*t1590;
  t1687 = 0.24*t1596*t1599;
  t1688 = t1686 + t1687;
  t1690 = -0.24*t1596*t1588;
  t1691 = 0.24*t1590*t1599;
  t1692 = t1690 + t1691;
  t1700 = -1.*t1672*t1622;
  p_output1[0]=(t1585*t1602 + t1612)*var2[2] + t1625*var2[3] + t1625*var2[4];
  p_output1[1]=0;
  p_output1[2]=(t1585*t1611 - 1.*t1605*t1639)*var2[2] + t1634*var2[3] + t1634*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t1602*t1605 - 1.*t1585*t1611)*var2[2] + t1651*var2[3] + t1651*var2[4];
  p_output1[7]=0;
  p_output1[8]=(t1612 - 1.*t1585*t1639)*var2[2] + t1656*var2[3] + t1656*var2[4];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(t1673 + t1639*t1674 + t1679 + t1611*t1682)*var2[3] + (t1673 + t1679 + t1611*t1688 + t1639*t1692)*var2[4];
  p_output1[13]=0;
  p_output1[14]=(-1.*t1611*t1674 - 1.*t1602*t1682 + t1697 + t1700)*var2[3] + (-1.*t1602*t1688 - 1.*t1611*t1692 + t1697 + t1700)*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(0. - 1.*t1599*t1667 + t1588*t1670)*var2[4];
  p_output1[19]=0;
  p_output1[20]=(0.24*Power(t1588,2) + 0.24*Power(t1599,2) + t1588*t1667 + t1599*t1670)*var2[4];
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
