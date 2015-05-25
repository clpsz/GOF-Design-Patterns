#ifndef __ITERATOR_H
#define __ITERATOR_H

class Iterator
{
public:
    Iterator();
    ~Iterator();
    
    virtual int first() = 0;
    virtual int next() = 0;
    virtual bool isDone() = 0;
    virtual int currentItem() = 0;
};

#endif

