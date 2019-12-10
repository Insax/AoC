//
// Created by mkram on 10.12.2019.
//

#include <iostream>
#include "Rocket.h"

Rocket::Rocket(std::vector<long> modules) {
    for(auto &it : modules) {
        this->modules.emplace_back(it);
    }
}

long long Rocket::calculateFuelRequirement() {
    long long fuelRequirement = 0;
    for(auto &it : this->modules) {
        fuelRequirement += it.getFuelRequirement();
    }
    return fuelRequirement;
}