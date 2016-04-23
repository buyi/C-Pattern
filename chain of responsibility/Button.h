#include "Widget.h"
class Button : public Widget
{
public:
	// Button();
	// ~Button();
	Button(Widget* d, Topic t = NO_HELP_TOPIC);
	virtual void HandleHelp ();
	
};