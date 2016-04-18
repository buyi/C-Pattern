/*
* @Author: buyi
* @Date:   2016-04-13 23:34:52
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-18 22:30:53
*/

#include <iostream>
#include "CompositeEquipment.h"
#include "Equipment.h"

using namespace std;

CompositeEquipment::CompositeEquipment( char* value) : Equipment(value) {
	cout << value;
	cout << "CompositeEquipment init";
}

	void CompositeEquipment::print () {
			cout << "CompositeEquipment print";
  list<Equipment*>::iterator iter;  
			  //进行迭代遍历  
    for(iter = _equipment.begin(); iter != _equipment.end(); iter++)  
    {  
        cout << "元素:" << (*iter) << endl;  
        // (*iter) ->print() ;
        cout << "元素:" << (*iter) ->Name() << endl;  
    }  

	}

		CompositeEquipment::~CompositeEquipment() {
			// Equipment::~Equipment();
		}

//use of undeclared identifier '_equipment'
	void CompositeEquipment::Add (Equipment* value) {
		_equipment.push_front(value);
	}