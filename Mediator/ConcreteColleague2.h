#ifndef __CONCRETE_COLLEAGUE2_H
#define __CONCRETE_COLLEAGUE2_H

#include "common.h"
#include "Colleague.h"
#include "Mediator.h"

class ConcreteColleague2 : public Colleague
{
public:
    ConcreteColleague2();
    ~ConcreteColleague2();

    void setMediator(Mediator *m);
    void action();
    void notify(string name);

private:
    Mediator *mediator;
};

#endif



