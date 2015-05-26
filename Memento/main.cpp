#include "Originator.h"
#include "Caretaker.h"
#include "Memento.h"


int main()
{
    Originator *o = new Originator();
    Caretaker *c = new Caretaker(o);
    o->add();
    o->showState();
    c->saveState();
    o->add();
    o->showState();
    c->restoreState();
    o->showState();


    return 0;
}

