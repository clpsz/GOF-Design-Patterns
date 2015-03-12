#ifndef STATE_H
#define STATE_H

#include <string>

namespace state
{
using std::string;

class State
{
public:
    State(string n): name(n)
    {}
    virtual ~State(){}

    string getName()
    {
        return name;
    }

    virtual void resumedByCpu() = 0;
    virtual void timeSlotEnd() = 0;
    virtual void needIO() = 0;
    virtual void finishIO() = 0;
private:
    string name;
};
}
#endif

