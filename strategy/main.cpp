/*
* @Author: buyi
* @Date:   2016-05-01 18:21:13
* @Last Modified by:   buyi
* @Last Modified time: 2016-05-01 18:51:24
*/

#include <iostream>
#include "SimpleCompositor.h"
// 不能够include cpp
#include "TextCompositor.h"
#include "ArrayCompositor.h"
#include "Composition.h"

using namespace std;

int main(){
	
	SimpleCompositor* sCompositor = new SimpleCompositor ();
	Composition* composition = new Composition(sCompositor);
	composition->Repair();


	TextCompositor* tCompositor = new TextCompositor();
	composition = new Composition (tCompositor);
	composition->Repair();


	ArrayCompositor* aCompositor = new ArrayCompositor ();
	composition = new Composition (aCompositor);
	composition->Repair();
    return 0;
}