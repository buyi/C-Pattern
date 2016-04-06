/*
* @Author: buyi
* @Date:   2016-04-06 22:12:27
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-06 22:30:59
*/

#include <iostream>
#include "Maze.h"

using namespace std;

// int main(){

//     return 0;
// }

Maze::Maze() {
	cout << "Maze";
}

Maze::Maze(const Maze& other) {
	cout << "Maze other";
}

Maze* Maze::Clone () const {
	cout << "Maze Clone";
	return new Maze (*this);
}