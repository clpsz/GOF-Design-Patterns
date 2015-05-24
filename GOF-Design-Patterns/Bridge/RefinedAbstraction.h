#include "Implementor.h"
#include "Abstraction.h"

class RefinedAbstraction : public Abstraction
{
public:
    RefinedAbstraction();
    ~RefinedAbstraction();

    void operate();
    void setImplementor(Implementor *imp);

private:
    Implementor *implementor;
};
