
#include <iostream>

#include "Compositor.h"

using namespace std;

class TextCompositor : public Compositor
{
public:
	TextCompositor() : Compositor() {
		cout << "TextCompositor" << endl;
	}
	virtual int Compose ();
	
};