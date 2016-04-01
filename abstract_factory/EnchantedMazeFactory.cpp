#include "stdio.h"
#include "EnchantedMaze.h"
#include "EnchantedMazeFactory.h"

EnchantedMazeFactory::EnchantedMazeFactory () {
	printf ("EnchantedMazeFactory");
}


Maze* EnchantedMazeFactory::MakeMaze () const {
	printf ("EnchantedMazeFactory MakeMaze") ;
	return new EnchantedMaze ;
}