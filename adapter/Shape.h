#include "Point.h"
class Shape
{
public:
	Shape();
	//~Shape();
	virtual void BoundingBox (Point& bottomLef, Point& topRight) const;
	//virtual Manipulator* CreateManipulator() const;
};