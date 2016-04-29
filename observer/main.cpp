/*
* @Author: buyi
* @Date:   2016-04-29 22:34:48
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-29 23:04:48
*/

#include <iostream>
#include "ClockTimer.h"
#include "AnalogClock.h"
#include "DigitalClock.h"

using namespace std;

int main(){
	ClockTimer* timer = new ClockTimer;
	cout << "timer is ok" << endl;
	AnalogClock* analog = new AnalogClock (timer);
		cout << "analog is ok" << endl;
	DigitalClock* digital = new DigitalClock(timer);

	timer->Notify();
    return 0;
}