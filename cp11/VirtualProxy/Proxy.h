#ifndef PROXY_H
#define PROXY_H

#include "Common.h"
#include "RealImage.h"



namespace virtualProxy
{

class Proxy: public Image
{
public:
    Proxy(string p): path(p), realImage(0)
    {
    }
    ~Proxy()
    {
        // do some clean job
    }

    void draw()
    {
        getImage()->draw();
    }
    void refresh()
    {
        getImage()->refresh();
    }
private:
    RealImage *getImage()
    {
        if (realImage == 0)
        {
            realImage = new RealImage(path);
        }
        return realImage;
    }
    string path;
    RealImage *realImage;
};
}

#endif

