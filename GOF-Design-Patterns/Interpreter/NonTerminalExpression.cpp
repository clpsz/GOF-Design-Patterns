#include "common.h"
#include "NonTerminalExpression.h"

NonTerminalExpression::NonTerminalExpression(char v) :
    value(v)
{
}

NonTerminalExpression::~NonTerminalExpression()
{
}

void NonTerminalExpression::interpret(Context *c)
{
    switch (value)
    {
    case '+':
        c->setToLower(false);
        c->setToUpper(true);
        break;
    case '-':
        c->setToLower(true);
        c->setToUpper(false);
        break;
    default:
        cout << "Unknown non treminal expression" << endl;
        break;
    }
}


