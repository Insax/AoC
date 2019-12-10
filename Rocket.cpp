//
// Created by mkram on 10.12.2019.
//

#include <iostream>
#include "Rocket.h"

Rocket::Rocket(std::vector<long> modules) {
    for(auto it : modules) {
        std::cout << "Iterate Through long Vector" << it << std::endl;
        this->modules.emplace_back(it);
    }
}

long long Rocket::calculateFuelRequirement() {
    long long fuelRequirement = 0;
    for(auto &it : modules) {
        fuelRequirement += it.getFuelRequirement();
        std::cout << fuelRequirement << std::endl;
    }
    std::cout << fuelRequirement << std::endl;
    return fuelRequirement;
}

Rocket::Rocket() {}
