#ifndef __CONCRETE_SUBJECT_H
#define __CONCRETE_SUBJECT_H

#include "common.h"
#include "Subject.h"
#include "Observer.h"

class ConcreteSubject : public Subject
{
public:
    ConcreteSubject();
    ~ConcreteSubject();

    void attach(Observer *o);
    void notify();

private:
    vector<Observer *> vec;
};

#endif

