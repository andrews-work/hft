#ifndef risk2_h
#define risk2_h

#include "risk.h"
#include <iostream>

class Risk2 : public Risk {

    public:

        void execute() override {
            std::cout << "risk 1" << std::endl;
        };

        std::string getName() const override {
            return "risk 2: ";
        }
};

#endif