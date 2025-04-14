#pragma once
#ifndef _DYHOTOMIA_HPP_
#define _DYHOTOMIA_HPP_
class Dyhotomia{
    public:
        Dyhotomia(void);
        ~Dyhotomia(void);

        
        void setVolumes(double vol_a, double vol_b);
        void setTolerance(double vol_eps);

        int calculate(double &x);

    private:
        double f(double x);
        double a;
        double b;
        double eps;
    
};

#endif