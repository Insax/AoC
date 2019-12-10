//
// Created by mkram on 10.12.2019.
//

#ifndef AOC_FUELREQUIREMENT_H
#define AOC_FUELREQUIREMENT_H

class FuelRequirement {
public:
    /**
     * Construct According to Mass
     * @param mass
     */
    FuelRequirement(long mass);

    long getFuelAmount() const;

    void setFuelAmount(long fuelAmount);

    long calculateFuelNeeded(long mass);
    /**
     * Empty Constructor
     */
    FuelRequirement() { FuelRequirement::fuelAmount = 0; };
    FuelRequirement(const FuelRequirement &requirement);
private:
    long fuelAmount;
};


#endif //AOC_FUELREQUIREMENT_H
