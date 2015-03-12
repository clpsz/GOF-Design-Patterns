#ifndef PROCESS_H
#define PROCESS_H

#include <iostream>
#include <string>
#include "State.h"

namespace state
{
using std::string;
using std::cout;
using std::endl;

class Process
{
public:
    Process(string n);
    ~Process()
    {
        // need free memory
    }

    string getName()
    {
        return name;
    }
    void setState(State *s)
    {
        curState = s;
    }
    State *getReadyState()
    {
        return readyState;
    }
    State *getRunningState()
    {
        return runningState;
    }
    State *getBlockedState()
    {
        return blockedState;
    }
    void resumedByCpu()
    {
        State *oldState = curState;
        cout << "Resume by CPU event" << endl;
        State *s = this->curState;
        s->resumedByCpu();
        cout << oldState->getName() << "->" << curState->getName() << endl << endl;
    }
    void timeSlotEnd()
    {
        State *oldState = curState;
        cout << "Time slot end event" << endl;
        State *s = this->curState;
        s->timeSlotEnd();
        cout << oldState->getName() << "->" << curState->getName() << endl << endl;
    }
    void needIO()
    {
        State *oldState = curState;
        cout << "Need IO event" << endl;
        State *s = this->curState;
        s->needIO();
        cout << oldState->getName() << "->" << curState->getName() << endl << endl;
    }
    void finishIO()
    {
        State *oldState = curState;
        cout << "Finish IO event" << endl;
        State *s = this->curState;
        s->finishIO();
        cout << oldState->getName() << "->" << curState->getName() << endl << endl;
    }
private:
    string name;
    State *readyState;
    State *runningState;
    State *blockedState;
    State *curState;
};
}

#endif

