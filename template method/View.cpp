/*
* @Author: buyi
* @Date:   2016-05-01 18:58:56
* @Last Modified by:   buyi
* @Last Modified time: 2016-05-01 19:19:08
*/

#include <iostream>
#include "View.h"

using namespace std;

void View::Display () {
	SetFocus();
	DoDisplay();
	ResetFocus();
}


void View::DoDisplay () {
	cout << "parent action" << endl;
}