#ifndef _MazePrototypeFactory_H
#define _MazePrototypeFactory_H
#include "Maze.h"
class MazePrototypeFactory
{
public:
	MazePrototypeFactory(Maze* /**, Wall *, Room*, Door**/);
	// ~MazePrototypeFactory();

	virtual Maze* MakeMaze () const;
	// virtual Room* makeRoom (int) const;
	// virtual Wall* MakeWall () const;
	// virtual Door* MakeDoor (Room*, Room*) const; 
	

	private:
		Maze* _prototypeMaze;
		// Room* _prototypeRoom;
		// Wall* _prototypeWall;
		// Door* _prototypeDoor;
};
#endif