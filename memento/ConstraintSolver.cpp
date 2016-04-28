/*
* @Author: buyi
* @Date:   2016-04-28 22:09:58
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-28 23:00:53
*/

#include <iostream>
#include "ConstraintSolver.h"

using namespace std;
// Undefined symbols for architecture x86_64:
//   "ConstraintSolver::_constraintSolver", referenced from:
//       ConstraintSolver::Instance() in ConstraintSolver-b55227.o
// ld: symbol(s) not found for architecture x86_64
ConstraintSolver* ConstraintSolver::_constraintSolver =0;

	//'static' can only be specified inside the class definition

	ConstraintSolver* ConstraintSolver::Instance() {
		if (_constraintSolver == 0) {
			_constraintSolver = new ConstraintSolver();
		}
		return _constraintSolver;
	}

	ConstraintSolver::ConstraintSolver () {
		cout << "ConstraintSolver init"<< endl;
	}
	void ConstraintSolver::Solve() {
		cout << "ConstraintSolver Solve"<< endl;
	}

	ConstraintSolverMemento* ConstraintSolver::createMemento() {
		cout << "create  ConstraintSolverMemento" << endl;
		_state = new ConstraintSolverMemento ();
		return _state;
	}

	void ConstraintSolver::setCMemento (ConstraintSolverMemento* c) {
			cout << "config  ConstraintSolverMemento"<< endl;
		_state = c;
	}