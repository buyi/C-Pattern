/*
* @Author: buyi
* @Date:   2016-04-11 23:29:13
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-12 22:39:38
*/

#include <iostream>
// #include "TextShape.h"
#include "TextShapeO.h"
using namespace std;

int main(){
	// TextShape shape;
	//shape.IsEmpty();
	TextShapeO* shape = new TextShapeO(new TextView);
	shape->IsEmpty();
    return 0;
}