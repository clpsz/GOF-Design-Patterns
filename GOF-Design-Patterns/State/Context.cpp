#include "Context.h"

Context::Context()
{
    state = 0;
}

Context::~Context()
{
}

void Context::setState(State *s)
{
    state = s;
}

void Context::action1()
{
    state->action1(this);
}

void Context::action2()
{
    state->action2(this);
}

void Context::showState()
{
    state->showState();
}
