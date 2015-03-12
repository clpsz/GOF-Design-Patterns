#include <cstdio>

#include "Singleton.h"

using namespace single;
using std::printf;

int main()
{
    Singleton *p1 = Singleton::getInstance();
    Singleton *p2 = Singleton::getInstance();

    printf("address of p1: %p\naddress of p2: %p\n", p1, p2);    
    return 0;
}

