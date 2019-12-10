//
// Created by mkram on 10.12.2019.
//

#include "FuelRequirement.h"

#ifndef AOC_MODULE_H
#define AOC_MODULE_H

class Module {
public:
    /**
     * Construct with Mass
     * @param mass
     */
    explicit Module(long mass);
    /**
     * Default Constructor
     */
    Module();

    long getMass() const;

    void setMass(long mass);

    long getFuelRequirement() { return this->fuel.getFuelAmount(); }

    /**
     * Copy Constructor
     * @param mdl
     */
    Module(const Module &mdl);

private:
    /**
     * Mass of the Module
     */
    long mass;
    /**
     * Fuel Requirement
     */
    FuelRequirement fuel;
};


#endif //AOC_MODULE_H
