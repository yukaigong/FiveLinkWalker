/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 02:11:59 GMT-05:00
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
  double t1654;
  double t1627;
  double t1628;
  double t1655;
  double t1553;
  double t1629;
  double t1656;
  double t1657;
  double t1659;
  double t1660;
  double t1664;
  double t1665;
  double t1667;
  double t1677;
  double t1678;
  double t1679;
  double t1692;
  double t1694;
  double t1691;
  double t1693;
  double t1695;
  double t1696;
  double t1698;
  double t1699;
  double t1700;
  double t1701;
  double t1703;
  double t1713;
  double t1714;
  double t1715;
  double t1673;
  double t1674;
  double t1675;
  double t1676;
  double t1680;
  double t1681;
  double t1685;
  double t1686;
  double t1687;
  double t1688;
  double t1709;
  double t1710;
  double t1711;
  double t1712;
  double t1716;
  double t1717;
  double t1718;
  double t1719;
  double t1720;
  double t1721;
  double t1730;
  double t1738;
  double t1739;
  double t1740;
  double t1751;
  double t1759;
  double t1760;
  double t1761;
  double t1736;
  double t1737;
  double t1741;
  double t1742;
  double t1743;
  double t1744;
  double t1745;
  double t1746;
  double t1757;
  double t1758;
  double t1762;
  double t1763;
  double t1764;
  double t1765;
  double t1766;
  double t1767;
  double t1658;
  double t1666;
  double t1668;
  double t1669;
  double t1670;
  double t1671;
  double t1672;
  double t1689;
  double t1690;
  double t1728;
  double t1729;
  double t1731;
  double t1732;
  double t1733;
  double t1734;
  double t1735;
  double t1747;
  double t1748;
  double t1697;
  double t1702;
  double t1704;
  double t1705;
  double t1706;
  double t1707;
  double t1708;
  double t1722;
  double t1723;
  double t1749;
  double t1750;
  double t1752;
  double t1753;
  double t1754;
  double t1755;
  double t1756;
  double t1768;
  double t1769;
  t1654 = Cos(var1[2]);
  t1627 = Cos(var1[3]);
  t1628 = Sin(var1[2]);
  t1655 = Sin(var1[3]);
  t1553 = Cos(var1[4]);
  t1629 = -1.*t1627*t1628;
  t1656 = -1.*t1654*t1655;
  t1657 = t1629 + t1656;
  t1659 = t1654*t1627;
  t1660 = -1.*t1628*t1655;
  t1664 = t1659 + t1660;
  t1665 = Sin(var1[4]);
  t1667 = t1553*t1657;
  t1677 = -1.*t1654*t1627;
  t1678 = t1628*t1655;
  t1679 = t1677 + t1678;
  t1692 = Cos(var1[5]);
  t1694 = Sin(var1[5]);
  t1691 = Cos(var1[6]);
  t1693 = -1.*t1692*t1628;
  t1695 = -1.*t1654*t1694;
  t1696 = t1693 + t1695;
  t1698 = t1654*t1692;
  t1699 = -1.*t1628*t1694;
  t1700 = t1698 + t1699;
  t1701 = Sin(var1[6]);
  t1703 = t1691*t1696;
  t1713 = -1.*t1654*t1692;
  t1714 = t1628*t1694;
  t1715 = t1713 + t1714;
  t1673 = -0.748*t1657;
  t1674 = -1.*t1553;
  t1675 = 1. + t1674;
  t1676 = -0.4*t1675*t1657;
  t1680 = 0.4*t1679*t1665;
  t1681 = t1679*t1665;
  t1685 = t1667 + t1681;
  t1686 = -0.64*t1685;
  t1687 = t1676 + t1680 + t1686;
  t1688 = 3.2*t1687;
  t1709 = -0.748*t1696;
  t1710 = -1.*t1691;
  t1711 = 1. + t1710;
  t1712 = -0.4*t1711*t1696;
  t1716 = 0.4*t1715*t1701;
  t1717 = t1715*t1701;
  t1718 = t1703 + t1717;
  t1719 = -0.64*t1718;
  t1720 = t1712 + t1716 + t1719;
  t1721 = 3.2*t1720;
  t1730 = t1553*t1679;
  t1738 = t1627*t1628;
  t1739 = t1654*t1655;
  t1740 = t1738 + t1739;
  t1751 = t1691*t1715;
  t1759 = t1692*t1628;
  t1760 = t1654*t1694;
  t1761 = t1759 + t1760;
  t1736 = -0.748*t1679;
  t1737 = -0.4*t1675*t1679;
  t1741 = 0.4*t1740*t1665;
  t1742 = t1740*t1665;
  t1743 = t1730 + t1742;
  t1744 = -0.64*t1743;
  t1745 = t1737 + t1741 + t1744;
  t1746 = 3.2*t1745;
  t1757 = -0.748*t1715;
  t1758 = -0.4*t1711*t1715;
  t1762 = 0.4*t1761*t1701;
  t1763 = t1761*t1701;
  t1764 = t1751 + t1763;
  t1765 = -0.64*t1764;
  t1766 = t1758 + t1762 + t1765;
  t1767 = 3.2*t1766;
  t1658 = 0.4*t1553*t1657;
  t1666 = -0.4*t1664*t1665;
  t1668 = -1.*t1664*t1665;
  t1669 = t1667 + t1668;
  t1670 = -0.64*t1669;
  t1671 = t1658 + t1666 + t1670;
  t1672 = 0.1*var2[4]*t1671;
  t1689 = t1673 + t1688;
  t1690 = 0.03125*var2[3]*t1689;
  t1728 = 0.4*t1553*t1679;
  t1729 = -0.4*t1657*t1665;
  t1731 = -1.*t1657*t1665;
  t1732 = t1730 + t1731;
  t1733 = -0.64*t1732;
  t1734 = t1728 + t1729 + t1733;
  t1735 = 0.1*var2[4]*t1734;
  t1747 = t1736 + t1746;
  t1748 = 0.03125*var2[3]*t1747;
  t1697 = 0.4*t1691*t1696;
  t1702 = -0.4*t1700*t1701;
  t1704 = -1.*t1700*t1701;
  t1705 = t1703 + t1704;
  t1706 = -0.64*t1705;
  t1707 = t1697 + t1702 + t1706;
  t1708 = 0.1*var2[6]*t1707;
  t1722 = t1709 + t1721;
  t1723 = 0.03125*var2[5]*t1722;
  t1749 = 0.4*t1691*t1715;
  t1750 = -0.4*t1696*t1701;
  t1752 = -1.*t1696*t1701;
  t1753 = t1751 + t1752;
  t1754 = -0.64*t1753;
  t1755 = t1749 + t1750 + t1754;
  t1756 = 0.1*var2[6]*t1755;
  t1768 = t1757 + t1767;
  t1769 = 0.03125*var2[5]*t1768;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t1672 + t1690 + t1708 + t1723 + 0.03125*(-2.88*t1628 + t1673 + t1688 + t1709 + t1721)*var2[2];
  p_output1[7]=0;
  p_output1[8]=t1735 + t1748 + t1756 + t1769 + 0.03125*(-2.88*t1654 + t1736 + t1746 + t1757 + t1767)*var2[2];
  p_output1[9]=t1672 + t1690 + 0.03125*t1689*var2[2];
  p_output1[10]=0;
  p_output1[11]=t1735 + t1748 + 0.03125*t1747*var2[2];
  p_output1[12]=0.1*t1671*var2[2] + 0.1*t1671*var2[3] + 0.1*(t1666 - 0.4*t1553*t1740 - 0.64*(t1668 - 1.*t1553*t1740))*var2[4];
  p_output1[13]=0;
  p_output1[14]=0.1*t1734*var2[2] + 0.1*t1734*var2[3] + 0.1*(-0.4*t1553*t1664 + t1729 - 0.64*(-1.*t1553*t1664 + t1731))*var2[4];
  p_output1[15]=t1708 + t1723 + 0.03125*t1722*var2[2];
  p_output1[16]=0;
  p_output1[17]=t1756 + t1769 + 0.03125*t1768*var2[2];
  p_output1[18]=0.1*t1707*var2[2] + 0.1*t1707*var2[5] + 0.1*(t1702 - 0.4*t1691*t1761 - 0.64*(t1704 - 1.*t1691*t1761))*var2[6];
  p_output1[19]=0;
  p_output1[20]=0.1*t1755*var2[2] + 0.1*t1755*var2[5] + 0.1*(-0.4*t1691*t1700 + t1750 - 0.64*(-1.*t1691*t1700 + t1752))*var2[6];
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

#include "dJp_COM_mex.hh"

namespace SymExpression
{

void dJp_COM_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
