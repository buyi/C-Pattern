#ifndef _Composition_H
#define _Composition_H


#include "Compositor.h"
class Composition
{
public:
	Composition(Compositor*);
	// ~Composition();
	void Repair();
private:
	Compositor* _compositor;
	
};

#endif