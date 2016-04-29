#ifndef _DigitalClock_H
#define _DigitalClock_H
#include "ClockTimer.h"
#include "Observer.h"
class DigitalClock : public Observer
{
public:
	DigitalClock(ClockTimer* t);
	~DigitalClock();
	virtual void Update (Subject*);
	private:
		ClockTimer* _subject;
};
#endif