/*
* @Author: buyi
* @Date:   2016-04-25 21:27:57
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-26 15:35:11
*/

#include <iostream>
#include "BooleanExp.h";
#include "VariableExp.h";
#include "AndExp.h";
#include "Context.h";

using namespace std;

int main(){
	BooleanExp* expression;
	cout << "expression init successed" << endl;
	Context* context = new Context;
	cout << "context init successed" << endl;
						 
	VariableExp* x = new VariableExp("x");
	VariableExp* y = new VariableExp ("y");
	cout << "VariableExp x y successed" << endl;

	expression = new AndExp(x, y);
	cout << "expression init successed" << endl;

	context->Assign(x, true);
	context->Assign(y, true);
	cout << "context assign successed" << endl;


	bool result = expression->Evaluate(context);
	cout << "expression Evaluate successed$$$$" << result << endl;

    return 0;
}