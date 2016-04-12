/*
* @Author: buyi
* @Date:   2016-04-12 23:11:30
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-12 23:44:30
*/

#include <iostream>
#include "Window.h"
#include "WindowSystemFactory.h"
#include "WindowImp.h"

using namespace std;

// int main(){

//     return 0;
// }
WindowImp* Window::_imp=0;
Window::Window () {
	cout << "Window init";
}

// WindowImp* Window::getWindowImp() {
// 	return Window::createWindowImpl();
// }

void Window::DrawContens () {
	cout << "Window DrawContens";
}

WindowImp* Window::createWindowImpl () {
	if (_imp == 0) {
		_imp = WindowSystemFactory::Instance()-> makeWindowImp ();
	}
	return _imp;
}