#ifndef strategy1_h
#define strategy1_h

#include "strategy.h"
#include <iostream>

class Strategy1 : public Strategy {

    public:
    
        void execute() override {
            std::cout << "strategy 1" << std::endl;
        };

        std::string getName() const override {
            return "strategy 1: ";
        }
};

#endif