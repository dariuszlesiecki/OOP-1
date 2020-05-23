#include "Array2D.h"

int Array2D::get_i()const{
    return _i;
}

int Array2D::get_j()const{
    return _j;
}

int* Array2D::get_v()const{
    return v;
}

std::ostream& operator<<(std::ostream& o,const Array2D& a){
    for(int i=0; i<a.get_i(); i++){
        for(int j=0; j<a.get_j(); j++){
            o<<std::left<<std::setw(4)<<a.get_v()[i*a.get_j() +j];   
        }
        o<<std::endl;
    }
    return o;
}

void Array2D::reshape(int i, int j){
    if(i*j != _s){
        throw BadDimsException(_i,_j,i,j);
    }
    else if(i<0 || j<0){
        throw BadDimsException(_i,_j,i,j);
    }
    else{
        _i=i;
        _j=j;
    }
}

int *Array2D::operator[](int i){
    return &v[i*_j];
}
int *Array2D::operator[](int i) const{
    return &v[i*_j];
}

const int& Array2D::at(int i, int j)const{
    if(i>=_i || i<0){
        std::string s="out of range at i="+std::to_string(i);
        throw std::out_of_range(s);
    }
    else if(j>=_j || j<0){
        std::string s="out of range at j="+std::to_string(j);
        throw std::out_of_range(s);
    }
    
    else{
        return v[i*_j+j];
    }
}
int& Array2D::at(int i, int j){
    return const_cast<int&>(const_cast<const Array2D*>(this)->at(i, j));
}

Array2D& Array2D::operator=(const Array2D& a){
    if(&a==this) return *this;
    delete[] v;
    _s=a._s;
    _i=a._i;
    _j=a._j;
    v=new int[_s];
    for(int k=0; k<_s; k++){
        v[k]=a.v[k];
    }
    return *this;
}