#include "HarmonicMean.h"

HarmonicMean* HarmonicMean::create(){
    return new HarmonicMean;
}

double HarmonicMean::result() const{
    return n/suma;
}
void HarmonicMean::reset(){
    suma=0;
    n=0;
}


std::string HarmonicMean::name() const{
    std::string s="Harmonic";
    return s;
}
void HarmonicMean::add(double a){
    suma+=1/a;
    n+=1;
}