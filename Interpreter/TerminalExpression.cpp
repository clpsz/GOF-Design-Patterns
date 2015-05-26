#include "common.h"
#include "TerminalExpression.h"

TerminalExpression::TerminalExpression(char v) :
    value(v)
{
}

TerminalExpression::~TerminalExpression()
{
}

void TerminalExpression::interpret(Context *c)
{
    if (c->getToLower())
    {
        cout << (char)tolower(value);
    }
    else if (c->getToUpper())
    {
        cout << (char)toupper(value);
    }
    else
    {
        cout << value;
    }
}

