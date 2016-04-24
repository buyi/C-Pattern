/*
* @Author: buyi
* @Date:   2016-04-24 23:37:30
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-24 23:42:54
*/

#include <iostream>
#include "MyClass.h"

using namespace std;

MyClass::MyClass() {
	cout << "MyClass init";
}
	// ~MyClass();

void MyClass::Action () {
	cout << "MyClass Action";
}