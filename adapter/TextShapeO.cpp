/*
* @Author: buyi
* @Date:   2016-04-12 20:03:46
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-12 22:37:13
*/

#include <iostream>
#include "TextShapeO.h"

using namespace std;

// int main(){

//     return 0;
// }

TextShapeO::TextShapeO (TextView* t) {
	_text = t;
}


void TextShapeO::BoundingBox (Point& bottomLef, Point& topRight) const {
	cout << "TextShapeO BoundingBox";
}

// TextShape::Manipulator* CreateManipulator() const {
// 	cout << "TextShape Manipulator";
// }

bool TextShapeO::IsEmpty() const {
	return _text->IsEmpty();
}