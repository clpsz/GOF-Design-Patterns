#ifndef HOME_THEATER_FACADE_H
#define HOME_THEATER_FACADE_H 

#include "DvdPlayer.h"
#include "Screen.h"

namespace facade
{

class HomeTheaterFacade
{
public:
    HomeTheaterFacade(DvdPlayer *dp, Screen *s): dvdPlayer(dp), screen(s)
    {}
    ~HomeTheaterFacade(){}

    void watchMovie()
    {
        screen->down();
        dvdPlayer->on();
    }
    void endMovie()
    {
        dvdPlayer->off();
        screen->up();
    }

private:
    DvdPlayer *dvdPlayer;
    Screen *screen;
};
}

#endif

