#include <iostream>
#include "Compositor.h"

using namespace std;

class ArrayCompositor : public Compositor
{
public:
	ArrayCompositor() : Compositor() {
		cout << "ArrayCompositor" << endl;
	}
	virtual int Compose ();
	
};