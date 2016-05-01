
#include "Equipment.h"
#include "EquipmentVisitor.h"

	// Equipment::~Equipment() {}

	 char* Equipment::Name() {return _name;}

	Equipment::Equipment( char* name) {
		_name = name;
	}

	// void Equipment::Accept (EquipmentVisitor& e) {

	// }