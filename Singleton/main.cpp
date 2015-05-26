#include "common.h"
#include "Singleton.h"


int main()
{
    Singleton *s1 = Singleton::getInstance();
    Singleton *s2 = Singleton::getInstance();


    cout << (void *)s1 << endl;
    cout << (void *)s2 << endl;
}
