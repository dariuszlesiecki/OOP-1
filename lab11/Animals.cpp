#include "Animals.h"

bool Sheep::ostrz() const{
    return ostrzyzona;
}

void Sheep::print()const{
    std::cout<<"Owca "<< name() << " ";
    if(ostrz()) std::cout<<"ostrzyzona";
    else std::cout<<"nieostrzyzona";
}
void Sheep::shear(){
    ostrzyzona=true;
}

void Cow::print()const{
    std::cout<<"Krowa "<< name();
}

void Horse::print()const{
    std::cout<<"Krowa "<< name();
}

Sheep::~Sheep(){
    std::cout<<"- ";
    print();
    std::cout<< " wraca do zagrody"<<std::endl;
}

Cow::~Cow(){
    std::cout<<"- ";
    print();
    std::cout<< "wraca do obory"<<std::endl;
}

Horse::~Horse(){
    std::cout<<"- ";
    print();
    std::cout<< "ostrzyzona wraca do stajni"<<std::endl;
}