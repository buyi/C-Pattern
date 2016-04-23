#ifndef _Wight_H
#define _Wight_H

#include "HelpHandler.h"
class Widget : public HelpHandler
{
public:
	Widget(Widget* parent, Topic t = NO_HELP_TOPIC);
	// ~Widget();
private:
	Widget* _parent;
	
};
#endif