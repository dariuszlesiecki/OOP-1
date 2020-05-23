#include "Sum.h"

double Sum::value() const{
    return _suma;
}

Sum sumData(const Data &d){
    
    Sum suma(d.sum());
    
    return suma;
}

void Sum::operator()(const double &x){
    _suma+=x;
}