#include "Dyhotomia.hpp"
#include <iostream>
int main(){
    std::cout << "Enter a, b, eps:";
    double a, b, eps, x;
    std::cin >> a >> b >> eps;
    Dyhotomia * d = new Dyhotomia();
    d->setVolumes(a, b);
    d->setTolerance(eps);
    if(d->count(x)){
        std::cout << "x = " << x << std::endl;
    }
    else{
        std::cout<<"X doesn't exist" << std::endl;
    }


    

    
    return 0;
}