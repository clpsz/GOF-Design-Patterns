#ifndef __CONCRETE_DECORATORA_H
#define __CONCRETE_DECORATORA_H

#include "common.h"
#include "Decorator.h"
#include "Component.h"

class ConcreteDecoratorA : public Decorator
{
public:
    ConcreteDecoratorA(string n, Component *com);
    ~ConcreteDecoratorA();

    void before();
    void after();

private:
    string name;
};

#endif

