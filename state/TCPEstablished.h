#ifndef _TCPEstablished_H
#define _TCPEstablished_H

#include "TCPState.h"
class TCPEstablished : public TCPState
{
public:
	static TCPState* Instance();
	static TCPState* _established;
	void ActionOpen (TcpConnection*);
protected:

	TCPEstablished();
	// ~TCPClosed();
	
};
#endif