#ifndef CFACTORY_H_
#define CFACTORY_H_
#include "checkout.h"
#include "display.h"
#include "return.h"

class CFactory {
public:
    CFactory();
    ~CFactory();
    Command* createIt(char ch) const;

private:
    Command* comFactory_[100];
    int hash(char) const;
    
};
#endif