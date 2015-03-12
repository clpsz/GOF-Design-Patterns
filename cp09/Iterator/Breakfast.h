#ifndef BREAKFAST_H
#define BREAKFAST_H

#include <iostream>
#include <string>
#include <vector>

#include "Menu.h"
#include "MenuItem.h"
#include "Iterator.h"

namespace menu
{
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Breakfast: public Menu
{
public:
    Breakfast()
    {
        MenuItem *m1 = new MenuItem("Egg", 3);
        MenuItem *m2 = new MenuItem("Bread", 5);
        MenuItem *m3 = new MenuItem("Milk", 1);

        addMenuItem(m1);
        addMenuItem(m2);
        addMenuItem(m3);
    }
    ~Breakfast()
    {
        // need free memory
    }

    void addMenuItem(MenuItem *mi)
    {
        menu.push_back(mi);
    }
    Iterator *createIterator()
    {
        return new BreakfastIterator(menu);
    }

private:
    vector<MenuItem *> menu;
};
}

#endif

