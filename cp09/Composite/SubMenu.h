#ifndef SUBMENU_H
#define SUBMENU_H

#include <iostream>
#include <string>
#include <vector>

#include "Menu.h"

namespace menu
{
using std::string;
using std::cout;
using std::endl;
using std::vector;

// not a good class name, should be composite menu
class SubMenu: public Menu
{
public:
    SubMenu(string n): name(n)
    {}
    ~SubMenu()
    {
        // should free vector memory
    }

    void addMenuItem(Menu *m)
    {
        menuVector.push_back(m);
    }
    void print(int indent)
    {
        for (int i = 0; i < indent; i++)
        {
            cout << "    ";
        }
        cout << name << "(Sub):" << endl;
        vector<Menu *>::const_iterator it = menuVector.begin();
        while(it != menuVector.end())
        {
            (*it)->print(indent + 1);
            it++;
        }
    }


private:
    vector<Menu *> menuVector;
    string name;
};
}

#endif

