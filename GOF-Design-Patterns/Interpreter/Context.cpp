#include "Context.h"

Context::Context()
{
    toUpper = false;
    toLower = false;
}

Context::~Context()
{
}

void Context::setToLower(bool v)
{
    toLower = v;
}

void Context::setToUpper(bool v)
{
    toUpper = v;
}
