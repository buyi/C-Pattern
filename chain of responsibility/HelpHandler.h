
#ifndef HelpHandler_H;
#define HelpHandler_H;
typedef int Topic;
const Topic NO_HELP_TOPIC = -1;

class HelpHandler
{
public:
	HelpHandler(HelpHandler* =0, Topic = NO_HELP_TOPIC);
	virtual bool HasHelp();
	virtual void HandleHelp ();
	virtual void setHandler (HelpHandler*, Topic);
	// ~HelpHandler();
private:
	HelpHandler* _successor;
	Topic _topic;
	
};
#endif