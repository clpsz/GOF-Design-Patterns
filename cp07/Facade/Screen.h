#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>

namespace facade
{
using std::cout;
using std::endl;

class Screen
{
public:
    Screen(){}
    ~Screen(){}

    void down()
    {
        cout << "Screen is down" << endl;
    }
    void up()
    {
        cout << "Screen is up" << endl;
    }
};
}

#endif


