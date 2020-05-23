#include "ArithmeticMean.h"

double ArithmeticMean::result() const{
    if(n==0) return 0;
    return suma/n;
}
void ArithmeticMean::reset(){
    suma=0;
    n=0;
}

std::string ArithmeticMean::name() const{
    std::string s="Arithmetic";
    return s;
}

void ArithmeticMean::add(double a){
    suma+=a;
    n+=1;
}