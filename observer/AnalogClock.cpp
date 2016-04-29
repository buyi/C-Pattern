/*
* @Author: buyi
* @Date:   2016-04-29 22:34:06
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-29 23:01:41
*/

#include <iostream>
#include "AnalogClock.h"
#include "Subject.h"

using namespace std;

	AnalogClock::AnalogClock(ClockTimer* t) : Observer(){
				cout << "AnalogClock init" << endl;
	_subject = t;
		_subject->Attach (this);
	}
	AnalogClock::~AnalogClock() {
		_subject->Detach (this);
	}

	 void AnalogClock::Update (Subject* s) {
	 	if (_subject == s) {
	 		cout << "AnalogClock update";
	 	}
	 }