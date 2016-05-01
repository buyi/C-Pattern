#include "View.h"
class MyView : public View
{
public:
	MyView() : View () {}
	// ~MyView();
	// virtual void DoDisplay();
	void DoDisplay();
	void Display() {
		View::Display();
	}
	
};