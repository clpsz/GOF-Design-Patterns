#ifndef __ABSTRACTION_H
#define __ABSTRACTION_H

#include "Implementor.h"

class Abstraction
{
public:
    Abstraction();
    ~Abstraction();

    virtual void operate() = 0;
    virtual void setImplementor(Implementor *i) = 0;
};

#endif

