#ifndef MENUITEM_H
#define MENUITEM_H

#include <iostream>
#include <string>

#include "Menu.h"

namespace menu
{
using std::string;
using std::cout;
using std::endl;

class MenuItem: public Menu
{
public:
    MenuItem(string n, int p): name(n), price(p)
    {}
    ~MenuItem(){}
    void print(int indent)
    {
        for (int i = 0; i < indent; i++)
        {
            cout << "    ";
        }
        cout << name << ":" << price << endl;
    }

private:
    string name;
    int price;
};
}

#endif

