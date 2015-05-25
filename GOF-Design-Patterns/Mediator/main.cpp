#include "Mediator.h"
#include "ConcreteMediator.h"
#include "ConcreteColleague1.h"
#include "ConcreteColleague2.h"


int main()
{
    Colleague *cc1 = new ConcreteColleague1();
    Colleague *cc2 = new ConcreteColleague2();
    Mediator *m = new ConcreteMediator(cc1, cc2);
    cc1->setMediator(m);
    cc2->setMediator(m);

    cc1->notify("colleague2");
    cc2->notify("colleague1");

    return 0;
}

