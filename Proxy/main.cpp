#include "RealSubject.h"
#include "Proxy.h"


int main()
{
    Subject *sub = new RealSubject;
    Subject *proxy = new Proxy(sub);

    proxy->operation();
    
    return 0;
}
