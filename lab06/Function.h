#pragma once
#include <iostream>
#include <cmath>

class Function{
    public:
        virtual ~Function();
        virtual Function* Copy()=0;
        virtual double calc(double) const;
        
    private:

};