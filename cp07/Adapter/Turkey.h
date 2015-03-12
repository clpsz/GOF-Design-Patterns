#ifndef TURKEY_H
#define TURKEY_H

#include <iostream>
#include <string>

namespace adapter
{
using std::string;
using std::cout;
using std::endl;

class Turkey
{
public:
    Turkey(){}
    ~Turkey(){}
    virtual void gobble() = 0;
    virtual void fly() = 0;
};

class WildTurkey: public Turkey
{
public:
    WildTurkey(string n): name(n)
    {
    }
    ~WildTurkey(){}

    void gobble()
    {
        cout << name << " is goobling" << endl;
    }
    void fly()
    {
        cout << name << " is flying" << endl;
    }
private:
    string name;
};
}

#endif

