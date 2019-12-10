//
// Created by mkram on 10.12.2019.
//

#include "IntCodeManager.h"

IntCodeManager::IntCodeManager(const std::string &inputString) : inputString(inputString) {}

void IntCodeManager::parse() {
    while(this->inputString.length() > 1) {
        std::string delimiter = ",";
        this->codeVector.push_back(std::strtoull(this->inputString.substr(0, this->inputString.find(delimiter)).c_str(), nullptr, 0));
        this->inputString.erase(0, inputString.find(delimiter) + delimiter.length());
    }
    this->codeVector.push_back(std::strtoull(this->inputString.c_str(), nullptr, 0));
    this->inputString.erase(0, 1);
}

const std::vector<unsigned long long> &IntCodeManager::getCodeVector() const {
    return codeVector;
}

unsigned long long IntCodeManager::getWorkingPos() const {
    return workingPos;
}

void IntCodeManager::setWorkingPos(unsigned long long workingPos) {
    IntCodeManager::workingPos = workingPos;
}

void IntCodeManager::increaseWorkingPos() {
    this->setWorkingPos(IntCodeManager::workingPos + 4);
}

void IntCodeManager::executeOperation() {
    unsigned long long firstValPos = 0;
    unsigned long long secondValPos = 0;
    unsigned long long saveToPos = 0;
    if(this->workingPos + 3 > this->codeVector.size())
        return;

    switch(this->codeVector.at(this->workingPos)) {
        case 1:
            firstValPos = this->codeVector.at(this->workingPos + 1);
            secondValPos = this->codeVector.at(this->workingPos + 2);
            saveToPos = this->codeVector.at(this->workingPos +3);
            if(firstValPos >= this->codeVector.size() || secondValPos >= this->codeVector.size() || saveToPos>= this->codeVector.size()) {
                break;
            }
            this->codeVector[saveToPos] = this->codeVector.at(firstValPos) + this->codeVector.at(secondValPos);
            break;
        case 2:
            firstValPos = this->codeVector.at(this->workingPos + 1);
            secondValPos = this->codeVector.at(this->workingPos + 2);
            saveToPos = this->codeVector.at(this->workingPos +3);
            if(firstValPos >= this->codeVector.size() || secondValPos >= this->codeVector.size() || saveToPos>= this->codeVector.size()) {
                break;
            }
            this->codeVector[saveToPos] = this->codeVector.at(firstValPos) * this->codeVector.at(secondValPos);
            break;
        default:
            std::cout << "Unexpected Value: " << this->codeVector.at(this->workingPos) << std::endl;
            break;
    }
}

void IntCodeManager::setCodeVector(const std::vector<unsigned long long int> &codeVector) {
    IntCodeManager::codeVector = codeVector;
};

void IntCodeManager::changeFirstTwoInputs(unsigned long long param1, unsigned long long param2) {
    this->codeVector[1] = param1;
    this->codeVector[2] = param2;
}
