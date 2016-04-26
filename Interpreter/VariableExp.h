#ifndef _VariableExp_H
#define _VariableExp_H

#include "BooleanExp.h"
// #include "Context.h"
class VariableExp : public BooleanExp
{
public:
	VariableExp(const char*);
	 void set( char*);
	// ~VariableExp();


	virtual bool Evaluate (Context*);
	virtual BooleanExp* Replace (const char*, BooleanExp&);
	virtual BooleanExp* Copy() const;
private:
	char* _name;
	
};
#endif