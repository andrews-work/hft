//root/src/traders/manager.h

// define
#ifndef manager_h
#define manager_h

// include
#include "trader.h"
#include <vector>

// class
class TraderManager {

    //private
    private:
        std::vector<Trader> traders;

    //public 
    public: 
        TraderManager();
        Trader* selectTrader(int traderChoice);
        
};

#endif