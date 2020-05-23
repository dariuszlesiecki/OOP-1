#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <initializer_list>
#include <iomanip>
#include <numeric>

class Data{
    public:
    Data(const std::string &s, std::initializer_list<double> v): _s(s),_v(v){}
    void print() const;
    double sum() const;
    std::vector<double> getv() const;

    private:
    std::string _s;
    std::vector<double> _v;

};