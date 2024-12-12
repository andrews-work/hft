#ifndef strategyManager_h
#define strategyManager_h

#include "strategy.h"
#include "strategy1.h"
#include "strategy2.h"

#include <memory>

class StrategyManager {

    public:
        Strategy* selectStrategy(int strategyChoice) {

            if (strategyChoice == 1) {
                return new Strategy1(); // Or use smart pointers for better memory management
            }

            else if (strategyChoice ==2) {
                return new Strategy2();
            }

            else {
                std::cout << "invalid strategy choice" << std::endl;
                return nullptr;
            };
        }
};

#endif