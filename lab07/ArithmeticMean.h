#pragma once
#include "Mean.h"

class ArithmeticMean: public Mean{
    public:
    ArithmeticMean():suma(0),n(0){};
    double result() const;
    void reset();
    std::string name() const;
    
    void add(double a);
    double suma;
    int n;
};
