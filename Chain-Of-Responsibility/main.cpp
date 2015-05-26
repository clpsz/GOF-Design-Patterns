#include "ConcreteHandler1.h"
#include "ConcreteHandler2.h"


int main()
{
    Handler *h2 = new ConcreteHandler2(0);
    Handler *h1 = new ConcreteHandler1(h2);


    h1->handlerRequest(1);
    h1->handlerRequest(11);
    h1->handlerRequest(111);
    return 0;
}

