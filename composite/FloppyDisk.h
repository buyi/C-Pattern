#ifndef _FloppyDisk_H
#define _FloppyDisk_H
#include "Equipment.h"
class FloppyDisk : public Equipment {
	public:
		FloppyDisk ( char* value);
		~FloppyDisk();
		void print ();
};
#endif