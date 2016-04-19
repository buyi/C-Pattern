/*
* @Author: buyi
* @Date:   2016-04-19 21:36:41
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-19 21:48:15
*/

#include <iostream>
#include "Decorator.h"
#include "VisualComponent.h"

using namespace std;

int main(){
	
	// VisualComponent* visualComponent = new VisualComponent;
	VisualComponent visualComponent;
	Decorator* decorator  = new Decorator (visualComponent);
	decorator->Draw();

    return 0;
}