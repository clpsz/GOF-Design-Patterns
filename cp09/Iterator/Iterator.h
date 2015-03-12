#ifndef ITERATOR_H
#define ITERATOR_H

#include <vector>
#include "MenuItem.h"

namespace menu
{
using std::vector;

class Iterator
{
public:
    Iterator(){}
    virtual ~Iterator(){}
    virtual int hasNext() = 0;
    virtual MenuItem* next() = 0;
};

class DinerIterator: public Iterator
{
public:
    DinerIterator(MenuItem *d[], int c): menuList(d), count(c), index(0)
    {}
    ~DinerIterator(){}

    int hasNext()
    {
        return index < count;
    }
    MenuItem* next()
    {
        MenuItem *m = menuList[index];
        index++;

        return m;
    }
private:
    MenuItem **menuList;
    int count;
    int index;
};

class BreakfastIterator: public Iterator
{
public:
    BreakfastIterator(vector<MenuItem*> &mv)
    {
        menuVectorIterator = mv.begin();
        end = mv.end();
    }
    ~BreakfastIterator(){}

    int hasNext()
    {
        return (int)(menuVectorIterator != end);
    }
    MenuItem* next()
    {
        MenuItem *m = *(menuVectorIterator);
        menuVectorIterator++;
        return m;
    }
private:
    vector<MenuItem *>::const_iterator menuVectorIterator;
    vector<MenuItem *>::const_iterator end;
};
}

#endif

