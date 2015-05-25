#ifndef __CONCRETE_OBSERVER_H
#define __CONCRETE_OBSERVER_H

#include "common.h"
#include "Observer.h"

class ConcreteObserver : public Observer
{
public:
    ConcreteObserver(string n);
    ~ConcreteObserver();

    void update();

private:
    string name;
};

#endif

