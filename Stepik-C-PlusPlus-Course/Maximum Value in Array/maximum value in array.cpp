//
//  maximum value in array.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 23.08.2023.
//

#include "maximum value in array.hpp"

int maximumValueIn(int * startPointer, int * endPointer) {
    int temporaryValue = 0;
    
    for (; startPointer < endPointer; ++startPointer) {
        if (*startPointer > temporaryValue) {
            temporaryValue = *startPointer;
        }
    }
    return temporaryValue;
}
