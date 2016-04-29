#ifndef _subject_H
#define _subject_H
class Observer;
#include <list> 



using namespace std;
class Subject
{
public:
	Subject() {}
	~Subject() {}
	virtual void Attach (Observer*);
	virtual void Detach (Observer*);
	virtual void Notify ();
	
	private:
		//Segmentation fault: 11 没有分配内存
		list<Observer*>* _obersers = new list<Observer*>;
};
#endif