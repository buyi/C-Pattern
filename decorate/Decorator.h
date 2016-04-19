#include "VisualComponent.h"
class Decorator :public VisualComponent
{
public:
	// Decorator(VisualComponent*);
	 Decorator(VisualComponent);
	~Decorator();
	virtual void Draw ();

private:
	// VisualComponent* _component;
	VisualComponent _component;
	
};