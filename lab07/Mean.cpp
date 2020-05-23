#include "Mean.h"

Mean::~Mean(){
}

Mean& operator<<(Mean& m,double a){
    m.add(a);
    return m;
}
const Mean& Mean::operator<<(const double a) const{
    std::cout << "cannot add value " << a << " to const" << std::endl;
    return *this;
}

std::ostream& operator<<(std::ostream &o, const Mean &m){
    o<< m.name();
    return o;
}