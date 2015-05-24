#ifndef __FLYWEIGHT_FACTORY_H
#define __FLYWEIGHT_FACTORY_H

#include "common.h"
#include "Flyweight.h"

class FlyweightFactory
{
public:
    FlyweightFactory();
    ~FlyweightFactory();

    Flyweight *getFlyweight(string key);

private:
    map<string, Flyweight *> pool;
};

#endif

