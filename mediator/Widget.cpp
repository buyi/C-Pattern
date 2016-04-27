/*
* @Author: buyi
* @Date:   2016-04-27 22:00:26
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-27 22:01:28
*/

#include <iostream>
#include "Widget.h"

using namespace std;

	Widget::Widget(DialogDirector* d) {
		_director = d;
	}
	void Widget::Changed () {
		_director->WidgetChanged(this);
	}


// int main(){

//     return 0;
// }