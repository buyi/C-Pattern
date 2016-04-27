#ifndef _DialogDirector_h
#define _DialogDirector_h
// #include "Widget.h"
class Widget;
class DialogDirector
{
public:
	DialogDirector();
	// ~DialogDirector();
	virtual void CreateWidgets () =0;
	virtual void ShowDialog ();
	virtual void WidgetChanged (Widget*) =0;
	
};
#endif