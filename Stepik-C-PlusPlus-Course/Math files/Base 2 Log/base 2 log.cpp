//
//  base 2 log.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 19.08.2023.
//

#include "base 2 log.hpp"
#include <iostream>
using namespace std;

int integerLogarithmBase2(int value) {
    int argument = value;
    int times = 0;
    
    while (argument > 1) {
        times += 1;
        argument /= 2;
    }
    
    return times;
}
