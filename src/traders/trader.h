// root/src/traders/trader.h

// define
#ifndef trader_h
#define trader_h

#include "strategy/strategy.h"
#include "risk/risk.h"

// class
class Trader {

    // private
    private:
    
        int id;
        double balance;
        int numTrades;

        Strategy* strategy;
        Risk* risk;
    
    // public
    public:

        Trader(int id, double balance);

        void displayInfo();
        
        void setStrategy(Strategy* newStrategy);
        void executeStrategy();

        void setRisk(Risk* newRisk);
        void executeRisk();
};

#endif