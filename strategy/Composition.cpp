/*
* @Author: buyi
* @Date:   2016-05-01 18:11:03
* @Last Modified by:   buyi
* @Last Modified time: 2016-05-01 18:24:53
*/

#include <iostream>
#include "Composition.h"
using namespace std;


	Composition::Composition(Compositor* c) {
		_compositor = c;
	}
	// ~Composition();
	void Composition::Repair() {
		int cc = _compositor->Compose();
		cout << cc << "Repaired" << endl;
	}