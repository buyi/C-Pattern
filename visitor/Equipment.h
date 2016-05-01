#ifndef _Equipment_H
#define _Equipment_H

class EquipmentVisitor;

class Equipment
{
public:
	Equipment( char* name);
	// ~Equipment();

	char* Name() ;

	virtual int price() = 0;
	virtual void Accept (EquipmentVisitor&) = 0;

private:
	 char* _name;
	
};

#endif