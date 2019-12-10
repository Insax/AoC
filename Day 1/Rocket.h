//
// Created by mkram on 10.12.2019.
//

#ifndef AOC_ROCKET_H
#define AOC_ROCKET_H


#include <vector>
#include "Module.h"

class Rocket {
public:
    Rocket();
    Rocket(const std::vector<long> modules);
    long long calculateFuelRequirement();
private:
    std::vector<Module> modules;
};


#endif //AOC_ROCKET_H
