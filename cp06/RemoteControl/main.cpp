#include "Command.h"

using namespace control;

int main()
{
    Light *light = new Light("Simple light");
    Stereo *stereo = new Stereo("Cool stereo");

    LightOnCommand *loc = new LightOnCommand(light);
    LightOffCommand *lofc = new LightOffCommand(light);
    StereoOnCommand *soc = new StereoOnCommand(stereo);
    StereoOffCommand *sofc = new StereoOffCommand(stereo);
    MacroCommand *mc = new MacroCommand(light, stereo);


    loc->execute();
    lofc->execute();
    soc->execute();
    sofc->execute();
    sofc->undo();

    mc->execute();

    delete mc;
    delete sofc;
    delete soc;
    delete lofc;
    delete loc;
    delete stereo;
    delete light;
    return 0;
}

