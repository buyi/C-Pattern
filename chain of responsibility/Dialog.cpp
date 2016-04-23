/*
* @Author: buyi
* @Date:   2016-04-23 20:42:46
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-23 21:01:18
*/

#include <iostream>
#include "Dialog.h"

using namespace std;

Dialog::Dialog(HelpHandler* h, Topic t ) : Widget (0) {
	setHandler (h,t );
}

void Dialog::HandleHelp () {
	if (HasHelp()) {
		cout << "Dialog HandleHelp";
	} else {
		HelpHandler::HandleHelp();
	}
}