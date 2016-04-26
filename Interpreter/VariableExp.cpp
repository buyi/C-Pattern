/*
* @Author: buyi
* @Date:   2016-04-25 21:18:04
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-26 15:30:25
*/

#include <iostream>
#include "VariableExp.h"
#include <string>

using namespace std;

// int main(){

//     return 0;
// }
//VariableExp.cpp:28:17: error: member access into incomplete type 'Context'
        //return aContext->Lookup(_name);
#include "Context.h"

void VariableExp::set ( char* value) {
	_name = value;
}

VariableExp::VariableExp (const char* name): BooleanExp() {
	_name = strdup (name);
}

bool VariableExp::Evaluate (Context* aContext) {
	return aContext->Lookup(this);
}

BooleanExp* VariableExp::Copy() const {
	return new VariableExp(_name);
}

BooleanExp* VariableExp::Replace (const char* name, BooleanExp& exp) {
	if (strcmp (name, _name) == 0) {
		return exp.Copy();
	} else {
		return new VariableExp (_name);
	}
}