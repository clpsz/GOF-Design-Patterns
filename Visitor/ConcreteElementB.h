#ifndef __CONCRETE_ELEMENTB_H
#define __CONCRETE_ELEMENTB_H

#include "common.h"
#include "Element.h"

class ConcreteElementB : public Element
{
public:
    ConcreteElementB(string n);
    ~ConcreteElementB();

    void accept(Visitor *v);
    string getName() { return name; }

private:
    string name;
};

#endif


