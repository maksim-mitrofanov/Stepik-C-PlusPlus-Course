//
//  contains value.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 23.08.2023.
//

#include <iostream>
#include "contains value.hpp"

bool containsValue(int * startPointer, int * endPointer, int value) {
    bool result = false;
    for (; startPointer < endPointer; ++startPointer) {
        if (*startPointer == value) {
            result = true;
        }
    }
    return result;
}

