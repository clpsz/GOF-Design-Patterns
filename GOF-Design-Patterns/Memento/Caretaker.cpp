#include "Caretaker.h"

Caretaker::Caretaker(Originator *o):
    originator(o)
{
}

Caretaker::~Caretaker()
{
}

void Caretaker::saveState()
{
    memento = originator->createMemento();
}

void Caretaker::restoreState()
{
    originator->setState(memento);
}
