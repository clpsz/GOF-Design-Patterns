#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include "Observer.h"

namespace weather
{

class Subject
{
public:
	virtual void registerObserver(Observer *ob) = 0;
	virtual void removeObserver(Observer *ob) = 0;
	virtual void notifyObservers() = 0;
};
}

#endif
