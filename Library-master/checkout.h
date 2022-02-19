#ifndef CHECKOUT_H_
#define CHECKOUT_H_
#include "patronAction.h"

class Checkout : public PatronAction {
public:
    Checkout();
    virtual ~Checkout();
    virtual bool SetData(Library*, ifstream&);
    virtual PatronAction* create() const;
    
    //executes the checkout.
    virtual bool execute();

    //displays the checkout
    virtual void display() const;
    
protected:

private:
    char itemType;
    Item* tempItem;
    int patronId;

};
#endif
