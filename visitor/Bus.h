#ifndef _BUS_H
#define _BUS_H

#include "Equipment.h"

 class Bus : public Equipment
 {
 public:
 	Bus();

 	int price() ;
	void Accept (EquipmentVisitor&);
 	
 };
 #endif


