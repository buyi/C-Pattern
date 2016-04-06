

#ifndef _MazeGame_H
#define _MazeGame_H
#include "MazePrototypeFactory.h"
#endif

class  MazeGame {

public:
	Maze* CreateMaze (MazePrototypeFactory& factory);
};