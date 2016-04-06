#ifndef _Maze_H
#define _Maze_H
class Maze
{
public:
	Maze();
	Maze (const Maze&);
	~Maze();
	virtual Maze* Clone () const;
	
};
#endif