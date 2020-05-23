#include "Meadow.h"

void Meadow::add(std::unique_ptr<Animal> animal){
    _v.push_back(std::move(animal));
}

void Meadow::countNames()const{
    std::vector<std::string> Allnames;
    std::vector<std::string> names;
    std::vector<int> occ;
    for(auto &x: _v){
        Allnames.push_back(x->name());
    }
    int a;
    std::sort(Allnames.begin(),Allnames.end());
    for(auto &x: Allnames){
        a=std::count(names.begin(),names.end(),x);
        if(a==0){
            names.push_back(x);
            occ.push_back(std::count(Allnames.begin(),Allnames.end(),x));
        }
    }
    int i=0;
    for(auto &x: names){
        std::cout<< x<< ": "<<occ[i]<<std::endl;
        i++;
    }
    
}

std::vector<Sheep*> Meadow::getSheepHerd()const{
    std::vector<Sheep*> tmp;
    for(auto &x:_v){
        Sheep* s=dynamic_cast<Sheep*>(x.get());
        if(s){
            tmp.push_back(s);
        }
    }
    return tmp;
}

void Meadow::print(const std::string &s) const{
    std::cout<<"=== " << s <<" ===" <<std::endl;
    for(auto& x: _v){
        x->print();
        std::cout<<std::endl;
    }
}