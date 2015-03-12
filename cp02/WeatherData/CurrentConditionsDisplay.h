#ifndef __CURRENTCONDITIONSDISPLAY_H__
#define __CURRENTCONDITIONSDISPLAY_H__

#include "WeatherData.h"
#include "Observer.h"
#include "DisplayElement.h"

namespace weather
{
using std::cout;
using std::endl;

class CurrentConditionsDisplay: public Observer, public DisplayElement
{
public:
	CurrentConditionsDisplay(WeatherData *wd)
	{
		weatherData = wd;
		wd->registerObserver(this);
	}
	
	void update()
	{
		temp = weatherData->getTemp();
		humidity = weatherData->getHumidity();
		pressure = weatherData->getPressure();
		display();
	}
	
	void display()
	{
		cout << "CurrentConditionsDisplay displaying:" << endl;
		cout << "Temperuture: " << temp << endl;
		cout << "Humidity: " << humidity << endl;
		cout << "Pressure: " << pressure << endl;
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
