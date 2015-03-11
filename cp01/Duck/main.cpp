#include "DuckMallard.h"
#include "DuckRedhead.h"


int main()
{
    duck::Duck *d1 = new duck::DuckMallard();
    duck::Duck *d2 = new duck::DuckRedhead();

    d1->performFly();
    d1->performQuack();

    d2->performFly();
    d2->performQuack();

    return 0;
}

