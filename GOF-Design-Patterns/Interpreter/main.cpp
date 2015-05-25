#include "common.h"
#include "TerminalExpression.h"
#include "NonTerminalExpression.h"


int main()
{
    Context *c = new Context;

    AbstractExpression *e1 = new TerminalExpression('a');
    e1->interpret(c);
    AbstractExpression *e2 = new NonTerminalExpression('+');
    e2->interpret(c);

    e1->interpret(c);

    cout << endl;
    return 0;
}

