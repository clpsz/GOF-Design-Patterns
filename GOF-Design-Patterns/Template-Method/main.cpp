#include "ConcreteClass.h"


int main()
{
    AbstractClass *ac = new ConcreteClass();
    ac->templateMethod();

    return 0;
}

