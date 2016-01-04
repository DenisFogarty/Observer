/*
 * Structs.h
 *
 *  Created on: 1 Jan 2016
 *      Author: denis
 */

#ifndef STRUCTS_H_
#define STRUCTS_H_

#include <vector>

struct weatherStat {
	std::vector <float> temperature;
	std::vector <float> rainfall;
};

struct weatherFore {
	float tempToday;
	float tempTomorrow;
	float rainToday;
	float rainTomorrow;
};

#endif /* STRUCTS_H_ */
