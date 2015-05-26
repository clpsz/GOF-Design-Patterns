#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include "ConcreteStrategyC.h"


int main()
{
    Context *c = new Context();
    Strategy *sa = new ConcreteStrategyA();
    Strategy *sb = new ConcreteStrategyB();
    Strategy *sc = new ConcreteStrategyC();
    c->setStrategy(sa);
    c->contextInterface();
    c->setStrategy(sb);
    c->contextInterface();
    c->setStrategy(sc);
    c->contextInterface();

    
    return 0;
}

