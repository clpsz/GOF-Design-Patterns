#ifndef __AGGREGATE_H
#define __AGGREGATE_H

#include "Iterator.h"

class Aggregate
{
public:
    Aggregate();
    ~Aggregate();

    virtual Iterator *createIterator() = 0;
};

#endif

