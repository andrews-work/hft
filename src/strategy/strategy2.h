#ifndef strategy2_h
#define strategy2_h

#include "strategy.h"
#include <iostream>

class Strategy2 : public Strategy {

    public:
    
        void execute() override {
            std::cout << "strategy 2" << std::endl;
        };

        std::string getName() const override {
            return "strategy 2:";
        }
};

#endif