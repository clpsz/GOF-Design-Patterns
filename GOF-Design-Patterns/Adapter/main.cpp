#include "Target.h"
#include "Adapter.h"
#include "Adaptee.h"


int main()
{
    Adaptee adaptee;
    Target *t = new Adapter(&adaptee);
    t->operate();

    return 0;
}
