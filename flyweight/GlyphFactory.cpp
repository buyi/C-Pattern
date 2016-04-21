/*
* @Author: buyi
* @Date:   2016-04-21 22:53:15
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-21 23:10:30
*/

#include <iostream>
#include "GlyphFactory.h"
#include "Character.h"

using namespace std;


GlyphFactory::GlyphFactory() {
	cout << "GlyphFactory init";
}

Glyph* GlyphFactory::createGlyph (char a) {
	return new Character(a);
}

// int main(){

//     return 0;
// }