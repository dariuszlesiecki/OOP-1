#pragma once
#include "Drawable.h"
#include <cmath>


class Point{
    public:
    Point(double x, double y):_x(x),_y(y){}
    void print() const;
    void Shift(double x, double y);
    double getx() const;
    double gety() const;
    private:
    double _x,_y;

};

std::ostream& operator<<(std::ostream& o, const Point& p);

class Circle: public Drawable, public Transformable, public ClosedShape{
    public:
    Circle(Point p, double r):_p(p), _r(r){}
    void Draw() const;
    void shift(double x, double y);
    double area() const;
    private:
    Point _p;
    double _r;

};

class Line: public Drawable, public Transformable{
    public:
    Line(Point p1,Point p2):_p1(p1),_p2(p2){}
    void Draw() const;
    void shift(double x, double y);
    private:
    Point _p1;
    Point _p2;
};

class Rectangle: public Drawable, public Transformable, public ClosedShape{
    public:
    Rectangle(Point p1,Point p2):_p1(p1),_p2(p2){}
    void Draw() const;
    void shift(double x, double y);
    double area() const;
    private:
    Point _p1;
    Point _p2;
};
