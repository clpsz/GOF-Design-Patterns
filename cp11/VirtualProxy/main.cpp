#include "Common.h"
#include "RealImage.h"
#include "Proxy.h"

using namespace virtualProxy;


int main()
{
    Image *ri = new Proxy("/tmp/a.jpg");

    // if not using this object, never create the RealImage object
    //ri->draw();
    //ri->refresh();

    delete ri;

    return 0;
}

