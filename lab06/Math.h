#pragma once
#include "Function.h"

class Sin : public Function{
    public:
        Sin(double a):_a(a){};
        double calc(double) const;
        void set_parameter(double);
        Function* Copy();
    private:
        double _a;
};

class Quadratic:public Function{
    public:
        Quadratic(double a, double b, double c):_a(a),_b(b),_c(c){};
        double calc(double) const;
        Function* Copy();
    private:
        double _a,_b,_c;
};

class Derivative:public Function{
    public:
        Derivative(Function* f): _f(f){}
        ~Derivative();
        Derivative(const Derivative &d);
        double calc(double) const;
        void set_dx(double);
        Function* Copy();
    private:
        Function* _f;
        double _dx;
};