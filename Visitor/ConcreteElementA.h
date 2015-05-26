#ifndef __CONCRETE_ELEMENTA_H
#define __CONCRETE_ELEMENTA_H

#include "common.h"
#include "Element.h"

class ConcreteElementA : public Element
{
public:
    ConcreteElementA(string n);
    ~ConcreteElementA();

    void accept(Visitor *v);
    string getName() { return name; }

private:
    string name;
};

#endif

