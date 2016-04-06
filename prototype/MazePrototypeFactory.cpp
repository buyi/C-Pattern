/*
* @Author: buyi
* @Date:   2016-04-06 22:10:20
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-06 22:29:03
*/
#include "MazePrototypeFactory.h"
#include <iostream>

using namespace std;

MazePrototypeFactory::MazePrototypeFactory(Maze* maze /**, Wall *, Room*, Door**/) {
	cout << "MazePrototypeFactory init";
	_prototypeMaze = maze;
}

Maze* MazePrototypeFactory::MakeMaze () const {
	cout << "MazePrototypeFactory MakeMaze";
	return _prototypeMaze->Clone();
}

// int main(){

//     return 0;
// }