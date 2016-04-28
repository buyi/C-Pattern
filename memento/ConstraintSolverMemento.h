// #include "ConstraintSolver.h"
#ifndef _ConstraintSolverMemento_H
#define _ConstraintSolverMemento_H
class ConstraintSolverMemento
{
public:
	
	// ~ConstraintSolverMemento();
private:
	// 只有原发器能创建备忘录
	friend class ConstraintSolver;
	ConstraintSolverMemento();
	
};
#endif