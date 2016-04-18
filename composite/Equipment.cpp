/*
* @Author: buyi
* @Date:   2016-04-13 23:53:09
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-14 00:42:33
*/

#include <iostream>
#include "Equipment.h"
using namespace std;

	Equipment::Equipment( char* value) {
		cout << value;
		cout << "Equipment init";
		_name = value;
	}

	// Equipment::~Equipment() {

	// }