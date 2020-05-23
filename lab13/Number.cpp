#include "Number.h"

double Number::_min=0;
double Number::_max=0;

void Number::setRange(double min, double max){
    _min=min;
    _max=max;
}
Number &Number::value(){
    return *this;
}

void Number::operator=(double n){
    if(n<_min || n>_max) wrongAssignment=true;
    _n=n;
}

double Number::value()const{
    return _n;
}
void Number::print()const{
            
    if(wrongConstructor) throw std::out_of_range("Out of range during construction");
    if(wrongAssignment) throw std::out_of_range("Out of range during assignment");
    std::cout<<"Number: "<<_n<<" is in the range ["<<_min<<","<<_max<<"]"<<std::endl;
}