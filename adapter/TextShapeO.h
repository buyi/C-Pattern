#include "TextView.h"
#include "Point.h"
class TextShapeO
{
public:
	TextShapeO(TextView*);
	// ~TextShapeO();
	virtual void BoundingBox (Point& bottomLef, Point& topRight) const;
	// virtual Manipulator* CreateManipulator() const;

	virtual bool IsEmpty() const;
private:
	TextView* _text;
	
};