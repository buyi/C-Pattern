#include "ConstraintSolverMemento.h"
#include "ConstraintSolver.h"
class MoveCommand
{
public:
	MoveCommand();
	// ~MoveCommand();
	void Execute ();
	void UnExecute ();
private:
	ConstraintSolverMemento* _state;
	
};