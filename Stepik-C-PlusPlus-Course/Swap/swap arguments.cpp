//
//  swap arguments.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 21.08.2023.
//

#include "swap arguments.hpp"

void swapArguments(int * a, int * b) {
    int temporary = *a;
    *a = *b;
    *b = temporary;
}
