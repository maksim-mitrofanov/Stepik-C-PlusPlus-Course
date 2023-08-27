//
//  strings and characters manipulation.hpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 23.08.2023.
//

#ifndef strings_and_characters_manipulation_hpp
#define strings_and_characters_manipulation_hpp

#include <stdio.h>
unsigned stringLength(int * startPointer);
void concatenateStrings(char *first, char *second);
int firstIndexWherePatternMatches(char * text, char * pattern);

#endif /* strings_and_characters_manipulation_hpp */
