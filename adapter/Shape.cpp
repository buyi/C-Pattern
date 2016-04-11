/*
* @Author: buyi
* @Date:   2016-04-11 23:26:45
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-11 23:39:15
*/

#include <iostream>
#include "Shape.h"


using namespace std;

Shape::Shape () {
	cout << "##Shape##";
}

void Shape::BoundingBox (Point& bottomLef, Point& topRight) const {
	cout << "Shape BoundingBox";
}
// Manipulator* Shape::CreateManipulator() const {
// 	cout << "Shape CreateManipulator";
// }

// int main(){

//     return 0;
// }