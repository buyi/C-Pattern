#pragma once
#include "Maze.h"

class MazeBuilder
{
public:
	MazeBuilder();
	~MazeBuilder();
	virtual void BuildMaze ();
	virtual Maze* GetMaze();

// protected:
// 	MazeBuilder ();
	
};