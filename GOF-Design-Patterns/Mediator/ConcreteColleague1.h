#ifndef __CONCRETE_COLLEAGUE1_H
#define __CONCRETE_COLLEAGUE1_H

#include "common.h"
#include "Colleague.h"
#include "Mediator.h"

class ConcreteColleague1 : public Colleague
{
public:
    ConcreteColleague1();
    ~ConcreteColleague1();

    void setMediator(Mediator *m);
    void action();
    void notify(string name);

private:
    Mediator *mediator;
};

#endif


