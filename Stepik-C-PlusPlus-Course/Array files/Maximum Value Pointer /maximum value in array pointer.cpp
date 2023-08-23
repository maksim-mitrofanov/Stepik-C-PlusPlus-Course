//
//  maximum value in array pointer.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 23.08.2023.
//

#include "maximum value in array pointer.hpp"
int * maximumValuePointer(int * startPointer, int * endPointer) {
    int * temporaryPointer = startPointer;
    
    for (; startPointer < endPointer; ++startPointer) {
        if (*startPointer > *temporaryPointer) {
            temporaryPointer = startPointer;
        }
    }
    
    return temporaryPointer;
}
