#include "TCPState.h"
class TCPListen : public TCPState
{
public:
	static TCPState* Instance();
	static TCPState* _listener;
protected:

	TCPListen();
	// ~TCPClosed();
	
};