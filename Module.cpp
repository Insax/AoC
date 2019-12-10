//
// Created by mkram on 10.12.2019.
//

#include <iostream>
#include "Module.h"

Module::Module(long mass) {
    this->setMass(mass);
    std::cout << "Constructor of Module" << mass << std::endl;
    this->fuel = FuelRequirement(mass);
}

Module::Module() {
    this->setMass(0);
    this->fuel = FuelRequirement(0);
}

long Module::getMass() const {
    return mass;
}

void Module::setMass(long mass) {
    this->mass = mass;
}

Module::Module(const Module &mdl) {
    Module::setMass(mdl.getMass());
}

