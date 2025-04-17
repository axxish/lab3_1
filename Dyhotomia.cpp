#include "Dyhotomia.hpp"

Dyhotomia::Dyhotomia()
  : a(0.0)
  , b(0.0)
  , eps(0.0)
{
}
Dyhotomia::~Dyhotomia() {}

void
Dyhotomia::setVolumes(double vol_a, double vol_b)
{
  a = vol_a;
  b = vol_b;
}

void
Dyhotomia::setTolerance(double vol_eps)
{
  eps = vol_eps;
}

bool
Dyhotomia::isSolutionOnSegment()
{

  if ((f(a) * f(b)) > 0) {
    return false;
  } else {
    return true;
  }
}

double
Dyhotomia::center()
{
  return (a + b) / 2;
}

double
Dyhotomia::f(double x)
{
  return 3 * x - 4 * std::log(x) - 5;
}

void
Dyhotomia::belong()
{
  double c = center();
  if ((f(a) * f(c)) < 0) {
    b = c;
  } else {
    a = c;
  }
}

bool
Dyhotomia::comparisonEps()
{
  if (fabs(b - a) <= eps) {
    return true;
  } else {
    return false;
  }
}

// -1 = no solution on segment
// 0 = solution on segment
int
Dyhotomia::count(double& x)
{

  do {
    if (!isSolutionOnSegment()) {
      return -1;
    }

    belong();
  }while(comparisonEps() == false);

  x = center();

  return 0;
}
