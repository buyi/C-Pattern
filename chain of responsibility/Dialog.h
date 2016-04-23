#include "Widget.h"
#include "HelpHandler.h"
class Dialog : public Widget
{
public:
	// Button();
	// ~Button();
	Dialog(HelpHandler* h, Topic t = NO_HELP_TOPIC);
	virtual void HandleHelp ();
	
};