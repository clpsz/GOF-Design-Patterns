#include "ConcreteFlyweight.h"
#include "FlyweightFactory.h"


int main()
{
    Flyweight *f1 = FlyweightFactory().getFlyweight("apple");
    f1->operation(1);

    Flyweight *f2 = FlyweightFactory().getFlyweight("apple");
    f1->operation(2);

    cout << (void*)f1 << " " << (void*)f2 << endl;

    return 0;
}
