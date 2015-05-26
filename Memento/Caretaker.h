#ifndef __CARETAKER_H
#define __CARETAKER_H

#include "Memento.h"
#include "Originator.h"

class Caretaker
{
public:
    Caretaker(Originator *o);
    ~Caretaker();

    void saveState();
    void restoreState();

private:
    Originator *originator;
    Memento *memento;
};

#endif

