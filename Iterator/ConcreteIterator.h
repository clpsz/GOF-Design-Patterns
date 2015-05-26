#ifndef __CONCRETE_ITERATOR_H
#define __CONCRETE_ITERATOR_H

#include "ConcreteAggregate.h"

class ConcreteIterator : public Iterator
{
public:
    ConcreteIterator(ConcreteAggregate *);
    ~ConcreteIterator();

    int first();
    int next();
    bool isDone();
    int currentItem();

private:
    ConcreteAggregate *aggregate;
    int aggregateSize;
    int currentIndex;
};


#endif

