#ifndef COMMAND_H
#define COMMAND_H

#include "Light.h"
#include "Stereo.h"

namespace control
{

class Command
{
public:
    Command(){}
    ~Command(){}
    virtual void execute() = 0;
};



class LightOnCommand: public Command
{
public:
    LightOnCommand(Light *l): light(l)
    {
    }
    ~LightOnCommand(){}

    void execute()
    {
        light->on();
    }
    void undo()
    {
        light->off();
    }
private:
    Light *light;
};

class LightOffCommand: public Command
{
public:
    LightOffCommand(Light *l): light(l)
    {
    }
    ~LightOffCommand(){}

    void execute()
    {
        light->off();
    }
    void undo()
    {
        light->on();
    }
private:
    Light *light;
};

class StereoOnCommand: public Command
{
public:
    StereoOnCommand(Stereo *s): stereo(s)
    {
    }
    ~StereoOnCommand(){}

    void execute()
    {
        stereo->on();
    }
    void undo()
    {
        stereo->off();
    }
private:
    Stereo *stereo;
};

class StereoOffCommand: public Command
{
public:
    StereoOffCommand(Stereo *s): stereo(s)
    {
    }
    ~StereoOffCommand(){}

    void execute()
    {
        stereo->off();
    }
    void undo()
    {
        stereo->on();
    }
private:
    Stereo *stereo;
};


class MacroCommand: public Command
{
public:
    MacroCommand(Light *l, Stereo *s): light(l), stereo(s)
    {
    }
    ~MacroCommand(){}

    void execute()
    {
        light->on();
        stereo->on();
    }
    void undo()
    {
        light->off();
        stereo->off();
    }
private:
    Light *light;
    Stereo *stereo;
};
}

#endif

