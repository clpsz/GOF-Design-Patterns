#ifndef __CONCRETE_DECORATORB_H
#define __CONCRETE_DECORATORB_H

#include "common.h"
#include "Decorator.h"
#include "Component.h"

class ConcreteDecoratorB : public Decorator
{
public:
    ConcreteDecoratorB(string n, Component *com);
    ~ConcreteDecoratorB();

    void before();
    void after();

private:
    string name;
};

#endif

