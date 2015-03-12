#ifndef MENU_H
#define MENU_H

namespace menu
{

class Menu
{
public:
    class UnSupportedOperation{};
    Menu(){}
    virtual ~Menu(){}

    virtual void addMenuItem(Menu *m)
    {
        throw UnSupportedOperation();
    }
    virtual void print(int indent = 0) = 0;
};
}

#endif

