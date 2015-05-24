#include "common.h"
#include "Component.h"

class Composite : public Component
{
public:
    Composite(string n);
    ~Composite();
    void add(Component *com);
    void remove(Component *com);

    void show(int level);

private:
    string name;
    vector<Component *> vec;
};

