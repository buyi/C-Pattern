#include "PricingVistor.h"
#include "FloppyDisk.h"
#include "Bus.h"


PricingVistor::PricingVistor():EquipmentVisitor() {}
	// PricingVistor::~PricingVistor() {}

	 void PricingVistor::VisitFloppyDisk (FloppyDisk* f) {
	 	_total += f->price();
	 	cout << "PricingVistor::VisitFloppyDisk" << _total << endl;

	 }
	 void PricingVistor::VisitBus (Bus* b) {
			_total += b->price();
			cout << "PricingVistor::VisitBus" << _total << endl;

	 }