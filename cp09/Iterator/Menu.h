#ifndef MENU_H
#define MENU_H

#include "Iterator.h"

namespace menu
{

class Menu
{
public:
    Menu(){}
    ~Menu(){}
    virtual Iterator* createIterator() = 0;
};
}

#endif

