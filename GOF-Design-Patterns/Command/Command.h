#ifndef __COMMAND_H
#define __COMMAND_H

#include "Receiver.h"

class Command
{
public:
    Command();
    ~Command();

    virtual void execute() = 0;
};

#endif

