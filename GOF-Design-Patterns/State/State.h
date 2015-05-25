#ifndef __STATE_H
#define __STATE_H

class Context;

class State
{
public:
    State();
    ~State();

    virtual void action1(Context *c) = 0;
    virtual void action2(Context *c) = 0;
    virtual void showState() = 0;
};

#endif

