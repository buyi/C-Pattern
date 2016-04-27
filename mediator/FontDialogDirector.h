#include "DialogDirector.h"
#include "Widget.h"
#include "Button.h"
#include "ListBox.h"
class FontDialogDirector : public DialogDirector
{
public:
	FontDialogDirector();
	// ~FontDialogDirector();

		virtual void CreateWidgets ();
	// virtual void ShowDialog ();
	virtual void WidgetChanged (Widget*);

	Button* getOk ();
private:
	Button* _ok;
	Button* _cancle;
	ListBox* _fontList;
	
};