#ifndef _WindowSystemFactory_H
#define _WindowSystemFactory_H
#include "WindowImp.h"
class WindowSystemFactory
{
public:
	static WindowSystemFactory* Instance();
	WindowImp* makeWindowImp ();
protected:
	WindowSystemFactory();
private:
	static WindowSystemFactory* _instance;	
	
};
#endif