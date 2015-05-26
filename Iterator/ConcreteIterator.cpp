#include "ConcreteIterator.h"

ConcreteIterator::ConcreteIterator(ConcreteAggregate *a):
    aggregate(a),
    currentIndex(0)
{
    aggregateSize = a->size();
}

ConcreteIterator::~ConcreteIterator()
{
}

int ConcreteIterator::first()
{
    return aggregate->getItem(0);
}

int ConcreteIterator::next()
{
    return aggregate->getItem(currentIndex++);
}

bool ConcreteIterator::isDone()
{
    return currentIndex >= aggregateSize;
}

int ConcreteIterator::currentItem()
{
    return aggregate->getItem(currentIndex);
}

