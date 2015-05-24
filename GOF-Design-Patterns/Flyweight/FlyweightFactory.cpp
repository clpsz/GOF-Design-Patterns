#include "ConcreteFlyweight.h"
#include "FlyweightFactory.h"

FlyweightFactory::FlyweightFactory()
{
}

FlyweightFactory::~FlyweightFactory()
{
}

Flyweight *FlyweightFactory::getFlyweight(string key)
{
    if (!pool[key])
    {
        pool[key] = new ConcreteFlyweight(key);
    }

    return pool[key];
}
