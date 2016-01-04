/*
 * StatisticDisplay.cpp
 *
 *  Created on: 3 Jan 2016
 *      Author: denis
 */

#include "StatisticDisplay.h"

StatisticDisplay::StatisticDisplay(WeatherData *weatherData) {
	statistics = weatherData->getStat();
	this->weatherData = weatherData;
}

void StatisticDisplay::display() {
	std::cout << "Rainfall: ";
	for(int i = 0; i < statistics->rainfall.size(); i++) {
		std::cout << statistics->rainfall.at(i) << " - ";
	}
	std::cout << std::endl;

	std::cout << "Temperature: ";
	for(int i = 0; i < statistics->temperature.size(); i++) {
		std::cout << statistics->temperature.at(i) << " - ";
	}
	std::cout << std::endl;
}

void StatisticDisplay::update() {
	display();
}

StatisticDisplay::~StatisticDisplay() {
	// TODO Auto-generated destructor stub
}
