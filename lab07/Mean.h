#pragma once
#include <iostream>
#include <cmath>
#include <string>

class Mean{
    public:
    virtual ~Mean();
    virtual double result() const=0;
    virtual void reset()=0;
    virtual std::string name() const=0;
    virtual void add(double a)=0;
    friend Mean& operator << (Mean&, double);
    const Mean &operator<<(const double a) const;
    
};
std::ostream& operator<<(std::ostream &o, const Mean &m);
