/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 02:12:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_COM_src.h"

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
  double t1770;
  double t1725;
  double t1726;
  double t1771;
  double t1724;
  double t1727;
  double t1772;
  double t1773;
  double t1775;
  double t1776;
  double t1777;
  double t1778;
  double t1780;
  double t1790;
  double t1791;
  double t1792;
  double t1802;
  double t1804;
  double t1801;
  double t1803;
  double t1805;
  double t1806;
  double t1808;
  double t1809;
  double t1810;
  double t1811;
  double t1813;
  double t1823;
  double t1824;
  double t1825;
  double t1786;
  double t1787;
  double t1788;
  double t1789;
  double t1793;
  double t1794;
  double t1795;
  double t1796;
  double t1797;
  double t1798;
  double t1819;
  double t1820;
  double t1821;
  double t1822;
  double t1826;
  double t1827;
  double t1828;
  double t1829;
  double t1830;
  double t1831;
  double t1840;
  double t1848;
  double t1849;
  double t1850;
  double t1861;
  double t1869;
  double t1870;
  double t1871;
  double t1846;
  double t1847;
  double t1851;
  double t1852;
  double t1853;
  double t1854;
  double t1855;
  double t1856;
  double t1867;
  double t1868;
  double t1872;
  double t1873;
  double t1874;
  double t1875;
  double t1876;
  double t1877;
  double t1774;
  double t1779;
  double t1781;
  double t1782;
  double t1783;
  double t1784;
  double t1785;
  double t1799;
  double t1800;
  double t1838;
  double t1839;
  double t1841;
  double t1842;
  double t1843;
  double t1844;
  double t1845;
  double t1857;
  double t1858;
  double t1807;
  double t1812;
  double t1814;
  double t1815;
  double t1816;
  double t1817;
  double t1818;
  double t1832;
  double t1833;
  double t1859;
  double t1860;
  double t1862;
  double t1863;
  double t1864;
  double t1865;
  double t1866;
  double t1878;
  double t1879;
  t1770 = Cos(var1[2]);
  t1725 = Cos(var1[3]);
  t1726 = Sin(var1[2]);
  t1771 = Sin(var1[3]);
  t1724 = Cos(var1[4]);
  t1727 = -1.*t1725*t1726;
  t1772 = -1.*t1770*t1771;
  t1773 = t1727 + t1772;
  t1775 = t1770*t1725;
  t1776 = -1.*t1726*t1771;
  t1777 = t1775 + t1776;
  t1778 = Sin(var1[4]);
  t1780 = t1724*t1773;
  t1790 = -1.*t1770*t1725;
  t1791 = t1726*t1771;
  t1792 = t1790 + t1791;
  t1802 = Cos(var1[5]);
  t1804 = Sin(var1[5]);
  t1801 = Cos(var1[6]);
  t1803 = -1.*t1802*t1726;
  t1805 = -1.*t1770*t1804;
  t1806 = t1803 + t1805;
  t1808 = t1770*t1802;
  t1809 = -1.*t1726*t1804;
  t1810 = t1808 + t1809;
  t1811 = Sin(var1[6]);
  t1813 = t1801*t1806;
  t1823 = -1.*t1770*t1802;
  t1824 = t1726*t1804;
  t1825 = t1823 + t1824;
  t1786 = -0.748*t1773;
  t1787 = -1.*t1724;
  t1788 = 1. + t1787;
  t1789 = -0.4*t1788*t1773;
  t1793 = 0.4*t1792*t1778;
  t1794 = t1792*t1778;
  t1795 = t1780 + t1794;
  t1796 = -0.64*t1795;
  t1797 = t1789 + t1793 + t1796;
  t1798 = 3.2*t1797;
  t1819 = -0.748*t1806;
  t1820 = -1.*t1801;
  t1821 = 1. + t1820;
  t1822 = -0.4*t1821*t1806;
  t1826 = 0.4*t1825*t1811;
  t1827 = t1825*t1811;
  t1828 = t1813 + t1827;
  t1829 = -0.64*t1828;
  t1830 = t1822 + t1826 + t1829;
  t1831 = 3.2*t1830;
  t1840 = t1724*t1792;
  t1848 = t1725*t1726;
  t1849 = t1770*t1771;
  t1850 = t1848 + t1849;
  t1861 = t1801*t1825;
  t1869 = t1802*t1726;
  t1870 = t1770*t1804;
  t1871 = t1869 + t1870;
  t1846 = -0.748*t1792;
  t1847 = -0.4*t1788*t1792;
  t1851 = 0.4*t1850*t1778;
  t1852 = t1850*t1778;
  t1853 = t1840 + t1852;
  t1854 = -0.64*t1853;
  t1855 = t1847 + t1851 + t1854;
  t1856 = 3.2*t1855;
  t1867 = -0.748*t1825;
  t1868 = -0.4*t1821*t1825;
  t1872 = 0.4*t1871*t1811;
  t1873 = t1871*t1811;
  t1874 = t1861 + t1873;
  t1875 = -0.64*t1874;
  t1876 = t1868 + t1872 + t1875;
  t1877 = 3.2*t1876;
  t1774 = 0.4*t1724*t1773;
  t1779 = -0.4*t1777*t1778;
  t1781 = -1.*t1777*t1778;
  t1782 = t1780 + t1781;
  t1783 = -0.64*t1782;
  t1784 = t1774 + t1779 + t1783;
  t1785 = 0.1*var2[4]*t1784;
  t1799 = t1786 + t1798;
  t1800 = 0.03125*var2[3]*t1799;
  t1838 = 0.4*t1724*t1792;
  t1839 = -0.4*t1773*t1778;
  t1841 = -1.*t1773*t1778;
  t1842 = t1840 + t1841;
  t1843 = -0.64*t1842;
  t1844 = t1838 + t1839 + t1843;
  t1845 = 0.1*var2[4]*t1844;
  t1857 = t1846 + t1856;
  t1858 = 0.03125*var2[3]*t1857;
  t1807 = 0.4*t1801*t1806;
  t1812 = -0.4*t1810*t1811;
  t1814 = -1.*t1810*t1811;
  t1815 = t1813 + t1814;
  t1816 = -0.64*t1815;
  t1817 = t1807 + t1812 + t1816;
  t1818 = 0.1*var2[6]*t1817;
  t1832 = t1819 + t1831;
  t1833 = 0.03125*var2[5]*t1832;
  t1859 = 0.4*t1801*t1825;
  t1860 = -0.4*t1806*t1811;
  t1862 = -1.*t1806*t1811;
  t1863 = t1861 + t1862;
  t1864 = -0.64*t1863;
  t1865 = t1859 + t1860 + t1864;
  t1866 = 0.1*var2[6]*t1865;
  t1878 = t1867 + t1877;
  t1879 = 0.03125*var2[5]*t1878;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t1785 + t1800 + t1818 + t1833 + 0.03125*(-2.88*t1726 + t1786 + t1798 + t1819 + t1831)*var2[2];
  p_output1[7]=0;
  p_output1[8]=t1845 + t1858 + t1866 + t1879 + 0.03125*(-2.88*t1770 + t1846 + t1856 + t1867 + t1877)*var2[2];
  p_output1[9]=t1785 + t1800 + 0.03125*t1799*var2[2];
  p_output1[10]=0;
  p_output1[11]=t1845 + t1858 + 0.03125*t1857*var2[2];
  p_output1[12]=0.1*t1784*var2[2] + 0.1*t1784*var2[3] + 0.1*(t1779 - 0.4*t1724*t1850 - 0.64*(t1781 - 1.*t1724*t1850))*var2[4];
  p_output1[13]=0;
  p_output1[14]=0.1*t1844*var2[2] + 0.1*t1844*var2[3] + 0.1*(-0.4*t1724*t1777 + t1839 - 0.64*(-1.*t1724*t1777 + t1841))*var2[4];
  p_output1[15]=t1818 + t1833 + 0.03125*t1832*var2[2];
  p_output1[16]=0;
  p_output1[17]=t1866 + t1879 + 0.03125*t1878*var2[2];
  p_output1[18]=0.1*t1817*var2[2] + 0.1*t1817*var2[5] + 0.1*(t1812 - 0.4*t1801*t1871 - 0.64*(t1814 - 1.*t1801*t1871))*var2[6];
  p_output1[19]=0;
  p_output1[20]=0.1*t1865*var2[2] + 0.1*t1865*var2[5] + 0.1*(-0.4*t1801*t1810 + t1860 - 0.64*(-1.*t1801*t1810 + t1862))*var2[6];
}



void dJp_COM_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
