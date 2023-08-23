//
//  check-func.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 18.08.2023.
//

#include "check-func.hpp"

bool check(int x) {
    for (int firstValue = 1; firstValue * firstValue < x; ++firstValue) {
        for (int secondValue = 1; secondValue * secondValue < x; ++secondValue) {
            int firstValueSquared = firstValue * firstValue;
            int secondValueSquared = secondValue * secondValue;
            int sum = firstValueSquared + secondValueSquared;
            
            if (sum < x) {
                return true;
            }
        }
    }
    return false;
}
