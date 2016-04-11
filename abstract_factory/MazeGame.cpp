// #include "Maze.cpp"
// #include "Maze.cpp"
// #include "MazeFactory.cpp"

#include "MazeGame.h"
#include "EnchantedMazeFactory.h"


Maze* MazeGame::CreateMaze (MazeFactory& factory) {
	Maze* maze = factory.MakeMaze();
	// Romm* r1 = factory.MakeRoom(1);
	// Room* r2 = factory.MakeRoom(2);
	// Door* door = factory.MakeDoor (r1, r2);

	// maze->AddRoom (r1);
	// maze->AddRoom (r2);

	return maze;


}

int main () {

	MazeGame game;
	EnchantedMazeFactory factory;
	game.CreateMaze (factory);

}