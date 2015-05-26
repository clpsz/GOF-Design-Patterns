#include "common.h"
#include "Component.h"
#include "Leaf.h"
#include "Composite.h"


int main()
{
    Component *root = new Composite("C:\\");
    Component *comp1 = new Composite("Program Files");
    Component *comp2 = new Composite("Intel");
    Component *comp3 = new Composite("Windows");

    comp1->add(new Leaf("iTunes"));
    comp1->add(new Leaf("Oracle"));
    comp1->add(new Leaf("Tencent"));

    comp2->add(new Leaf("ExtremeGraphics"));
    comp2->add(new Leaf("Logs"));

    comp3->add(new Leaf("bootstat.dat"));
    comp3->add(new Leaf("gffx.dll"));
    comp3->add(new Leaf("mib.bin"));

    root->add(comp1);
    root->add(comp2);
    root->add(comp3);
    root->show(0);

    cout << endl;
    return 0;
}
