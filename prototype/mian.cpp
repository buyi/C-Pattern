/*
* @Author: buyi
* @Date:   2016-04-06 22:14:39
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-06 22:17:26
*/

#include <iostream>
#include "MazePrototypeFactory.h"
#include "MazeGame.h"

using namespace std;

int main(){
	MazeGame game;
	MazePrototypeFactory simple (new Maze);

	Maze* maze = game.CreateMaze(simple);

    return 0;
}