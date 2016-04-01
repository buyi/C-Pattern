#pragma once

#ifndef _MazeFactory_H
#define _MazeFactory_H
#include "Maze.h"
#endif

class MazeFactory {
	
	public :
		MazeFactory ();

		virtual Maze* MakeMaze () const;
		// virtual Wall* MakeWall () const {return new Wall;}
		// virtual Room* MakeRoom (int n) const {return new Room (n);}
		// virtual Door* MakeDoor (Room* r1, Room* r2) const {return new Door (r1, r2);}

};