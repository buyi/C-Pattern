#include "Product.h"

#ifndef _Creator_H
#define _Creator_H
class Creator
{
public:
	Creator();
	// ~Creator();
	virtual Product* CreateProduct () = 0;
	Product* GetProduct ();
private:
	Product* _product;
	
};
#endif