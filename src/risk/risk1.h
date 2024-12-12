#ifndef risk1_h
#define risk1_h

#include "risk.h"
#include <iostream>

class Risk1 : public Risk {

    public: 

        void execute() override {
            std::cout << "risk 5%" << std::endl;
        }

        std::string getName() const override {
            return "risk 1:" ;
        }
};

#endif