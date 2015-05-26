#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"

ConcreteAggregate::ConcreteAggregate():
    currentIndex(0)
{
}

ConcreteAggregate::~ConcreteAggregate()
{
}

Iterator *ConcreteAggregate::createIterator()
{
    return new ConcreteIterator(this);
}

void ConcreteAggregate::addItem(int value)
{
    array[currentIndex++] = value;
}

int ConcreteAggregate::getItem(int index)
{
    return array[index];
}

