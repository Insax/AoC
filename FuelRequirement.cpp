//
// Created by mkram on 10.12.2019.
//

#include <iostream>
#include "FuelRequirement.h"
#include "math.h"


FuelRequirement::FuelRequirement(long mass) {
    double tmpMass = mass;
    this->fuelAmount = (long)(mass ? (floor(tmpMass / 3) - 2) : 0);
}

FuelRequirement::FuelRequirement(const FuelRequirement &requirement) {
    this->fuelAmount = requirement.getFuelAmount();
}

long FuelRequirement::getFuelAmount() const {
    return this->fuelAmount;
}

void FuelRequirement::setFuelAmount(long fuelAmount) {
    this->fuelAmount = fuelAmount;
}
