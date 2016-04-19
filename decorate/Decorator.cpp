/*
* @Author: buyi
* @Date:   2016-04-19 21:34:15
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-19 21:53:32
*/

#include <iostream>
#include "Decorator.h"
using namespace std;

// int main(){

//     return 0;
// }

// Decorator::Decorator (VisualComponent* value) {
// 	cout << "Decorator init";
// 	_component = value;
// }

 Decorator::Decorator(VisualComponent value) {
 	cout << "Decorator init";
 	_component = value;
 }

Decorator::~Decorator() {
	cout << "Decorator exit";
}

void Decorator::Draw () {
	cout << "Decorator Draw";
	_component.Draw();
	// _component->Draw();
}