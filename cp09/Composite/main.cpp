#include "MenuItem.h"
#include "SubMenu.h"

using namespace menu;

int main()
{
    Menu *m = new SubMenu("Diner");

    m->addMenuItem(new MenuItem("Meat", 12));
    m->addMenuItem(new MenuItem("Fish", 10));
    m->addMenuItem(new MenuItem("Steak", 9));

    Menu *mm = new SubMenu("Desert");
    mm->addMenuItem(new MenuItem("Icecream", 9));
    mm->addMenuItem(new MenuItem("Cookie", 3));

    m->addMenuItem(mm);

    m->print();

    delete m;

    return 0;
}

