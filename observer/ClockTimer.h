#ifndef _ClockTimer_H
#define _ClockTimer_H
#include "Subject.h"
#include <iostream>
class ClockTimer :public Subject
{
public:
	ClockTimer() : Subject() {
		cout << "ClockTimer init";
	};
	// ~ClockTimer();

	void Tick();
	
};
#endif