#pragma once
#include <iostream>
#include <iomanip>
#include "BadDimsException.h"

class Array2D{

public:
    Array2D(int i, int j):_i(i),_j(j),_s(i*j){
        v=new int[_s];
        for(int k=1; k<=_s; k++) v[k-1]=k;
    }
    ~Array2D(){
        delete [] v;
    }

    int get_i() const;
    int get_j() const;
    int* get_v() const;
    void reshape(int i, int j);

    int *operator[](int i);
    int *operator[](int i)const;

    const int& at(int i, int j) const;
    int &at(int i, int j);

    Array2D& operator=(const Array2D& a);

private:
    int *v;
    int _i;
    int _j;
    int _s;

};

std::ostream& operator<<(std::ostream& o,const Array2D& a);