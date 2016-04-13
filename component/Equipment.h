
#ifndef _Equipment_H
#define _Equipment_H
class Equipment
{
public:
	const char* Name() {return _name;}
	virtual void print ();
	
	~Equipment();
// protected:
	Equipment(const char* value);
private:
	const char* _name;
	
};
#endif