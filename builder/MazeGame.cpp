// #include "Maze.cpp"
// #include "MazeFactory.cpp"

#include "MazeGame.h"
// duplicate symbol __ZN19StandardMazeBuilderC2Ev in:
//     /var/folders/gy/wj4_q1ss0sxd826lt10dy0ww0000gn/T/MazeGame-dd5017.o
//     /var/folders/gy/wj4_q1ss0sxd826lt10dy0ww0000gn/T/StandardMazeBuilder-f08460.o
// duplicate symbol __ZN19StandardMazeBuilderC1Ev in:
//     /var/folders/gy/wj4_q1ss0sxd826lt10dy0ww0000gn/T/MazeGame-dd5017.o
//     /var/folders/gy/wj4_q1ss0sxd826lt10dy0ww0000gn/T/StandardMazeBuilder-f08460.o
// ld: 2 duplicate symbols for architecture x86_64
#include "StandardMazeBuilder.h"
// #include "EnchantedMazeFactory.h"


// Maze* MazeGame::CreateMaze (MazeFactory& factory) {
// 	Maze* maze = factory.MakeMaze();
// 	// Romm* r1 = factory.MakeRoom(1);
// 	// Room* r2 = factory.MakeRoom(2);
// 	// Door* door = factory.MakeDoor (r1, r2);

// 	// maze->AddRoom (r1);
// 	// maze->AddRoom (r2);

// 	return maze;


// }

Maze* MazeGame::CreateMazeBuilder (MazeBuilder& builder) {
	builder.BuildMaze();
	Maze* maze =  builder.GetMaze();
	return maze;

}

int main () {

	// MazeGame game;
	// EnchantedMazeFactory factory;
	// game.CreateMaze (factory);


	MazeGame game;
	StandardMazeBuilder builder;
	game.CreateMazeBuilder (builder);

}