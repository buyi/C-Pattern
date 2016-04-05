/*
* @Author: buyi
* @Date:   2016-04-05 22:45:14
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-05 23:05:54
*/

#include <iostream>
#include "Creator.h"

using namespace std;

Product* Creator::GetProduct () {
	if (_product == 0)
		_product = CreateProduct();
	return _product;
}

Creator::Creator () {
	cout << "Creator init";
}

// int main(){

//     return 0;
// }