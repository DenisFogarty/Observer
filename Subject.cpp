/*
 * Subject.cpp
 *
 *  Created on: 29 Dec 2015
 *      Author: denis
 */

#include "Subject.h"

Subject::Subject() {
	list_start = NULL;
	list_end = NULL;
	list_current = NULL;
	list_prev = NULL;
	list_new = NULL;
}

void Subject::attach(Observer *observer) {
	if(list_start == NULL) {
		list_start = new linkedList;
		list_end = list_start;
		list_start->observer = observer;
		list_start->next = NULL;
	}
	else {
		list_new = new linkedList;
		list_end->next = list_new;
		list_end = list_new;
		list_end->observer = observer;
		list_end->next = NULL;
	}
}

void Subject::detach(Observer *observer) {
	list_current = list_start;

	while(list_current->next != NULL) {
		if(observer == list_current->observer) {
			if(list_start == list_current) {
				list_start = list_start->next;
			}

			if(list_end == list_current) {
				list_end = list_prev;
			}

			if(list_prev != NULL) {
				list_prev->next = list_current->next;
			}

			delete list_current;
		}
		else {
			list_prev = list_current;
			list_current = list_current->next;
		}
	}

	list_prev = NULL;
	list_current = NULL;
}

void Subject::notify() {
	list_current = list_start;
	while(list_current != NULL) {
		list_current->observer->update();
		list_current = list_current->next;
	}
}

Subject::~Subject() {
	list_current = list_start;
	while(list_current != NULL) {
		delete list_current;
		list_current = list_current->next;
	}
}

