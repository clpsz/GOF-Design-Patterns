#ifndef __NONNonTerminal_EXPRESSION_H
#define __NONNonTerminal_EXPRESSION_H

#include "AbstractExpression.h"
#include "Context.h"

class NonTerminalExpression : public AbstractExpression
{
public:
    NonTerminalExpression(char v);
    ~NonTerminalExpression();

    void interpret(Context *c);

private:
    char value;
};

#endif


