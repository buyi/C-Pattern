#ifndef _TCPState_H
#define _TCPState_H

#include "TcpConnection.h"
class TCPState
{
public:
	// TCPState();
	// ~TCPState();
	virtual void ActionOpen (TcpConnection*);
	virtual void PassiveOpen (TcpConnection*);
	virtual void Close (TcpConnection*);

protected:
	void ChangeState (TcpConnection*, TCPState*);
	
};

#endif