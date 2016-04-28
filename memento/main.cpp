/*
* @Author: buyi
* @Date:   2016-04-28 22:27:26
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-28 22:28:06
*/

#include <iostream>
#include "MoveCommand.h"

using namespace std;

int main(){
	MoveCommand command;
	command.Execute();
	command.UnExecute();
    return 0;
}