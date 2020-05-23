#include "Drawable.h"

void Drawable::Draw() const{

}
void draw(Drawable *d){
    d->Draw();
}

void Transformable::shift(double x, double y){

}

double ClosedShape::area() const{
    return 0;
}
