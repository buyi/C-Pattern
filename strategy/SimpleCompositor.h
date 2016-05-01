
#include <iostream>
#include "Compositor.h"

using namespace std;

class SimpleCompositor : public Compositor
{
public:
	SimpleCompositor() : Compositor() {
		cout << "SimpleCompositor" << endl;
	}
	virtual int Compose ();
	
};