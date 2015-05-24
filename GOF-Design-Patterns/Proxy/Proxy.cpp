#include "common.h"
#include "Proxy.h"

Proxy::Proxy(Subject *sub):
    subject(sub)
{
}

Proxy::~Proxy()
{
}

void Proxy::operation()
{
    cout << "Executing operation in Proxy" << endl;
    subject->operation();
}

