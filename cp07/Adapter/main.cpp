#include "Duck.h"
#include "Turkey.h"
#include "TurkeyAdapter.h"

using namespace adapter;

int main()
{
    Turkey *wt = new WildTurkey("James");
    TurkeyAdapter *ta = new TurkeyAdapter(wt);

    ta->fly();
    ta->quack();

    delete ta;
    delete wt;

    return 0;
}

