/*
* @Author: buyi
* @Date:   2016-04-11 23:19:30
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-12 15:51:35
*/

#include <iostream>
#include "TextView.h"
#include "Coord.h"

using namespace std;

TextView::TextView () {
	cout << "##TextView##";
}

void TextView::GetOrigin (Coord& x, Coord& y) const {
	cout << "GetOrigin";
}

	void TextView::GetExtent (Coord& width, Coord& height) const {
		cout << "GetExtent";
	}
	
	 bool TextView::IsEmpty() const {
	 	cout << "##TextView IsEmpty##";
	 	return true;
	 }

// int main(){

//     return 0;
// }