/*
* @Author: buyi
* @Date:   2016-04-23 20:26:32
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-23 21:00:39
*/

#include <iostream>
#include "HelpHandler.h"

using namespace std;

// int main(){

//     return 0;
// }

HelpHandler::HelpHandler(HelpHandler* h, Topic t) : _successor(h),_topic(t) {}

bool HelpHandler::HasHelp () {
	return _topic != NO_HELP_TOPIC;
}

void HelpHandler::HandleHelp () {
	if (_successor != 0) {
		_successor->HandleHelp();
	}
}

 void HelpHandler::setHandler (HelpHandler* h, Topic t) {
 		_successor = h;
 		_topic = t;
 }