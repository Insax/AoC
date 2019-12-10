#include <iostream>
#include "IntCodeManager.h"

int main() {
    std::string input = "1,0,0,3,1,1,2,3,1,3,4,3,1,5,0,3,2,1,9,19,1,19,5,23,2,6,23,27,1,6,27,31,2,31,9,35,1,35,6,39,1,10,39,43,2,9,43,47,1,5,47,51,2,51,6,55,1,5,55,59,2,13,59,63,1,63,5,67,2,67,13,71,1,71,9,75,1,75,6,79,2,79,6,83,1,83,5,87,2,87,9,91,2,9,91,95,1,5,95,99,2,99,13,103,1,103,5,107,1,2,107,111,1,111,5,0,99,2,14,0,0";
    IntCodeManager mngr = IntCodeManager(input);
    mngr.parse();

    unsigned long long itr1 = 0;
    unsigned long long itr2 = 0;
    std::vector<unsigned long long> saveCpy = mngr.getCodeVector();
    std::vector<unsigned long long> saveSaveCpy = mngr.getCodeVector();
    while(mngr.getCodeVector().at(0) != 19690720) {
        for (itr1 = 0; itr1 <= 99; itr1++) {
            for (itr2 = 0; itr2 <= 99; itr2++) {
                saveSaveCpy = mngr.getCodeVector();
                while (mngr.getCodeVector().at(mngr.getWorkingPos()) != 99 && (mngr.getWorkingPos() + 3) <= mngr.getCodeVector().size()) {
                    mngr.executeOperation();
                    mngr.increaseWorkingPos();
                }
                mngr.setWorkingPos(0);
                if (mngr.getCodeVector().at(0) != 19690720) {
                    mngr.setCodeVector(saveCpy);
                    mngr.setWorkingPos(0);
                    mngr.changeFirstTwoInputs(itr1, itr2);
                } else {
                    break;
                }
            }
            if(mngr.getCodeVector().at(0) == 19690720)
                break;
        }
    }

    std::cout << mngr.getCodeVector().at(0) << std::endl;
    std::cout << "100 * noun + verb: " << 100 * saveSaveCpy.at(1) + saveSaveCpy.at(2);
}