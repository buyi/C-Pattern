#include "stdio.h"
#include "MazeFactory.cpp"
// #include "Maze.cpp"
// #include "EnchantedMaze.cpp"
class EnchantedMazeFactory : public MazeFactory {
	public:
		EnchantedMazeFactory () {
			printf ("EnchantedMazeFactory");
		}

		virtual Maze* MakeMaze () const {
			printf ("EnchantedMazeFactory MakeMaze") ;
			return new Maze ;
		}

};