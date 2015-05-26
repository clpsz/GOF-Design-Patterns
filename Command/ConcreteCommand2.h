#ifndef __CONCRETE_COMMAND2_H
#define __CONCRETE_COMMAND2_H

#include "Command.h"
#include "Receiver.h"

class ConcreteCommand2 : public Command
{
public:
    ConcreteCommand2(Receiver *r);
    ~ConcreteCommand2();

    void execute();

private:
    Receiver *receiver;
};

#endif


