/*
* @Author: buyi
* @Date:   2016-04-19 21:32:21
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-19 21:46:56
*/

#include <iostream>
#include "VisualComponent.h"
using namespace std;


VisualComponent::VisualComponent () {
	cout << "VisualComponent init";
}

VisualComponent::~VisualComponent() {
	cout << "VisualComponent exit";
}


void VisualComponent::Draw () {
	cout << "VisualComponent Draw";
}


// int main(){

//     return 0;
// }