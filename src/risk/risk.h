// root/src/risk/risk.h

#ifndef risk_h
#define risk_h

#include <string>

class Risk {

    public:

    virtual ~Risk() = default;
    virtual void execute() = 0;
    virtual std::string getName() const = 0;
};


#endif