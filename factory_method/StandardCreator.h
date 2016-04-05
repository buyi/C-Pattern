#include "Creator.h"
#include <iostream>

using namespace std;

template <class TheProduct>
class StandardCreator : public Creator
{
public:
	StandardCreator();
	// ~StandardCreator();
	virtual Product* CreateProduct ();
	
};

template <class TheProduct>
Product* StandardCreator<TheProduct>::CreateProduct () {
	cout << "StandardCreator CreateProduct";
	return new TheProduct;
}


template <class TheProduct>
StandardCreator<TheProduct>::StandardCreator () {
	cout << "StandardCreator init";
}
