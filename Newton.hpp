#pragma once

#include <cmath>

class Newton{
    int a, b;
    private:
    double f(double x);
    double derivative(double x, double delta = 1e-6);
    public:

    double calculate(int n);
};