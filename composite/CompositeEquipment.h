#ifndef _CompositeEquipment_H
#define _CompositeEquipment_H
#include "Equipment.h"
#include <list> 
using namespace std;
class CompositeEquipment : public Equipment
{
public:
	CompositeEquipment( char* value);
	 void print ();
	~CompositeEquipment();
	void Add (Equipment*);
	// ~CompositeEquipment();

// private:
	list<Equipment*> _equipment;
	
};
#endif