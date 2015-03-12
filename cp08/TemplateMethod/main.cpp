#include "Tea.h"
#include "Coffee.h"

using namespace caffeine;

int main()
{
    CaffeineBeverage *cb = new Coffee();

    cb->prepareRecipe();
    cout << endl;
    delete cb;
    cb = new Tea();
    cb->prepareRecipe();

    delete cb;

    return 0;
}

