#ifndef DEFINE_H_
#define DEFINE_H_

/*---------------

   Copyright notices?
   Require gsl >= 2.0

   ------------------*/

#include <gsl/gsl_errno.h>      // gsl_success
#include <gsl/gsl_multiroots.h> // multidimensional root solver
#include <gsl/gsl_odeiv2.h>
#include <gsl/gsl_roots.h>    // root solver
#include <gsl/gsl_sf_debye.h> // Debye function
#include <sys/time.h>         // gettimeofday

#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits> // quiet_NaN
#include <numeric>
#include <sstream>
#include <stdexcept> // runtime_error
#include <vector>

using std::abs; // In C++, it's always sufficient to use std::abs; it's
                // overloaded for all the numerical types.
using std::accumulate;
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::max;
using std::min;
using std::numeric_limits;
using std::ofstream;
using std::runtime_error;
using std::streampos;
using std::string;
using std::stringstream;
using std::vector;

const double pi = 3.14159265359;
const double G = 6.67384E-8;
const double c = 2.997924589E10;
const double kb = 1.3806488E-16;
const double R = 8.31446E7;      // gas constant in erg K-1 mol-1
const double e = 4.80320451E-10; // electron charge in e.s.u unit
const double me = 9.10938291E-28;
const double mp = 1.672621777E-24;
const double ME = 5.9722E27; // Earth mass defined by IAU
const double RE = 6.3781E8;  // Earth equatorial radius
const double mFe = 55.845;   // iron molar mass in grams
const double mSi = 28.0855;
const double mMg = 24.305;
const double mO = 15.999;
const double mH = 1.00794;
const double NA = 6.02214E23;
const double AAtocm3
    = 0.3011; // 1 \AA^3 equivalents to NA / (2*10^24) = 0.3011 cm^3 / mol.
const double eV_erg = 1.60217710E-12; // 1 eV=1.6E-12 erg

template <class T>
inline double
sq (const T &a)
{
  return double (a * a);
}

struct double_params
{
  vector<double> x;
};

#endif // DEFINE_H_
