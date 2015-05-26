#include "common.h"
#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"



int main()
{
    ConcreteAggregate *a = new ConcreteAggregate();
    a->addItem(5);
    a->addItem(4);
    a->addItem(3);
    a->addItem(2);
    a->addItem(1);


    Iterator *i = a->createIterator();
    while (!i->isDone())
    {
        cout << i->next() << endl;
    }

    return 0;
}

