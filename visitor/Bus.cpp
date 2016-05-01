/*
* @Author: buyi
* @Date:   2016-05-01 22:03:17
* @Last Modified by:   buyi
* @Last Modified time: 2016-05-01 23:34:56
*/

#include <iostream>
#include "Bus.h"
#include "EquipmentVisitor.h"

using namespace std;




	Bus::Bus() : Equipment("bus") {
		cout << "Bus init" << endl;
 	} 

 	int Bus::price() {
 		return 80;
 	}
	void Bus::Accept (EquipmentVisitor& e) {
		e.VisitBus(this);
	}