#ifndef _ConstraintSolver_H
#define _ConstraintSolver_H

#include "ConstraintSolverMemento.h"

class ConstraintSolver
{
public:
	static ConstraintSolver* Instance();
	void Solve();

	ConstraintSolverMemento* createMemento();
	void setCMemento (ConstraintSolverMemento*);
	// ~ConstraintSolver();
private:
	ConstraintSolver();
	ConstraintSolverMemento* _state;
	static ConstraintSolver* _constraintSolver;
	
};

#endif