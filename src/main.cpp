// root/src/main.cpp

#include <iostream>
#include "traders/manager.h"
#include "traders/trader.h"
#include "strategy/strategy.h"
#include "strategy/manager.h"
#include "risk/risk.h"
#include "risk/manager.h"

int main() {

    // create instance of trade manager
    TraderManager traderManager;

    // select trader
    int traderChoice;
    std::cout << "select trader: ";
    std::cin >> traderChoice;

    // execute trader
    Trader* selectedTrader = traderManager.selectTrader(traderChoice);

    if (selectedTrader != nullptr) {
        selectedTrader -> displayInfo();
    }
    
    else {
        std:: cout << "invalid trader choice" << std::endl;
    }

    // create instance of strategy manager
    StrategyManager strategyManager;

    // select strategy
    int strategyChoice;
    std::cout << "select strategy: ";
    std::cin >> strategyChoice;

    // execute strategy
    Strategy* selectedStrategy = strategyManager.selectStrategy(strategyChoice);

    if (selectedStrategy != nullptr) {
        std::cout << "selected: " << selectedStrategy -> getName() << std::endl;
        selectedStrategy->execute();
    }

    else {
        std::cout << "invalid strategy choice" << std::endl;
        return 1;
    }

    // create instance of risk manager
    RiskManager riskManager;

    // select risk
    int riskchoice;
    std::cout << "select risk: ";
    std::cin >> riskchoice;

    // execute risk
    Risk* selectedRisk = riskManager.selectRisk(riskchoice);

    if (selectedRisk != nullptr) {
        std::cout << "select: " << selectedRisk -> getName() <<std::endl;
        selectedRisk -> execute();
    }

    else {
        std::cout << "invalid risk choice" << std::endl;
        return 2;
    }

    // end
    return 0;
}