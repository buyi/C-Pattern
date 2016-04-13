#ifndef _FloppyDisk_H
#define _FloppyDisk_H
#include "Equipment.h"
class FloppyDisk : public Equipment {
	public:
		FloppyDisk (const char* value);
		void print ();
};
#endif