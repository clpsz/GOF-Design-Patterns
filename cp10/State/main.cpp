#include <unistd.h>
#include <stdlib.h>

#include "ConcreteStates.h"
#include "Process.h"

using namespace state;

typedef enum
{
    RESUM = 0,
    TIMEOUT,
    NEEDIO,
    FINISHIO,
} OP;

int main()
{
    Process *p = new Process("samba");
    while (1)
    {
        try
        {
            // generate rand from 0-3
            int op = rand() & 0x3;
            if (op == RESUM)
                p->resumedByCpu();
            else if (op == TIMEOUT)
                p->timeSlotEnd();
            else if (op == NEEDIO)
                p->needIO();
            else if (op == FINISHIO)
                p->finishIO();

        }
        catch (ImpossibleException ie)
        {
            cout << "Not supported in current state" << endl;
        }
        sleep(1);
    }

    delete p;

    return 0;
}

