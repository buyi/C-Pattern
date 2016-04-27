/*
* @Author: buyi
* @Date:   2016-04-27 22:03:50
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-27 22:05:20
*/

#include <iostream>
#include "ListBox.h"

using namespace std;

ListBox::ListBox (DialogDirector* d) : Widget(d) {
	cout << "ListBox init";
}