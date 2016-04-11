#include "Shape.h"
#include "TextView.h"
#include "Point.h"
#include "Coord.h"
class TextShape :private TextView,public Shape
{
public:
	TextShape();
	// ~TextShape();

	virtual void BoundingBox (Point& bottomLef, Point& topRight) const;
	// virtual Manipulator* CreateManipulator() const;

	virtual bool IsEmpty() const;
	
};