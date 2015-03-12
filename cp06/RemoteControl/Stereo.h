#ifndef STEREO_H
#define STEREO_H

#include <string>
#include <iostream>

namespace control
{
using std::string;
using std::cout;
using std::endl;

class Stereo
{
public:
    Stereo(string n): name(n)
    {}
    ~Stereo(){}
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

