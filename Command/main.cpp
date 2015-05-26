#include "common.h"
#include "Receiver.h"
#include "ConcreteCommand1.h"
#include "ConcreteCommand2.h"


int main()
{
    Receiver *r = new Receiver();
    ConcreteCommand1 *cmd1 = new ConcreteCommand1(r);
    ConcreteCommand2 *cmd2 = new ConcreteCommand2(r);

    cmd1->execute();
    cmd2->execute();

    return 0;
}

