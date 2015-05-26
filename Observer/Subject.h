#ifndef __SUBJECT_H
#define __SUBJECT_H

#include "common.h"
#include "Observer.h"

class Subject
{
public:
    Subject();
    ~Subject();

    virtual void attach(Observer *o) = 0;
    virtual void notify() = 0;
};

#endif

