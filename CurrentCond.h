/*
 * CurrentCond.h
 *
 *  Created on: 1 Jan 2016
 *      Author: denis
 */

#ifndef CURRENTCOND_H_
#define CURRENTCOND_H_

#include <iostream>
#include "WeatherData.h"
#include "Observer.h"


class CurrentCond : public Observer {
public:
	CurrentCond(WeatherData *weatherData);
	virtual ~CurrentCond();

private:
	float temperature;
	float humidity;
	float barometric;
	WeatherData *weatherData;

public:
	void display();
	void update();
};

#endif /* CURRENTCOND_H_ */
