
#ifndef _Equipment_H
#define _Equipment_H
class Equipment
{
	// private:
	
public:
	  char* _name ;
	 char* Name() {return _name;};
	virtual void print () = 0;
	
	~Equipment() {};
	// protected:
	Equipment( char* value);

	
};
#endif