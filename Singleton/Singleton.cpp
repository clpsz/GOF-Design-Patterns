#include "Singleton.h"

Singleton *Singleton::instance = 0;


Singleton::Singleton()
{
}

Singleton::~Singleton()
{
}

Singleton *Singleton::getInstance()
{
    if (!instance)
    {
        instance = new Singleton();
    }
 
    return instance;
}

