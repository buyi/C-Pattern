/*
* @Author: buyi
* @Date:   2016-04-08 22:29:15
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-08 22:41:52
*/
#include "MazeFactory.h"
#include <iostream>

using namespace std;

MazeFactory* MazeFactory::_instance = 0;

MazeFactory* MazeFactory::Instance () {
	if (_instance == 0) {
		_instance = new MazeFactory;
	}
	return _instance;
}

MazeFactory::MazeFactory () {
	cout << "MazeFactory init";
}

Maze* MazeFactory::MakeMaze () {

	cout << "MazeFactory MakeMaze";
	return new Maze;
}

// int main(){

//     return 0;
// }