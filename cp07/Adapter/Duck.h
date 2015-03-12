#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include <string>

namespace adapter
{
using std::string;
using std::cout;
using std::endl;

class Duck
{
public:
    Duck(){}
    ~Duck(){}
    virtual void quack() = 0;
    virtual void fly() = 0;
};

class RedDuck: public Duck
{
public:
    RedDuck(string n = "Red duck"): name(n)
    {
    }
    ~RedDuck(){}

    void quack()
    {
        cout << name << " is quacking" << endl;
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

