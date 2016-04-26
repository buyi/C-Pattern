#ifndef BooleanExp_H
#define BooleanExp_H

// #include "Context.h"
class Context;

class BooleanExp
{
public:
	BooleanExp();
	// ~BooleanExp();
	virtual bool Evaluate (Context*) = 0;
	virtual BooleanExp* Replace (const char*, BooleanExp&) = 0;
	virtual BooleanExp* Copy() const = 0;
	
};
#endif