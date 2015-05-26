#ifndef __CONCRETE_COMMAND1_H
#define __CONCRETE_COMMAND1_H

#include "Command.h"
#include "Receiver.h"

class ConcreteCommand1 : public Command
{
public:
    ConcreteCommand1(Receiver *r);
    ~ConcreteCommand1();

    void execute();

private:
    Receiver *receiver;
};

#endif

