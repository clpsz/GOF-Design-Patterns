#ifndef __ORIGINATOR_H
#define __ORIGINATOR_H

#include "Memento.h"

class Originator
{
public:
    Originator();
    ~Originator();
    void add();
    Memento *createMemento();
    void setState(Memento *m);
    void showState();

private:
    int state;
};

#endif

