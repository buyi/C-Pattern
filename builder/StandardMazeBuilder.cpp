/*
* @Author: buyi
* @Date:   2016-04-01 23:19:08
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-01 23:52:25
*/

#include <iostream>

#include "Maze.h"
#include "StandardMazeBuilder.h"

using namespace std;



// Undefined symbols for architecture x86_64:
//   "StandardMazeBuilder::StandardMazeBuilder()", referenced from:
//       _main in MazeGame-09c1e1.o
//   "StandardMazeBuilder::~StandardMazeBuilder()", referenced from:
//       _main in MazeGame-09c1e1.o
// ld: symbol(s) not found for architecture x86_64

StandardMazeBuilder::StandardMazeBuilder() {
	cout << "StandardMazeBuilder::init";
}

// void StandardMazeBuilder::BuildMaze () {
// 	cout << "StandardMazeBuilder::BuildMaze";
// }

// Maze* MazeBuilder::GetMaze() {return new Maze;}

// int main(){

//     return 0;
// }