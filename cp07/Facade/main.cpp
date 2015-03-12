#include "HomeTheaterFacade.h" 

using namespace facade;


int main()
{
    Screen *screen = new Screen();
    DvdPlayer *dp = new DvdPlayer();

    HomeTheaterFacade *htf = new HomeTheaterFacade(dp, screen);
    htf->watchMovie();
    htf->endMovie();
    return 0;
}

