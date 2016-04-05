/*
* @Author: buyi
* @Date:   2016-04-05 22:51:24
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-05 23:45:04
*/

#include <iostream>
#include "StandardCreator.h"
#include "MyProduct.h"
#include "ConcreteCreator.h"

using namespace std;

int main(){
	StandardCreator<MyProduct> myCreator;
	myCreator.CreateProduct();


	ConcreteCreator creator;
	creator.GetProduct();

    return 0;
}