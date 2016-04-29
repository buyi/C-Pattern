/*
* @Author: buyi
* @Date:   2016-04-29 22:27:31
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-29 22:54:44
*/

#include <iostream>
#include "ClockTimer.h"

using namespace std;

// int main(){

//     return 0;
// }

// ClockTimer::ClockTimer() {
// 	cout << "ClockTimer init";
// }

// C++ requires a type specifier for all declarations

void ClockTimer::Tick() {
	Notify();
}