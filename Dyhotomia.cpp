#include "Dyhotomia.hpp"
#include <cmath>

Dyhotomia::Dyhotomia(void) : a(0), b(0), eps(0) {}
Dyhotomia::~Dyhotomia(void) {}

void Dyhotomia::setVolumes(double vol_a, double vol_b) {
    a = vol_a;
    b = vol_b;
}

void Dyhotomia::setTolerance(double vol_eps) {
    eps = vol_eps;
}

double Dyhotomia::f(double x) {
    return x * x * x - x - 2.0;
}

int Dyhotomia::calculate(double &x) {
    f(a) - f(b);
    return 0; // Success
}