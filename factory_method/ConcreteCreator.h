#include "Creator.h"
#include "Product.h"
class ConcreteCreator : public Creator
{
public:
	ConcreteCreator();
	// ~ConcreteCreator();
	virtual Product* CreateProduct ();
	
};