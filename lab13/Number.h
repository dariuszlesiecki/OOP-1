#pragma once
#include <iostream>
#include <exception>

class Number{
    public:
        Number(double n):_n(n){
            if(n<_min || n>_max) wrongConstructor=true;
        }
        static void setRange(double min, double max);
        Number &value();
        void operator=(double n);
        double value()const;
        void print()const;
        

    private:
        double _n;
        bool wrongConstructor=false;
        bool wrongAssignment=false;
        static double _min;
        static double _max;
};