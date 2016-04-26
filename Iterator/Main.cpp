/*
* @Author: buyi
* @Date:   2016-04-26 23:11:24
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-26 23:59:37
*/

#include <iostream>
#include "List.h"
#include "ListIterator.h"

using namespace std;

int main(){
	List<int>* list = new List<int>(3);
	cout << "list init";

	ListIterator<int>* i = new ListIterator<int>(list) ;
	cout << "i init";

	for (i->First();!i->IsDone();i->Next()) {
		cout << "currentItem" << i->CurrentItem();
	}
    return 0;
}