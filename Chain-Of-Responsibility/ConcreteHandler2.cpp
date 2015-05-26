#include "common.h"
#include "ConcreteHandler2.h"

ConcreteHandler2::ConcreteHandler2(Handler *s):
    successor(s)
{
}

ConcreteHandler2::~ConcreteHandler2()
{
}

void ConcreteHandler2::handlerRequest(int req)
{
    if (req >= 10 && req < 20)
    {
        cout << "Handling request " << req << " in ConcreteHandler2" << endl;
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

