#ifndef _MazeFactory_H
#define _MazeFactory_H
#include "Maze.h"
class MazeFactory
{
public:
	// MazeFactory();
	// ~MazeFactory();
	static MazeFactory* Instance();
	Maze* MakeMaze();

	protected:
	MazeFactory();

	private:
	static MazeFactory* _instance;	
};
#endif