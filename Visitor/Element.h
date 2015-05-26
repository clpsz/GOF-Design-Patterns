#ifndef __ELEMENT_H
#define __ELEMENT_H

#include "common.h"

class Visitor;

class Element
{
public:
    Element();
    ~Element();

    virtual void accept(Visitor *v) = 0;
    virtual string getName() = 0;
};

#endif

