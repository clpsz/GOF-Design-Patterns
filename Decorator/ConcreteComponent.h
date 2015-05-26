#ifndef __COMCRETE_COMPONENT_H
#define __COMCRETE_COMPONENT_H

#include "common.h"
#include "Component.h"

class ConcreteComponent : public Component
{
public:
    ConcreteComponent(string n);
    ~ConcreteComponent();

    void operation();

private:
    string name;
};

#endif

