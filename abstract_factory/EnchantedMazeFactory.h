#ifndef _EnchantedMazeFactory_H
#define _EnchantedMazeFactory_H
#include "MazeFactory.h"
#endif

class EnchantedMazeFactory : public MazeFactory {
	public:
		EnchantedMazeFactory ();

		virtual Maze* MakeMaze () const;

};