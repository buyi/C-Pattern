/*
* @Author: buyi
* @Date:   2016-04-21 22:43:29
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-21 23:14:33
*/

#include <iostream>
#include "Character.h"

using namespace std;

void Glyph::Draw (GlyphContext*) {
	cout << "Character Draw";
}

	Character::Character(char a) {
		cout << "Character init" << a;
	}

// int main(){

//     return 0;
// }