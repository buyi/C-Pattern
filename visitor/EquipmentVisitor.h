#ifndef _EquipmentVisitor_H
#define _EquipmentVisitor_H
// #include "FloppyDisk.h"
// #include "Bus.h"
class FloppyDisk;
class Bus;

class EquipmentVisitor
{
public:
	EquipmentVisitor() {}
	// ~EquipmentVisitor() {}

	// 按照element的种类来  操作对应visitor子类
	virtual void VisitFloppyDisk (FloppyDisk*) = 0;
	virtual void VisitBus (Bus*) = 0;
	
};
#endif