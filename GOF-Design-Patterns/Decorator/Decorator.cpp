#include "Decorator.h"

Decorator::Decorator(Component *com) :
    component(com)
{
}

Decorator::~Decorator()
{
}

void Decorator::operation()
{
    before();
    component->operation();
    after();
}

