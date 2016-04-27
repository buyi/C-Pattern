/*
* @Author: buyi
* @Date:   2016-04-27 22:06:10
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-27 22:06:53
*/

#include <iostream>
#include "Button.h"

using namespace std;

Button::Button (DialogDirector* d) : Widget (d) {
	cout << "Button init";
}

// int main(){

//     return 0;
// }