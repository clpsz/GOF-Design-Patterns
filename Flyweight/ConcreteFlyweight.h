#ifndef __CONCRETE_FLYWEIGHT_H
#define __CONCRETE_FLYWEIGHT_H

#include "common.h"
#include "Flyweight.h"

class ConcreteFlyweight : public Flyweight
{
public:
    ConcreteFlyweight(string n);
    ~ConcreteFlyweight();

    void operation(int extrinsicState);
    void show();

private:
    string name;
};

#endif

