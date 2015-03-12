#ifndef IMAGE_H
#define IMAGE_H

#include "Common.h"



namespace virtualProxy
{

class ImageHandle
{
public:
    ImageHandle(string p): path(p)
    {
        path = "\"" + path + "\"";
    }

    string getPath()
    {
        return path;
    }
private:
    string path;
};

class Image
{
public:
    virtual ~Image(){}

    virtual void draw() = 0;
    virtual void refresh() = 0;
};
}

#endif

