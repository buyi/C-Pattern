/*
* @Author: buyi
* @Date:   2016-04-30 23:22:27
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-30 23:46:08
*/

#include <iostream>
#include "TCPState.h"

using namespace std;


	 void TCPState::ActionOpen (TcpConnection*) {}
	 void TCPState::PassiveOpen (TcpConnection*) {}
	 void TCPState::Close (TcpConnection*) {}


	void TCPState::ChangeState (TcpConnection* tcp, TCPState* t) {
		tcp->changeState(t);
	}