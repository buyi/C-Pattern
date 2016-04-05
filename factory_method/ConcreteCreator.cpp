/*
* @Author: buyi
* @Date:   2016-04-05 23:42:54
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-05 23:48:23
*/

#include <iostream>
#include "ConcreteCreator.h"
#include "MyProduct.h"
#include "Product.h"

using namespace std;


ConcreteCreator:: ConcreteCreator () {
	cout << "ConcreteCreator init";
}

Product* ConcreteCreator::CreateProduct () {
	return new MyProduct;
}
// int main(){

//     return 0;
// }