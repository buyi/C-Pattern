/*
* @Author: buyi
* @Date:   2016-04-30 23:29:06
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-30 23:50:37
*/

#include <iostream>
#include "TCPListen.h"

using namespace std;

  // "TCPListen::_listener", referenced from:
  //     TCPListen::Instance() in TCPListen-f6da8e.o

TCPState* TCPListen::_listener = 0;

TCPState* TCPListen::Instance() {
		if (_listener == 0) {
			_listener =  new TCPListen();
		}
		return _listener;
	}

	TCPListen::TCPListen() {
		cout << "TCPListen init";
	}