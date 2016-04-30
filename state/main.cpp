/*
* @Author: buyi
* @Date:   2016-04-30 23:38:10
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-30 23:52:23
*/

#include <iostream>
#include "TcpConnection.h"

using namespace std;

int main(){
	TcpConnection* tc = new TcpConnection();
	cout << "TcpConnection is ok" << endl;
	tc->ActionOpen();
	cout << "tc ActionOpen" << endl;
	tc->ActionOpen();
    return 0;
}