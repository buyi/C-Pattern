#ifndef _Observer_H
#define _Observer_H

class Subject;
#include <iostream>
using namespace std;
class Observer
{
public:
	Observer() {
		cout << "Observer init";
	}
	~Observer() {}
	virtual void Update (Subject*) = 0;
	
};
#endif