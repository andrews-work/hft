// root/src/traders/manager.cpp

#include "manager.h"
#include "trader.h"
#include <iostream>

TraderManager::TraderManager() {
    traders.push_back(Trader (1, 10.00));
    traders.push_back(Trader (2, 20.00));
    traders.push_back(Trader (3, 30.00));
}

Trader*  TraderManager::selectTrader(int traderChoice) {
    
    if (traderChoice >= 1 && traderChoice <= traders.size()) {
        return &traders[traderChoice - 1];
    } 

    else {
        std::cout << "invalid trader choice" << std::endl;
        return nullptr;
    }
}