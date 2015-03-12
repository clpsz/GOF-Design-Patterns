#ifndef MENUITEM_H
#define MENUITEM_H

#include <iostream>
#include <string>

namespace menu
{
using std::cout;
using std::endl;
using std::string;

class MenuItem
{
public:
    MenuItem(string n, int p): name(n), price(p)
    {
    }
    ~MenuItem(){}

    string getName()
    {
        return name;
    }
    int getPrice()
    {
        return price;
    }
    void print()
    {
        cout << getName() << ": " << getPrice() << endl;
    }

private:
    string name;
    int price;
};
}

#endif

