#ifndef LIGHT_H
#define LIGHT_H

#include <string>
#include <iostream>

namespace control
{
using std::string;
using std::cout;
using std::endl;

class Light
{
public:
    Light(string n): name(n)
    {}
    ~Light(){}
    void on()
    {
        cout << name << " is on" << endl;
    }
    void off()
    {
        cout << name << " is off" << endl;
    }
private:
    string name;
};
}
#endif

