/*
* @Author: buyi
* @Date:   2016-04-30 23:29:06
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-30 23:49:49
*/

#include <iostream>
#include "TCPEstablished.h"

using namespace std;

TCPState* TCPEstablished::_established = 0;

TCPState* TCPEstablished::Instance() {
		if (_established == 0) {
			_established =  new TCPEstablished();
		}
		return _established;
	}

	TCPEstablished::TCPEstablished() {
		cout << "TCPEstablished init";
	}

		void TCPEstablished::ActionOpen (TcpConnection* t) {
		cout << "TCPEstablished ActionOpen";
		// ChangeState (t, TCPEstablished::Instance())
	}