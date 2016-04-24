/*
* @Author: buyi
* @Date:   2016-04-24 23:31:57
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-24 23:43:22
*/

#include <iostream>
#include "MyClass.h"
#include "Command.h"
#include "SimpleCommand.h"

using namespace std;

int main(){

	MyClass* receiver = new MyClass;

	Command* aCommand = new SimpleCommand<MyClass> (receiver, &MyClass::Action);

	aCommand->Execute();
    return 0;
}