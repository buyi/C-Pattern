#ifndef _Command_H
#define _Command_H
class Command
{
public:
	Command();
	// ~Command();
	virtual void Execute() = 0;
	
};
#endif