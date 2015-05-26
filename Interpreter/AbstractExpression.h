#ifndef __ABSTRACT_EXPRESSION_H
#define __ABSTRACT_EXPRESSION_H

#include "Context.h"

class AbstractExpression
{
public:
    AbstractExpression();
    ~AbstractExpression();

    virtual void interpret(Context *c) = 0;
};

#endif

