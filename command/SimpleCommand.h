#include "Command.h"
template <class Receiver>
class SimpleCommand : public Command
{
public:
	// SimpleCommand();
	// ~SimpleCommand();

	typedef void (Receiver::*Action) ();
	SimpleCommand (Receiver* r, Action a) : _receiver(r), _action(a) {}
	virtual void Execute();

private:
	Receiver* _receiver;
	Action _action;
	
};

template <class Receiver>
void SimpleCommand<Receiver>::Execute () {
	(_receiver->*_action)();
}

// template <class Receiver>
// void SimpleCommand<Receiver>::Execute() {
// 	cout << "SimpleCommand Execute";
// }