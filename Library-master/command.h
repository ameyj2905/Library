#ifndef COMMAND_H_
#define COMMAND_H_
#include <iostream>

class Command {
public:
    Command();
    ~Command();
    virtual void execute() = 0;

protected:

private:

};
#endif