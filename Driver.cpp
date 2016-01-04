/*
 * Driver.cpp
 *
 *  Created on: 29 Dec 2015
 *      Author: denis
 */

#include "WeatherData.h"
#include "CurrentCond.h"
#include "StatisticDisplay.h"

int main() {
	WeatherData weather_data;
	CurrentCond *current_cond;
	StatisticDisplay *statistics;

	current_cond = new CurrentCond(&weather_data);
	weather_data.attach(current_cond);

	statistics = new StatisticDisplay(&weather_data);
	weather_data.attach(statistics);

	weather_data.setTemp(5.98);
	std::cout << std::endl;
	weather_data.setTemp(123251245);
	std::cout << std::endl;
	weather_data.setHumidity(543);
	std::cout << std::endl;
	weather_data.setBarometric(86);
	std::cout << std::endl;

	weather_data.detach(current_cond);

	weather_data.setHumidity(27);
	std::cout << std::endl;
	weather_data.setBarometric(4554);
	std::cout << std::endl;

	delete current_cond;
	delete statistics;

	return 0;
}
