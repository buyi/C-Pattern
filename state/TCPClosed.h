
#ifndef _TCPClosed_H
#define _TCPClosed_H
#include "TCPState.h"
class TCPClosed : public TCPState
{
public:
	static TCPState* Instance();
	static TCPState* _close;
protected:
	void ActionOpen (TcpConnection*);
	TCPClosed();
	// ~TCPClosed();
	
};
#endif