/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_LeftShin_src.h"

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
  double t1618;
  double t1607;
  double t1613;
  double t1620;
  double t1603;
  double t1616;
  double t1624;
  double t1629;
  double t1638;
  double t1640;
  double t1641;
  double t1642;
  double t1643;
  double t1644;
  double t1645;
  double t1630;
  double t1631;
  double t1650;
  double t1652;
  double t1653;
  double t1654;
  double t1633;
  double t1625;
  double t1679;
  double t1683;
  double t1684;
  double t1689;
  double t1690;
  double t1659;
  double t1660;
  double t1661;
  double t1635;
  double t1699;
  double t1701;
  double t1702;
  double t1703;
  double t1704;
  double t1705;
  double t1706;
  double t1707;
  double t1708;
  double t1709;
  double t1710;
  double t1713;
  double t1714;
  double t1715;
  double t1716;
  double t1717;
  double t1718;
  double t1719;
  double t1711;
  double t1734;
  double t1723;
  double t1724;
  double t1725;
  double t1727;
  double t1728;
  double t1729;
  double t1737;
  t1618 = Cos(var1[3]);
  t1607 = Cos(var1[4]);
  t1613 = Sin(var1[3]);
  t1620 = Sin(var1[4]);
  t1603 = Cos(var1[2]);
  t1616 = -1.*t1607*t1613;
  t1624 = -1.*t1618*t1620;
  t1629 = Sin(var1[2]);
  t1638 = t1616 + t1624;
  t1640 = t1603*t1638;
  t1641 = -1.*t1618*t1607;
  t1642 = t1613*t1620;
  t1643 = t1641 + t1642;
  t1644 = t1629*t1643;
  t1645 = t1640 + t1644;
  t1630 = t1618*t1607;
  t1631 = -1.*t1613*t1620;
  t1650 = t1629*t1638;
  t1652 = t1630 + t1631;
  t1653 = t1603*t1652;
  t1654 = t1650 + t1653;
  t1633 = 0. + t1630 + t1631;
  t1625 = 0. + t1616 + t1624;
  t1679 = -1.*t1629*t1638;
  t1683 = t1603*t1643;
  t1684 = t1679 + t1683;
  t1689 = -1.*t1629*t1652;
  t1690 = t1640 + t1689;
  t1659 = t1607*t1613;
  t1660 = t1618*t1620;
  t1661 = 0. + t1659 + t1660;
  t1635 = -1.*t1629*t1633;
  t1699 = -1.*t1607;
  t1701 = 1. + t1699;
  t1702 = -0.4*t1701;
  t1703 = -0.64*t1607;
  t1704 = 0. + t1702 + t1703;
  t1705 = t1618*t1704;
  t1706 = -0.24*t1620;
  t1707 = 0. + t1706;
  t1708 = -1.*t1613*t1707;
  t1709 = 0. + t1705 + t1708;
  t1710 = t1709*t1638;
  t1713 = t1704*t1613;
  t1714 = t1618*t1707;
  t1715 = 0. + t1713 + t1714;
  t1716 = t1715*t1652;
  t1717 = -1.*t1704*t1613;
  t1718 = -1.*t1618*t1707;
  t1719 = t1717 + t1718;
  t1711 = t1705 + t1708;
  t1734 = -1.*t1715*t1638;
  t1723 = 0.24*t1607*t1613;
  t1724 = 0.24*t1618*t1620;
  t1725 = t1723 + t1724;
  t1727 = -0.24*t1618*t1607;
  t1728 = 0.24*t1613*t1620;
  t1729 = t1727 + t1728;
  t1737 = -1.*t1709*t1643;
  p_output1[0]=(t1603*t1625 + t1635)*var2[2] + t1645*var2[3] + t1645*var2[4];
  p_output1[1]=0;
  p_output1[2]=(t1603*t1633 - 1.*t1629*t1661)*var2[2] + t1654*var2[3] + t1654*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t1625*t1629 - 1.*t1603*t1633)*var2[2] + t1684*var2[3] + t1684*var2[4];
  p_output1[7]=0;
  p_output1[8]=(t1635 - 1.*t1603*t1661)*var2[2] + t1690*var2[3] + t1690*var2[4];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(t1710 + t1661*t1711 + t1716 + t1633*t1719)*var2[3] + (t1710 + t1716 + t1633*t1725 + t1661*t1729)*var2[4];
  p_output1[13]=0;
  p_output1[14]=(-1.*t1633*t1711 - 1.*t1625*t1719 + t1734 + t1737)*var2[3] + (-1.*t1625*t1725 - 1.*t1633*t1729 + t1734 + t1737)*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(0. - 1.*t1620*t1704 + t1607*t1707)*var2[4];
  p_output1[19]=0;
  p_output1[20]=(0.24*Power(t1607,2) + 0.24*Power(t1620,2) + t1607*t1704 + t1620*t1707)*var2[4];
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



void dJb_LeftShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
