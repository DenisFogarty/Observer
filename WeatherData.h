/*
 * WeatherData.h
 *
 *  Created on: 29 Dec 2015
 *      Author: denis
 */

#ifndef WEATHERDATA_H_
#define WEATHERDATA_H_

#include "Subject.h"
#include "Structs.h"

class WeatherData : public Subject {
public:
	WeatherData();
	virtual ~WeatherData();

private:
	float temperature;
	float humidity;
	float barometric;
	weatherStat statistics;
	weatherFore forecast;

public:
	float getTemp();
	float getHumidity();
	float getBarometric();
	void setTemp(float temp);
	void setHumidity(float humidity);
	void setBarometric(float barometric);
	void calcStatistics();
	void calcForecast();
	weatherStat* getStat();
	weatherFore* getFore();
};

#endif /* WEATHERDATA_H_ */
