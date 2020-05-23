#pragma once
#include "Data.h"

class Table{
    public:
    void operator+=(const Data &d);
    void print() const;
    Table sort(const int&);
    Table sortBy(std::function<bool(const Data&, const Data&)>);


    private:
    int min;
    std::vector<Data> _t;
};