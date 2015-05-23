#ifndef __CONCRETE_PROTOTYPE1_H
#define __CONCRETE_PROTOTYPE1_H

#include "Prototype.h"

class ConcretePrototype1: public Prototype
{
public:
    ConcretePrototype1(string n);
    ~ConcretePrototype1();
    ConcretePrototype1(const ConcretePrototype1 &other);

    string name();
    void setName(string newName);
    Prototype *clone();

private:
    string myName;
};

#endif

