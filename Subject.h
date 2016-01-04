/*
 * Subject.h
 *
 *  Created on: 29 Dec 2015
 *      Author: denis
 */

#ifndef SUBJECT_H_
#define SUBJECT_H_

#include <iostream>
#include "Observer.h"

class Subject {
public:
	Subject();
	virtual ~Subject();

private:
	struct linkedList {
		Observer *observer;
		linkedList *next;
	};

	linkedList *list_start;
	linkedList *list_current;
	linkedList *list_prev;
	linkedList *list_end;
	linkedList *list_new;

public:
	virtual void attach(Observer *observer);
	virtual void detach(Observer *observer);
	virtual void notify();
};

#endif /* SUBJECT_H_ */
