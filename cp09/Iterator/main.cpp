#include "Iterator.h"
#include "Breakfast.h"
#include "Diner.h"

using namespace menu;
int main()
{
    Diner *d = new Diner();
    Iterator *it = d->createIterator();
    Breakfast *b = new Breakfast();
    Iterator *bit = b->createIterator();

    while (it->hasNext())
    {
        (it->next())->print();
    }
    while (bit->hasNext())
    {
        (bit->next())->print();
    }

    delete it;
    delete d;
    return 0;
}

