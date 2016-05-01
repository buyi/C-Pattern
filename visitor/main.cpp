/*
* @Author: buyi
* @Date:   2016-05-01 21:49:34
* @Last Modified by:   buyi
* @Last Modified time: 2016-05-01 23:47:22
*/


#include "PricingVistor.h"
#include "FloppyDisk.h"
#include "Bus.h"
#include <iostream>

using namespace std;

// Undefined symbols for architecture x86_64:
//   "typeinfo for EquipmentVisitor", referenced from:
//       typeinfo for PricingVistor in PricingVisitor-1759b1.o
//   "typeinfo for Equipment", referenced from:
//       typeinfo for Bus in Bus-b18983.o
//       typeinfo for FloppyDisk in FloppyDisk-a33278.o
//   "vtable for EquipmentVisitor", referenced from:
//       EquipmentVisitor::EquipmentVisitor() in EquipmentVisitor-5daa55.o
//   NOTE: a missing vtable usually means the first non-inline virtual member function has no definition.
//   "vtable for Equipment", referenced from:
//       Equipment::Equipment(char*) in Equipment-de4cfd.o
//   NOTE: a missing vtable usually means the first non-inline virtual member function has no definition.

// 这个就是vtable for XXX 的函数没有实现

int main(){

	PricingVistor visitor;
	FloppyDisk disk;
	Bus bus;
	disk.Accept(visitor);
	bus.Accept(visitor);

    return 0;
}