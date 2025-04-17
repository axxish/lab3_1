#include "Newton.hpp"
#include <cmath>

// Реалізація функцій класу Newton

double Newton::f(double x) {
    return 3 * x - 4 * std::log(x) - 5;
}

double Newton::derivative(double x, double delta) {
    return (f(x+delta) - f(x)) / delta;
}

double Newton::calculate(int n) {
    double x = 0; // Initial guess
    for (int i = 0; i < n; ++i) {
        x = x -( f(x) / derivative(x));
    }
    return x;
}
