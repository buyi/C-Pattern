#include "GlyphContext.h"
#include "Glyph.h"
class Character : public Glyph
{
public:
	Character(char);
	// ~Character();

	// virtual void Draw (GlyphContext*);

private:
	char _charcode;

	
};