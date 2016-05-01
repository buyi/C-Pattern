
#include <iostream>
#include "EquipmentVisitor.h"


using namespace std;
class PricingVistor : public EquipmentVisitor
{
public:
	PricingVistor() ;
	// ~PricingVistor() ;

	// 如果继承父类的虚函数，这里也得有virtual 如果没有virtual 则必须要求是纯虚函数
	 void VisitFloppyDisk (FloppyDisk* f);
	 void VisitBus (Bus* b);

	private:
		int _total = 0;
	
};