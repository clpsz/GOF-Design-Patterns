#ifndef DINER_H
#define DINER_H

#include <iostream>
#include <string>

#include "Menu.h"
#include "MenuItem.h"
#include "Iterator.h"

namespace menu
{
using std::cout;
using std::endl;
using std::string;

class Diner: public Menu
{
public:
    Diner(): menuCount(0)
    {
        MenuItem *m1 = new MenuItem("Meat", 10);
        MenuItem *m2 = new MenuItem("Fish", 20);
        MenuItem *m3 = new MenuItem("Steak", 50);

        addMenuItem(m1);
        addMenuItem(m2);
        addMenuItem(m3);
    }
    ~Diner()
    {
        // need free memory
    }

    void addMenuItem(MenuItem *mi)
    {
        menu[menuCount] = mi;
        menuCount++;
    }
    Iterator *createIterator()
    {
        return new DinerIterator(menu, menuCount);
    }

private:
    MenuItem* menu[10];
    int menuCount;
};
}

#endif

