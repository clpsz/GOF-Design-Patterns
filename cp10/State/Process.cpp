#include <string>

#include <iostream>
#include "Process.h"
#include "ConcreteStates.h"


namespace state
{
using std::string;
using std::cout;
using std::endl;

Process::Process(string n): name(n)
{
    cout << "Creating: " << name << endl << endl;
    readyState = new ReadyState(this, "Ready");
    runningState = new RunningState(this, "Running");
    blockedState = new BlockedState(this, "Blocked");

    curState = readyState;
}
}
