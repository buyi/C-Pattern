#ifndef _Widget_H
#define _Widget_H
#include "DialogDirector.h"
class Widget
{
public:
	Widget(DialogDirector*);
	virtual void Changed ();
	// ~Widget();
private:
	DialogDirector* _director;
	
};
#endif