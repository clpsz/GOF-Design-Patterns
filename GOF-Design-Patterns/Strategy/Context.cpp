#include "Context.h"

Context::Context()
{
    strategy = 0;
}

Context::~Context()
{
}

void Context::contextInterface()
{
    strategy->algorithmInterface();
}

void Context::setStrategy(Strategy *s)
{
    strategy = s;
}

