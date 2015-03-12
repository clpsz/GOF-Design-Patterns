#ifndef DVD_PLAYER_H
#define DVD_PLAYER_H

#include <iostream>

namespace facade
{
using std::cout;
using std::endl;

class DvdPlayer
{
public:
    DvdPlayer(){}
    ~DvdPlayer(){}

    void on()
    {
        cout << "Dvd player is on" << endl;
    }
    void off()
    {
        cout << "Dvd player is off" << endl;
    }
};
}

#endif

