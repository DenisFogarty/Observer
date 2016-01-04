/*
 * Observer.h
 *
 *  Created on: 29 Dec 2015
 *      Author: denis
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

class Observer {
public:
	Observer();
	virtual ~Observer();

private:

public:
	virtual void update();
};

#endif /* OBSERVER_H_ */
