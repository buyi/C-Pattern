#ifndef _Window_H
#define _Window_H
#include "WindowImp.h"
class Window
{
public:
	Window();
	// ~Window();
	virtual void DrawContens ();
	// WindowImp* getWindowImp();
	WindowImp* createWindowImpl ();

private:
	static WindowImp* _imp;
	
};
#endif