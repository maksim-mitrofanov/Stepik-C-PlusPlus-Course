//
//  greatest common divisor.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 19.08.2023.
//

#include "greatest common divisor.hpp"

int greatestCommonDivisor(int value1, int value2) {
    int result = 0;
    
    if (value1 == value2) {
        return value1;
    } else if (value1 > value2) {
        if (value1 % value2 == 0) { return value2; }
        else { return greatestCommonDivisor(value2, value1 % value2); }
        
    } else if (value2 > value1) {
        if (value2 % value1 == 0) { return value1; }
        else { return greatestCommonDivisor(value1, value2 % value1); }
    }
    
    return result;
}
