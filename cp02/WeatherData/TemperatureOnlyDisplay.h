#ifndef __TEMPERATUREONLYDISPLAY_H__
#define __TEMPERATUREONLYDISPLAY_H__

#include "WeatherData.h"
#include "Observer.h"
#include "DisplayElement.h"

namespace weather
{
using std::cout;
using std::endl;

class TemperatureOnlyDisplay: public Observer, public DisplayElement
{
public:
	TemperatureOnlyDisplay(WeatherData *wd)
	{
		weatherData = wd;
		wd->registerObserver(this);
	}
	
	void update()
	{
		temp = weatherData->getTemp();
		display();
	}
	
	void display()
	{
		cout << "TemperatureOnlyDisplay displaying:" << endl;
		cout << "Temperuture: " << temp << endl;
		cout << endl;
	}
private:
	WeatherData *weatherData;
	int temp;
	int humidity;
	int pressure;
};
}

#endif
