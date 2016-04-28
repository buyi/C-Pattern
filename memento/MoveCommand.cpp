/*
* @Author: buyi
* @Date:   2016-04-28 22:08:11
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-28 23:01:08
*/

#include <iostream>
#include "MoveCommand.h"
using namespace std;

	MoveCommand::MoveCommand() {
		cout << "MoveCommand init"<< endl;
	}
	// ~MoveCommand();
	void MoveCommand::Execute () {
		ConstraintSolver* s = ConstraintSolver::Instance();
		_state = s->createMemento();
		s->Solve();
	}
	void MoveCommand::UnExecute () {
		ConstraintSolver* s = ConstraintSolver::Instance();
		s->setCMemento(_state);
		s->Solve();
	}