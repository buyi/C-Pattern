/*
* @Author: buyi
* @Date:   2016-04-12 23:17:59
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-12 23:41:55
*/

#include <iostream>
#include "Window.h"
#include "WindowImp.h"

using namespace std;

int main(){
	Window window;
	WindowImp* imp = window.createWindowImpl ();
	imp -> drawSomething();


    return 0;
}