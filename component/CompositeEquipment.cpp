/*
* @Author: buyi
* @Date:   2016-04-13 23:34:52
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-13 23:57:11
*/

#include <iostream>
#include "CompositeEquipment.h"
#include "Equipment.h"

using namespace std;
CompositeEquipment::CompositeEquipment(const char* value) :Equipment(value) {
	// super:: (value);
	cout << value;
	cout << "CompositeEquipment init";
}
	void CompositeEquipment::print () {
cout << Name();

	}
	// void Add (Equipment* value) {
	// _equipment->add (value);
	// }