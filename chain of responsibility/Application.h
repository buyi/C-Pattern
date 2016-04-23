#include "HelpHandler.h"

class Application :public HelpHandler
{
public:
	Application(Topic t ) : HelpHandler (0, t) {}
	// ~Application();
	virtual void HandleHelp ();
	
};