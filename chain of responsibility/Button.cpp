/*
* @Author: buyi
* @Date:   2016-04-23 20:37:16
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-23 20:52:21
*/

#include <iostream>
#include "Button.h"
using namespace std;

// int main(){

//     return 0;
// }

Button::Button(Widget* h, Topic t ) : Widget (h, t) {}

void Button::HandleHelp () {
	if (HasHelp()) {
		cout << "Button HandleHelp";
	} else {
		HelpHandler::HandleHelp();
	}
}