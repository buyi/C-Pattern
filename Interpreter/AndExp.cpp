/*
* @Author: buyi
* @Date:   2016-04-25 21:23:10
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-26 15:33:51
*/

#include <iostream>
#include "AndExp.h"

using namespace std;

AndExp::AndExp (BooleanExp* op1, BooleanExp* op2): _operand1(op1), _operand2(op2)
 {
	// _operand1 = op1;
	// _operand2 = op2;
}

bool AndExp::Evaluate (Context* aContext) {
	bool op1 = _operand1->Evaluate(aContext);
	cout << "op1  is" << op1;
	bool op2 = _operand2->Evaluate(aContext);
	cout << "op2  is" << op2;
	return op1 && op2;
}

BooleanExp* AndExp::Copy () const {
	return new AndExp (_operand1->Copy(), _operand2->Copy());
}

BooleanExp* AndExp::Replace (const char* name, BooleanExp& exp) {
	return new AndExp (_operand1->Replace(name, exp), _operand2->Replace(name, exp));
}