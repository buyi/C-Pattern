
#ifndef _VIEW_H
#define _VIEW_H
class View
{
public:
	View() {}
	// ~View();

	void Display();

	
	// 定义虚方法 才能让子类覆写
	// virtual void DoDisplay() = 0;
// protected:
	void SetFocus() {}
	virtual void DoDisplay();
	void ResetFocus() {}
};
#endif