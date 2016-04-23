/*
* @Author: buyi
* @Date:   2016-04-23 20:45:20
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-23 21:02:34
*/

#include <iostream>
#include "Application.h"
#include "Dialog.h"
#include "Button.h"

const Topic PRINT_TOPIC = 1;
const Topic PAPER_ORIENTATION_TOPIC = 2;
const Topic APPLICATION_TOPIC = 3;

using namespace std;

int main(){
	Application* application = new Application (APPLICATION_TOPIC);
	Dialog* dialog = new Dialog (application, PRINT_TOPIC);
	// Button* button = new Button (dialog, PAPER_ORIENTATION_TOPIC);
	Button* button = new Button (dialog);

	button -> HandleHelp();

    return 0;
}