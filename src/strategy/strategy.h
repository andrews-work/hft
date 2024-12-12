//  root/src/strategy/strategy.h

#ifndef strategy_h
#define strategy_h

#include <string>

class Strategy {

    public:

        virtual ~Strategy() = default;
        virtual void execute() = 0; 
        virtual std::string getName() const = 0;
};

#endif