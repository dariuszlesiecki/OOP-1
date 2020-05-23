#pragma once
#include <iostream>

class Drawable{
    public:
    
    virtual void Draw() const;
    private:
};

void draw(Drawable *d);

class Transformable{
    public:
    virtual void shift(double,double);

    private:
};

class ClosedShape{
    public:
    virtual double area() const;

    private:

};