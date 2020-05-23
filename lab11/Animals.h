#pragma once
#include "Animal.h"
#include <iostream>

class Sheep: public Animal{
    public:
    Sheep(const std::string &name):Animal(name){}
    ~Sheep();
    void print()const;
    bool ostrz() const;
    void shear();
    private:
    bool ostrzyzona=false;

};

class Cow: public Animal{
    public:
    Cow(const std::string &name):Animal(name){}
    ~Cow();
    void print()const;

    private:
};

class Horse: public Animal{
    public:
    Horse(const std::string &name):Animal(name){}
    ~Horse();
    void print()const;

    private:
};