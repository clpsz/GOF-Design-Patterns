#ifndef __DECORATOR_H
#define __DECORATOR_H

#include "common.h"
#include "Component.h"

class Decorator : public Component
{
public:
    Decorator(Component *com);
    ~Decorator();
    virtual void before() = 0;
    virtual void after() = 0;
    void operation();

private:
    Component *component;
};

#endif

