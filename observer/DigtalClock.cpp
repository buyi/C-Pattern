/*
* @Author: buyi
* @Date:   2016-04-29 22:30:50
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-29 22:33:03
*/

#include <iostream>
#include "DigitalClock.h"

using namespace std;

	DigitalClock::DigitalClock(ClockTimer* t) {
		_subject = t;
		_subject->Attach (this);
	}
	DigitalClock::~DigitalClock() {
		_subject->Detach (this);
	}

	 void DigitalClock::Update (Subject* s) {
	 	if (_subject == s) {
	 		cout << "DigitalClock update";
	 	}
	 }