
#ifndef _TcpConnection_H
#define _TcpConnection_H

class TCPState;
// 将所有状态的方法都集中于此 每个状态注重实现该条件下的行为 供此处发号施令
class TcpConnection
{
public:
	TcpConnection();
	// ~TcpConnection();
	void ActionOpen();
	void PassiveOpen();
	void Close ();
private:
	friend class TCPState;
	void changeState (TCPState*);
private:
	TCPState* _state;
	
};
#endif