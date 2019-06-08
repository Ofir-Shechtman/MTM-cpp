#include <iostream>
#include "Rational.h"

int main(){
    Rational r1(1);
    Rational r2(1,2);
    std::cout << r1+r2 << std::endl;
    std::cout << (double)(r1+r2) << std::endl;
}
