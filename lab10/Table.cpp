#include "Table.h"

void Table::operator+=(const Data &d){
    if(_t.size()==0) min= d.getv().size()-1;
    _t.push_back(d);   
    
    if((int)d.getv().size()-1 < min) min=d.getv().size()-1;
}


void Table::print() const{
    std::for_each(_t.begin(),_t.end(),[](Data d){d.print();});
}

Table Table::sort(const int& a){
    if(a>min){ 
        std::cout<< "Indeks "<<a<<" nieprawidlowy!"<<std::endl;
        return *this;
    }
    std::sort(_t.begin(),_t.end(),[a](Data x, Data y){return x.getv()[a] < y.getv()[a];});
    return *this;
}

Table Table::sortBy(std::function<bool(const Data&, const Data&)> f){
    std::sort(_t.begin(), _t.end(), f);
    return *this;
}