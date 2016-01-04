/*
 * StatisticDisplay.h
 *
 *  Created on: 3 Jan 2016
 *      Author: denis
 */

#ifndef STATISTICDISPLAY_H_
#define STATISTICDISPLAY_H_

#include <iostream>
#include "WeatherData.h"
#include "Observer.h"
#include "Structs.h"


class StatisticDisplay : public Observer {
public:
	StatisticDisplay(WeatherData *weatherData);
	virtual ~StatisticDisplay();

private:
	WeatherData *weatherData;
	weatherStat *statistics;

public:
	void display();
	void update();
};

#endif /* STATISTICDISPLAY_H_ */
