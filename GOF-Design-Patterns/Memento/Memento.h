#ifndef __MEMENTO_H
#define __MEMENTO_H

class Originator;

class Memento
{
public:
    ~Memento();

private:
    friend class Originator;
    Memento(int s);
    int getState();
    int state;
};

#endif

