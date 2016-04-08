/*
* @Author: buyi
* @Date:   2016-04-06 22:14:39
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-08 22:40:25
*/

#include <iostream>
#include "MazeFactory.h"
#include "MazeGame.h"

using namespace std;

int main(){
	MazeGame game;
	// MazeFactory* simple = ;

	Maze* maze = game.CreateMaze(MazeFactory::Instance());

    return 0;
}