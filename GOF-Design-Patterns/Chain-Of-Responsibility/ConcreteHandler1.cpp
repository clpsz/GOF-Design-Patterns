#include "common.h"
#include "ConcreteHandler1.h"

ConcreteHandler1::ConcreteHandler1(Handler *s):
    successor(s)
{
}

ConcreteHandler1::~ConcreteHandler1()
{
}

void ConcreteHandler1::handlerRequest(int req)
{
    if (req >= 0 && req < 10)
    {
        cout << "Handling request " << req << " in ConcreteHandler1" << endl;
    }
    else if (successor)
    {
        successor->handlerRequest(req);
    }
    else
    {
        cout << "No successor handler to process this request" << endl;
    }
}
