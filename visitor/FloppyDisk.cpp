/*
* @Author: buyi
* @Date:   2016-05-01 22:02:22
* @Last Modified by:   buyi
* @Last Modified time: 2016-05-01 23:35:13
*/

#include <iostream>
#include "FloppyDisk.h"


// FloppyDisk.cpp:24:4: error: member access into incomplete type
//       'EquipmentVisitor'
//                 e.VisitFloppyDisk(this);
//                  ^
// ./Equipment.h:4:7: note: forward declaration of 'EquipmentVisitor'
// class EquipmentVisitor;
#include "EquipmentVisitor.h"

using namespace std;


 FloppyDisk::FloppyDisk() : Equipment("disk"){
 	 cout << "FloppyDisk init" << endl;

 	} 
 	// ~FloppyDisk();

 	int FloppyDisk::price() {
 		return 10;
 	}

	void FloppyDisk::Accept (EquipmentVisitor& e) {
		e.VisitFloppyDisk(this);
	}