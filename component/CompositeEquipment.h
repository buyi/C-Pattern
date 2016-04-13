#ifndef _CompositeEquipment_H
#define _CompositeEquipment_H
#include "Equipment.h"
#include <list> 
using namespace std;
class CompositeEquipment : public Equipment
{
public:
	CompositeEquipment(const char* value);
	void print ();
	// void Add (Equipment*);
	// ~CompositeEquipment();

// private:
	list<Equipment*> _equipment;
	
};
#endif