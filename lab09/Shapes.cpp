#include "Shapes.h"

void Point::print() const{
    std::cout<< "(" << _x<<", "<<_y<<")";
}

std::ostream& operator<<(std::ostream& o, const Point& p){
    p.print();
    return o;
}
void Point::Shift(double x,double y){
    _x+=x;
    _y+=y;
}
double Point::getx() const{
    return _x;
}
double Point::gety() const{
    return _y;
}

void Circle::Draw() const{
    std::cout<<"++ Rysuje kolo o srodku ";
    _p.print();
    std::cout<< " i promieniu " << _r << std::endl;
}
void Circle::shift(double x, double y){
    _p.Shift(x,y);
}

double Circle::area() const{
    double r2=_r*_r;
    return 3.141592*r2;
}

void Line::Draw() const{
    std::cout<<"++ Rysuje linie od ";
    _p1.print();
    std::cout<<" do ";
    _p2.print();
    std::cout<<std::endl;
}
void Line::shift(double x, double y){
    _p1.Shift(x,y);
    _p2.Shift(x,y);
}

void Rectangle::Draw() const{
    std::cout<<"++ Rysuje prostokat o rogach w ";
    _p1.print();
    std::cout<<" i ";
    _p2.print();
    std::cout<<std::endl;
}

void Rectangle::shift(double x, double y){
    _p1.Shift(x,y);
    _p2.Shift(x,y);
}
double Rectangle::area() const{
    double a= abs(_p2.getx() - _p1.getx());
    double b= abs(_p2.gety() - _p1.gety());
    return a*b;
}