/*
 * WeatherData.cpp
 *
 *  Created on: 29 Dec 2015
 *      Author: denis
 */

#include "WeatherData.h"

WeatherData::WeatherData() {
	temperature = 0.0;
	humidity = 0.0;
	barometric = 0.0;
}

float WeatherData::getTemp() {
	return temperature;
}

float WeatherData::getHumidity() {
	return humidity;
}

float WeatherData::getBarometric() {
	return barometric;

}

weatherStat* WeatherData::getStat() {
	return &statistics;
}

weatherFore* WeatherData::getFore() {
	return &forecast;
}

void WeatherData::setTemp(float temp) {
	temperature = temp;
	calcStatistics();
	calcForecast();
	notify();
}

void WeatherData::setHumidity(float humidity) {
	this->humidity = humidity;
	calcStatistics();
	calcForecast();
	notify();
}

void WeatherData::setBarometric(float barometric) {
	this->barometric = barometric;
	calcStatistics();
	calcForecast();
	notify();
}

void WeatherData::calcStatistics() {
	statistics.rainfall.push_back(humidity * barometric);
	statistics.temperature.push_back(temperature);
}

void WeatherData::calcForecast() {
	forecast.rainToday = humidity * barometric;
	forecast.rainTomorrow = humidity * barometric + 999999999;
	forecast.tempToday = temperature;
	forecast.tempTomorrow = temperature + 240;
}

WeatherData::~WeatherData() {
	// TODO Auto-generated destructor stub
}
