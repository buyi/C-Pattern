/*
* @Author: buyi
* @Date:   2016-04-21 22:53:50
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-21 23:15:18
*/

#include <iostream>
#include "GlyphContext.h"
#include "GlyphFactory.h"
#include "Glyph.h"


using namespace std;

int main(){


	GlyphContext* context = new GlyphContext;
	GlyphFactory* factory = new GlyphFactory;
	Glyph*  glyph = factory->createGlyph ('c');
	glyph->Draw (context);


    return 0;
}