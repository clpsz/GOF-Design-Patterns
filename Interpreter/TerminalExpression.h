#ifndef __TERMINAL_EXPRESSION_H
#define __TERMINAL_EXPRESSION_H

#include "AbstractExpression.h"
#include "Context.h"

class TerminalExpression : public AbstractExpression
{
public:
    TerminalExpression(char v);
    ~TerminalExpression();

    void interpret(Context *c);

private:
    char value;
};

#endif

