/*
* @Author: buyi
* @Date:   2016-04-30 23:25:11
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-30 23:49:43
*/

#include <iostream>
#include "TCPClosed.h"
#include "TCPEstablished.h"

using namespace std;

TCPState* TCPClosed::_close = 0;

	TCPState* TCPClosed::Instance() {
		if (_close == 0) {
			_close =  new TCPClosed();
		}
		return _close;
	}

	TCPClosed::TCPClosed() {
		cout << "TCPClosed init";
	}

	void TCPClosed::ActionOpen (TcpConnection* t) {
		cout << "TCPClosed ActionOpen";
		ChangeState (t, TCPEstablished::Instance());
	}