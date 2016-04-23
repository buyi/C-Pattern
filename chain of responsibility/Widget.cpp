/*
* @Author: buyi
* @Date:   2016-04-23 20:34:04
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-23 20:34:52
*/

#include <iostream>
#include "Widget.h"

using namespace std;

// int main(){

//     return 0;
// }

Widget::Widget (Widget* w , Topic t) : HelpHandler (w,t ) {
	_parent = w;
}