#include "Math.h"


double Sin::calc(double x) const{
    return sin(_a*x);
}
void Sin::set_parameter(double a){
    _a=a;
}
Function* Sin::Copy(){
    return new Sin(*this);
}
Function* Quadratic::Copy(){
    return new Quadratic(*this);
}
Function* Derivative::Copy(){
    return new Derivative(*this);
}

double Quadratic::calc(double x) const{
    return _a*x*x + _b*x + _c;
}

Derivative::~Derivative(){
    delete _f;
}
void Derivative::set_dx(double dx){
    _dx=dx;
}

double Derivative::calc(double x) const{
    return (_f->calc(x+_dx)-_f->calc(x-_dx))/(2*_dx);
}

Derivative::Derivative(const Derivative &d){
    Function *fnew= d._f->Copy();
    this->_f=fnew;
    this->_dx=d._dx;
}