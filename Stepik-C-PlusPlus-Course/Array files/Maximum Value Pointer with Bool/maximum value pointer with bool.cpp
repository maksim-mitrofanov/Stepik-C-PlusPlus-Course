//
//  maximum value pointer with bool.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 23.08.2023.
//

#include "maximum value pointer with bool.hpp"

bool maxValuePointer(int * startPointer, int * endPointer, int * resultPointer) {
    bool resultBool = false;
    
    if (startPointer >= endPointer) {
        resultBool = false;
    } else {
        for (; startPointer < endPointer; ++startPointer) {
            if (*startPointer > *resultPointer) {
                *resultPointer = *startPointer;
            }
        }
        resultBool = true;
    }
    return resultBool;
}
