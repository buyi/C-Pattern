#ifndef AndExp_H
#define AndExp_H
#include "BooleanExp.h"
// #include "Context.h"
class AndExp : public BooleanExp
{
public:
	AndExp(BooleanExp*, BooleanExp*) ;
	// ~AndExp();

	virtual bool Evaluate (Context*);
	virtual BooleanExp* Replace (const char*, BooleanExp&);
	virtual BooleanExp* Copy() const;
	private:
		BooleanExp* _operand1;
		BooleanExp* _operand2;
};
#endif