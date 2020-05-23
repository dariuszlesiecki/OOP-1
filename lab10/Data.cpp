#include "Data.h"

void Data::print() const{
    std::cout<< _s <<": ";
    std::for_each(_v.begin(),_v.end(),[](double x){std::cout<<std::setw(6)<<x;});
    std::cout<<std::endl;
}

double Data::sum() const{

    //double s=std::accumulate(_v.begin(),_v.end(),0.0);
    double s=0;
    std::for_each(_v.begin(),_v.end(),[&](double x){s+=x;});
    return s;
}
std::vector<double> Data::getv() const{
    return _v;
}