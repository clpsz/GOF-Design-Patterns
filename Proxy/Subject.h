#ifndef __SUBJECT_H
#define __SUBJECT_H

class Subject
{
public:
    Subject();
    ~Subject();

    virtual void operation() = 0;
};

#endif

