/*
* @Author: buyi
* @Date:   2016-04-27 22:10:25
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-27 22:17:45
*/

#include <iostream>
#include "FontDialogDirector.h"

using namespace std;

Button* FontDialogDirector::getOk () {
	return _ok;
}

FontDialogDirector::FontDialogDirector () {
	cout << "FontDialogDirector init";
}
		 void FontDialogDirector::CreateWidgets () {
		 	_ok = new Button(this);
		 	_cancle = new Button (this);
		 	_fontList = new ListBox (this);
		 }
	// virtual void ShowDialog ();
	 void FontDialogDirector::WidgetChanged (Widget* w) {
	 	if (w == _fontList) {
	 		cout << "ListBox WidgetChanged";
	 	} else if (w == _ok) {
		cout << "ok WidgetChanged";
	 	} else if (w == _cancle) {
	 		cout << "_cancle WidgetChanged";
	 	}
	 }