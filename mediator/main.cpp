/*
* @Author: buyi
* @Date:   2016-04-27 22:13:14
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-27 22:19:53
*/

#include <iostream>
#include "FontDialogDirector.h"
using namespace std;

int main(){
	FontDialogDirector director;
	director.CreateWidgets();
	director.getOk()->Changed();
    return 0;
}