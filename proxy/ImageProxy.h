#include "Image.h"
#include "Graphic.h"
class ImageProxy : public Graphic
{
public:
	ImageProxy();
	Image* GetImage();
	// Segmentation fault: 11
	 virtual void Draw();
	// ~ImageProxy();
private:
	Image* _image;
	
};