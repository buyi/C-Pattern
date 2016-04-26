#ifndef _LIST_H
#define _LIST_H

#define CAPACITY 10
#include <vector>
#include <iostream>
using namespace std;

template <class Item>
class List {
public:
	List (long size = CAPACITY);
	long Count() const;
	Item& Get(long index);
private:
	vector<int>* ints;
};


template <class Item>

// List.cpp:14:13: error: out-of-line constructor for 'List' cannot have template
//       arguments 去掉<Item>
List<Item>::List (long size) {
	// ./List.h:24:7: error: no viable overloaded '='
 //        ints = new vector<int>(size);
	ints = new vector<int>(size);
	ints->push_back(8);
	ints->push_back(45);
	ints->push_back(232);
	ints->push_back(1);
}
template <class Item>
	long List<Item>::Count() const {
		std::cout << "size:" << ints->size();
			return ints->size();
	}
template <class Item>

	// ./List.h:36:10: error: binding of reference to type 'int' to a value of type
 //      'const value_type' (aka 'const int') drops qualifiers
	// 去掉const
	Item& List<Item>::Get(long index) {
		return ints->at(index);
	}

#endif