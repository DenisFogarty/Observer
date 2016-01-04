/*
 * CurrentCond.cpp
 *
 *  Created on: 1 Jan 2016
 *      Author: denis
 */

#include "CurrentCond.h"

CurrentCond::CurrentCond(WeatherData *weatherData) {
	temperature = 0.0;
	humidity = 0.0;
	barometric = 0.0;
	this->weatherData = weatherData;
}

void CurrentCond::display() {
	std::cout << "Current temperature: " << temperature << std::endl;
	std::cout << "Current humidity: " << humidity << std::endl;
	std::cout << "Current barometric pressure: " << barometric << std::endl;
}

void CurrentCond::update() {
	temperature = weatherData->getTemp();
	humidity = weatherData->getHumidity();
	barometric = weatherData->getBarometric();
	display();
}

CurrentCond::~CurrentCond() {
	// TODO Auto-generated destructor stub
}
