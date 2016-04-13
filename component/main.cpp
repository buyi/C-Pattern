/*
* @Author: buyi
* @Date:   2016-04-13 23:37:46
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-13 23:52:45
*/

#include <iostream>
#include "CompositeEquipment.h"
#include "FloppyDisk.h"

using namespace std;

int main(){

   


    CompositeEquipment* equipment = new CompositeEquipment("A composite");
    // equipment->Add (new FloppyDisk ("A left"));
    equipment->print();
     return 0;
}