#ifndef __OBSERVER_H__
#define __OBSERVER_H__

namespace weather
{
	
class Observer
{
public:
	virtual void update() = 0;
};
}

#endif
