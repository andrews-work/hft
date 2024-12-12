#ifndef riskManager_h
#define riskManager_h

#include "risk.h"
#include "risk1.h"
#include "risk2.h"

#include <memory>

class RiskManager {

    public: 
        Risk* selectRisk(int riskChoice) {

            if(riskChoice == 1) {
                return new Risk1();
            }

            else if (riskChoice == 2) {
                return new Risk2();
            }

            else {
                std::cout << "invalid risk choice" << std::endl;
                return nullptr;
            };
        }
};

#endif