

#ifndef _MazeGame_H
#define _MazeGame_H
#include "MazeFactory.h"
#endif

class  MazeGame {

public:
	Maze* CreateMaze (MazeFactory* factory);
};