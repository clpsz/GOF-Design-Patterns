#ifndef __CONCRETE_AGGREGATE_H
#define __CONCRETE_AGGREGATE_H

#include "Aggregate.h"

class ConcreteAggregate : public Aggregate
{
public:
    ConcreteAggregate();
    ~ConcreteAggregate();

    void addItem(int value);
    int getItem(int index);
    Iterator *createIterator();
    int size() { return currentIndex; }

private:
    int array[100];
    int currentIndex;
};

#endif

