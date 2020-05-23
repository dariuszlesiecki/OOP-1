#pragma once
#include "Animals.h"
#include <vector>
#include <memory>
#include <algorithm>


class Meadow{
    public:
    void add(std::unique_ptr<Animal> animal);
    void countNames()const;
    std::vector<Sheep*> getSheepHerd() const;
    void print(const std::string &s)const;


    private:
    std::vector<std::unique_ptr<Animal>> _v;

};
