/*
* @Author: buyi
* @Date:   2016-04-12 23:04:57
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-12 23:31:37
*/

#include "WindowSystemFactory.h"
#include <iostream>

using namespace std;

WindowSystemFactory* WindowSystemFactory::_instance = 0;

WindowSystemFactory* WindowSystemFactory::Instance() {

	if (_instance == 0) {
		_instance = new WindowSystemFactory;
	}
	return _instance;
}


WindowSystemFactory::WindowSystemFactory () {
	cout << "WindowSystemFactory init";
}

WindowImp* WindowSystemFactory::makeWindowImp () {
	cout << "WindowSystemFactory makeWindowImp";
	return new WindowImp;
}

// int main(){

//     return 0;
// }