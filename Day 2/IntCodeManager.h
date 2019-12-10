//
// Created by mkram on 10.12.2019.
//

#ifndef DAY_2_INTCODETOVECTOR_H
#define DAY_2_INTCODETOVECTOR_H

#include <iostream>
#include <vector>

class IntCodeManager {
public:
    /**
     * Constructor
     * @param inputString
     */
    IntCodeManager(const std::string &inputString);
    const std::vector<unsigned long long> &getCodeVector() const;

    void setCodeVector(const std::vector<unsigned long long int> &codeVector);

    void parse();
    void executeOperation();
    void changeFirstTwoInputs(unsigned long long param1, unsigned long long param2);
private:
    std::vector<unsigned long long> codeVector;
    std::string inputString;
    unsigned long long workingPos = 0;
public:
    unsigned long long getWorkingPos() const;

    void setWorkingPos(unsigned long long workingPos);

    void increaseWorkingPos();
};


#endif //DAY_2_INTCODETOVECTOR_H
