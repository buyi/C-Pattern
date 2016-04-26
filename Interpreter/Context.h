#ifndef Context_H
#define Context_H
// #include "BooleanExp.h"
// #include "VariableExp.h"
class VariableExp;
#include <map>
using namespace std;
class Context
{
public:
	Context();
	// ~Context();
	bool Lookup (VariableExp*) const;
	void Assign (VariableExp*, bool);
	map<VariableExp*, bool> maps;
	map<VariableExp* ,bool>::iterator it;
	
};
#endif