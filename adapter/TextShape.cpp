/*
* @Author: buyi
* @Date:   2016-04-11 23:23:28
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-11 23:38:10
*/

#include <iostream>
#include "TextShape.h"

using namespace std;

// int main(){

//     return 0;
// }

TextShape::TextShape () {
	cout << "##TextShape##";
}

void TextShape::BoundingBox (Point& bottomLef, Point& topRight) const {
	cout << "TextShape BoundingBox";
}

// TextShape::Manipulator* CreateManipulator() const {
// 	cout << "TextShape Manipulator";
// }

bool TextShape::IsEmpty() const {
	return TextView::IsEmpty();
}