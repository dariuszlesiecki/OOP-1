#pragma once
#include "Mean.h"

class HarmonicMean: public Mean{
    public:
    HarmonicMean():suma(0),n(0){};
    
    static HarmonicMean* create();
    double result() const;
    void reset();
    virtual std::string name() const;
    
    void add(double a);
    double suma;
    int n;
};