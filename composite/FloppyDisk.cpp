/*
* @Author: buyi
* @Date:   2016-04-13 23:33:04
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-18 22:30:35
*/
#include "FloppyDisk.h"

#include <iostream>

using namespace std;

FloppyDisk::FloppyDisk ( char* value) : Equipment(value){
	// super:: (value);
	cout << value;
	cout << "FloppyDisk init";
}
		void FloppyDisk::print () {
			cout << "FloppyDisk print";
			// cout << Name() ;
		}

		FloppyDisk::~FloppyDisk()  {
// Equipment::~Equipment();
		}