/*
* @Author: buyi
* @Date:   2016-04-13 23:33:04
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-13 23:57:05
*/
#include "FloppyDisk.h"
#include "Equipment.h"

#include <iostream>

using namespace std;

FloppyDisk::FloppyDisk (const char* value) : Equipment(value){
	// super:: (value);
	cout << value;
	cout << "FloppyDisk init";
}
		void FloppyDisk::print () {
			cout << Name();
		}