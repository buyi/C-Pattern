/*
* @Author: buyi
* @Date:   2016-04-30 23:18:13
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-30 23:43:23
*/

#include <iostream>
#include "TcpConnection.h"
#include "TCPClosed.h"
#include "TCPState.h"

using namespace std;

TcpConnection::TcpConnection () {
	cout << "TcpConnection init";
	_state = TCPClosed::Instance();
}

	void TcpConnection::ActionOpen() {
		_state->ActionOpen(this);

	}
	void TcpConnection::PassiveOpen() {
		_state->PassiveOpen(this);

	}
	void TcpConnection::Close () {
		_state->Close(this);
	}

	void TcpConnection::changeState (TCPState* s) {
		_state =s;
	}