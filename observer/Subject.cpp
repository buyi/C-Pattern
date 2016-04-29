/*
* @Author: buyi
* @Date:   2016-04-29 22:22:46
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-29 23:03:12
*/

#include <iostream>
#include "Subject.h"
#include "Observer.h"

using namespace std;

void Subject::Attach (Observer* o) {
	cout << "Subject Attach";
	_obersers->push_back(o);

}

void Subject::Detach (Observer* o) {
	_obersers->remove(o);
}

void Subject::Notify () {
	list<Observer*>::iterator i;
	for (i=_obersers->begin(); i!=_obersers->end(); ++i) 
　{

// 	Subject.cpp:26:11: error: member access into incomplete type 'Observer'
// 　　(*i)->Update(this);  添加.h
　　(*i)->Update(this);
　} 

}

