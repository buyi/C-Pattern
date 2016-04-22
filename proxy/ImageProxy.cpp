/*
* @Author: buyi
* @Date:   2016-04-22 22:54:30
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-22 23:46:52
*/

#include <iostream>
#include "ImageProxy.h"
#include "Graphic.h"


using namespace std;

ImageProxy::ImageProxy () {
	cout << "ImageProxy init";
}

	Image* ImageProxy::GetImage() {
		if (_image == 0) {
			_image = new Image;
		}
		return _image;
	}


void ImageProxy::Draw() {
	cout << "ImageProxy draw1";
	Image* image = GetImage();
	cout << "ImageProxy draw2";
	image -> Draw();
	cout << "ImageProxy draw3";

	// GetImage()-> Draw ();
}

// int main(){

//     return 0;
// }