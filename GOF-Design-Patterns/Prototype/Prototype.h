#ifndef __PROTOTYPE_H
#define __PROTOTYPE_H

#include "common.h"

class Prototype
{
public:
    Prototype();
    ~Prototype();
    
    virtual string name() = 0;
    virtual void setName(string newName) = 0;
    virtual Prototype *clone() = 0;
};

#endif

