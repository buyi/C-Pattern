/*
* @Author: buyi
* @Date:   2016-04-24 23:45:50
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-24 23:46:58
*/

#include <iostream>
#include "Command.h"

using namespace std;

	Command::Command() {
		cout << "Command init";
	}
	// ~Command();
	void Command::Execute() {
		cout << "Command Execute";
	}