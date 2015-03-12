#ifndef CONCRETESTATE_H
#define CONCRETESTATE_H

#include <iostream>
#include <string>
#include "Process.h"


namespace state
{
using std::string;
using std::cout;
using std::endl;

class ImpossibleException
{
};

class ReadyState: public State
{
public:
    ReadyState(Process *p, string n): State(n)
    {
        process = p;
    }
    ~ReadyState(){}

    void resumedByCpu()
    {
        cout << process->getName() << " is now running" << endl;
        process->setState(process->getRunningState());
    }
    void timeSlotEnd()
    {
        throw ImpossibleException();
    }
    void needIO()
    {
        throw ImpossibleException();
    }
    void finishIO()
    {
        throw ImpossibleException();
    }
private:
    Process *process;
};
class RunningState: public State
{
public:
    RunningState(Process *p, string n): State(n)
    {
        process = p;
    }
    ~RunningState(){}

    void resumedByCpu()
    {
        throw ImpossibleException();
    }
    void timeSlotEnd()
    {
        cout << process->getName() << " is now ready" << endl;
        process->setState(process->getReadyState());
    }
    void needIO()
    {
        cout << process->getName() << " is now blocked" << endl;
        process->setState(process->getBlockedState());
    }
    void finishIO()
    {
        throw ImpossibleException();
    }
private:
    Process *process;
};
class BlockedState: public State
{
public:
    BlockedState(Process *p, string n): State(n)
    {
        process = p;
    }
    ~BlockedState(){}

    void resumedByCpu()
    {
        throw ImpossibleException();
    }
    void timeSlotEnd()
    {
        throw ImpossibleException();
    }
    void needIO()
    {
        throw ImpossibleException();
    }
    void finishIO()
    {
        cout << process->getName() << " is now ready" << endl;
        process->setState(process->getReadyState());
    }
private:
    Process *process;
};
}

#endif

