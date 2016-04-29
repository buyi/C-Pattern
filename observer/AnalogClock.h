#ifndef _AnalogClock_H
#define _AnalogClock_H

#include "ClockTimer.h"
#include "Observer.h"

class AnalogClock : public Observer
{
public:
	AnalogClock(ClockTimer*);
	~AnalogClock();
	virtual void Update (Subject*);
private:
		ClockTimer* _subject;
	
};
#endif