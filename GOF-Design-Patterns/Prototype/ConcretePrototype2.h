#ifndef __CONCRETE_PROTOTYPE2_H
#define __CONCRETE_PROTOTYPE2_H

#include "Prototype.h"

class ConcretePrototype2: public Prototype
{
public:
    ConcretePrototype2(string n);
    ~ConcretePrototype2();
    ConcretePrototype2(const ConcretePrototype2 &other);

    string name();
    void setName(string newName);
    Prototype *clone();

private:
    string myName;
};

#endif


