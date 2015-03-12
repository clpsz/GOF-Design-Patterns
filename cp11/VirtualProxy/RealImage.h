#ifndef REALIMAGE_H
#define REALIMAGE_H

#include "Common.h"
#include "Image.h"


namespace virtualProxy
{

class RealImage: public Image
{
public:
    RealImage(string p)
    {
        imageHandle = loadImage(p);
    }
    ~RealImage()
    {
        // do some clean job
    }

    void draw()
    {
        cout << "I am drawing " << imageHandle->getPath() << endl;
    }
    void refresh()
    {
        cout << "I am refreshing " << imageHandle->getPath() << endl;
    }
    ImageHandle* loadImage(string p)
    {
        cout << "Loading image \"" << p << "\", not an easy job..." << endl;
        return new ImageHandle(p);
    }
private:
    ImageHandle *imageHandle;
};
}

#endif

