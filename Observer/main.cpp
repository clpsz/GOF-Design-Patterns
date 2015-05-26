#include "ConcreteSubject.h"
#include "ConcreteObserver.h"


int main()
{
    Observer *o1 = new ConcreteObserver("observer1");
    Observer *o2 = new ConcreteObserver("observer2");

    Subject *sub = new ConcreteSubject();
    sub->attach(o1);
    sub->attach(o2);

    sub->notify();

    return 0;
}

